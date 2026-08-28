# HZN-001 — Trial Log

Last Updated: 2026-08-28
Status: Active Trial

## Purpose

Record real uses of `HZN-001 — horizon-context-sync`, especially cases where it prevents stale-state decisions, unnecessary reads, role leakage or unauthorized writes.

This is evidence for later Project Control adoption / revision decisions. It is not a status journal; record only meaningful trials.

---

## Trial 003 — Main Control Cross-Role Context Sync

- Date: 2026-08-28
- Invoking role: Main Control
- Evidence source: `CTV-20260828-03` returned through `00_Project_Control/CONTROL_TO_VOYAGE.md`.
- Task classification:
  - governance / context-sync trial;
  - repository-read boundary check;
  - cross-role Skill validation.

### Minimum authoritative reads selected by Main Control

- `00_Project_Control/MASTER_STATUS.md`
- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`
- `00_Project_Control/CONTROL_TO_VOYAGE.md`
- `00_Project_Control/THREAD_PROTOCOL.md` because governance/write authority was material
- HZN-001 and its current Trial Log for trial-specific verification

### Outcome

The Main Control trial correctly discovered that the latest Voyage transmission had moved on to `VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely`, while the existing Skills bounded-Trial authorization remained active.

It avoided a repository-wide scan, did not rely on stale chat state, and correctly refused to edit the Voyage-owned Trial Log.

### What worked

- HZN-001 produced value from a second role type, not only Voyage Room.
- Minimum authoritative reads were sufficient.
- Recommendation / current-transmission state was refreshed correctly.
- Role write boundaries were preserved.

### Friction found

The previous HZN-001 Trial Evidence convention implied that meaningful trials were recorded in the Voyage-owned `TRIAL_LOG.md`, but did not explicitly explain how non-Voyage roles should return trial evidence without violating write ownership.

### Revision made

HZN-001 was updated from v0.2 to v0.3:

- Main Control returns meaningful trial feedback through `CONTROL_TO_VOYAGE.md`;
- Specialist Threads never edit the Voyage Trial Log and use only existing authorized channels;
- a Specialist STATUS update is allowed only when the issue independently meets the normal meaningful-update threshold;
- Voyage Room incorporates valid cross-role feedback into the Trial Log.

### Trial verdict

**Pass with governance-friction revision completed.**

Cross-role evidence requirement is now partially satisfied. The next valuable trial should preferably come from a Specialist Thread.

---

## Trial 002 — Continue Skill Development After Control Decision

- Date: 2026-08-28
- Invoking role: Voyage Room
- User intent: Continue building the Horizon Skills system after the first HZN-001 trial.
- Task classification:
  - strategic operating-architecture continuation;
  - repository write;
  - possible implementation of additional Skills;
  - cross-thread governance implication.

### Minimum authoritative reads selected

- `00_Project_Control/MASTER_STATUS.md` — verify current thread structure and whether Academic Operations & Evidence is now active.
- `00_Project_Control/CONTROL_TO_VOYAGE.md` — verify whether the shared Skills-layer proposal and HZN-001 had been adopted since Trial 001.
- `11_Academic/STATUS.md` — determine factual ownership of recurring course-evidence operations relevant to the proposed future `evidence-intake` pattern.
- `00_Strategy/Voyage_Room/HORIZON_SKILLS_ARCHITECTURE.md` — compare current prototype architecture against new Control state.
- `00_Strategy/Voyage_Room/skills/horizon-context-sync/TRIAL_LOG.md` — preserve prior trial evidence and avoid duplicate conclusions.

### Context packet

- Role: Voyage Room
- Task Type: Strategic architecture + repository write
- Authoritative state change discovered: `CTV-20260828-02` has authorized the Skills architecture principles as a bounded Trial and HZN-001 v0.2 for shared cross-thread trial use.
- Relevant active thread: Academic Operations & Evidence is formally Active — Bounded Support / Maintenance and owns factual academic evidence maintenance.
- Allowed writes: Voyage Room architecture / prototype / trial documents and Voyage-owned bridge.
- Prototype work allowed: HZN-001 maintenance inside Voyage-owned prototype path.
- Additional Skill implementation allowed: No. HZN-002–HZN-005 are explicitly frozen by Control.
- Canonical adoption authority: Project Control.
- External freshness needed: No.
- Escalation needed: Not for continued HZN-001 trial; yes before additional Skill implementation or canonical migration.

### Outcome

The preflight discovered that the previous local assumption — "Skills proposal still awaiting Control" — was stale.

It also prevented the opposite error: treating Control's bounded Trial approval as permission to implement the entire backlog.

The correct next actions became:

1. update the Skills Architecture to reflect bounded Trial authorization;
2. keep HZN-001 in the Voyage-owned prototype path while allowing shared invocation;
3. keep HZN-002–HZN-005 frozen;
4. recognize Academic Operations & Evidence as the operational owner of course-evidence work, without prematurely implementing `HZN-003 evidence-intake`;
5. seek additional real HZN-001 uses across more than one role type before Control review.

### What worked

- The Skill caught a real **stale-state change** in `CONTROL_TO_VOYAGE.md`.
- Minimum reads were sufficient; no full-repository scan was needed.
- It distinguished shared trial authorization from canonical migration.
- It distinguished a future Skill's procedure layer from the Academic thread's execution ownership.
- It prevented unauthorized implementation of an attractive backlog item.

### Friction / possible improvements

- No HZN-001 text change is required from this trial.
- The main remaining evidence gap is cross-role use: both Trial 001 and Trial 002 were invoked from Voyage Room.
- Future meaningful trials should preferentially come from Main Control or a Specialist Thread rather than manufacturing more Voyage-only architecture cases.

### Trial verdict

**Pass — no revision required.**

HZN-001 produced value by detecting changed Control state and preventing both under-reading and over-expansion.

---

## Trial 001 — Skill-Layer Development Governance

- Date: 2026-08-28
- Invoking role: Voyage Room
- User intent: Begin creating reusable Horizon Skills after agreeing that Voyage prototypes and Project Control decides cross-thread adoption.
- Task classification:
  - strategic operating-architecture design;
  - repository write;
  - cross-thread governance implication.

### Minimum authoritative reads selected

- `00_Project_Charter/Project_Horizon_Charter_v3.0.md` — governance / three-layer authority.
- `00_Project_Control/THREAD_PROTOCOL.md` — write ownership and startup rules.
- `00_Project_Control/MASTER_STATUS.md` — current approved project structure.
- `00_Project_Control/CONTROL_TO_VOYAGE.md` — check whether the proposed shared Skills layer had already been adopted.
- `00_Strategy/Voyage_Room/HORIZON_SKILLS_ARCHITECTURE.md` — current prototype rules.
- `00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md` — invoking Skill definition.

### Context packet

- Role: Voyage Room
- Task Type: Strategic architecture + repository write
- Relevant constraint: Voyage may prototype in its own area but cannot make a shared cross-thread Skill canonical by itself.
- Allowed writes: Voyage Room documents / Voyage-owned bridge only.
- External freshness needed: No.
- Escalation needed: Yes for canonical shared adoption.
- Key unknown resolved: `CONTROL_TO_VOYAGE.md` had not yet adopted the shared Skills-layer proposal.

### Outcome

The preflight prevented premature creation of canonical Control-owned Skills and prevented treating HZN-002 / HZN-003 as already authorized shared standards.

The correct next action became:

1. move HZN-001 itself into real Trial;
2. collect trial evidence;
3. revise from observed failures / friction;
4. let Project Control decide cross-thread adoption and whether to authorize the next Skills.

### What worked

- Role/write boundary was surfaced before writing.
- Only governance-relevant files were fetched; no repository-wide scan was needed.
- The distinction between prototype permission and canonical adoption was preserved.
- The user-visible task still advanced rather than stopping at governance ceremony.

### Friction / possible improvements

- `HZN-001` should explicitly distinguish **prototype creation inside a role-owned area** from **canonical shared-library writes**.
- For architecture work, checking the latest `CONTROL_TO_VOYAGE.md` should be mandatory when a prior adoption request exists.
- A lightweight Trial Log convention is useful and should be added to the Skill lifecycle if repeated trials confirm its value.

### Trial verdict

**Pass with revisions recommended.**

The Skill produced real decision value by preventing role leakage and unnecessary canonicalization.
