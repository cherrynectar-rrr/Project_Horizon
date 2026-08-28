# Project Horizon — Project Control → Voyage Room

Last Updated: 2026-08-28
Owner / Sole Writer: Project Horizon main control thread
Readers: Voyage Room and specialist threads
Authority: Control-level decisions and research requests

## Purpose

This is Project Control's formal single-writer channel to the Voyage Room. It records important feedback on Voyage recommendations, adopted/rejected/deferred strategic decisions, changed constraints and questions requiring further exploration.

The Voyage Room and specialist threads must not edit this file. New Voyage Room analysis returns through `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`.

## Current Control Message

- `VTC-20260828-05 — Review HZN-001 After Four Meaningful Trials Across Three Role Types` is **approved**.
- **HZN-001 — horizon-context-sync v0.4 is now Adopted** as Project Horizon's first shared Skill / reusable operating procedure.
- The adopted artifact is the current v0.4 content at `00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md`, blob SHA `ff2d8af44fd346e20ed6d9e255be4ff9a48e8f78` at adoption time.
- Adoption is **version-pinned**: later edits to the Voyage-owned prototype file are not automatically adopted. Any materially changed v0.5+ is a new candidate version requiring evidence and Project Control review before replacing adopted v0.4.
- Physical migration to `00_Project_Control/Skills/` remains deferred because `THREAD_PROTOCOL.md` does not yet define shared Skill Library write ownership. Operational adoption does not require inventing that permission now.
- HZN-001 should be used silently as a preflight before important Horizon work when fresh role-aware context matters; routine tiny tasks should not incur a full sync.
- HZN-001 remains subordinate to the Charter, `THREAD_PROTOCOL.md`, `MASTER_STATUS.md`, current Control decisions and role-specific write authority. It cannot grant permissions, activate work, transform recommendations into decisions, or replace external freshness verification.
- The four recorded trials are sufficient for adoption: two Voyage uses, one Main Control use, and one Algorithm Specialist invocation that exposed and corrected a real feedback-routing gap. A manufactured fifth trial is not required.
- `HZN-002` through `HZN-005` remain **frozen / not authorized for implementation**. HZN-001 adoption does not automatically unlock the backlog.
- `VTC-20260828-06 — Horizon Liaison` remains a separate pending proposal and is **not** decided by this Skill adoption.
- Voyage Room should update its owned HZN-001 artifact / architecture / Trial Log metadata to reflect adoption without changing the adopted v0.4 procedure. Trial history should remain preserved as historical evidence.
- Existing technical, Career, Finance and Academic priorities are unchanged.

## Decisions

### CTV-20260828-04 — Adopt HZN-001 horizon-context-sync v0.4

- Date: 2026-08-28
- Responds to: `VTC-20260828-05 — Review HZN-001 After Four Meaningful Trials Across Three Role Types`.
- Decision: **Adopt HZN-001 v0.4 as the first shared Horizon Skill.**
- Adopted version:
  - ID: `HZN-001`;
  - name: `horizon-context-sync`;
  - version: `0.4`;
  - current artifact: `00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md`;
  - adoption-time blob SHA: `ff2d8af44fd346e20ed6d9e255be4ff9a48e8f78`.
- Evidence considered:
  - Trial 001 — Voyage governance prototype use: prevented premature canonicalization and unnecessary full-repository scanning;
  - Trial 002 — Voyage continuation use: detected changed Control state and prevented frozen-backlog expansion;
  - Trial 003 — Main Control use: refreshed stale strategic state, used minimum authoritative reads, preserved write boundaries, and exposed cross-role Trial Log ownership friction;
  - Trial 004 — Algorithm Specialist invocation: preserved Algorithm STATUS cleanliness and exposed a real Specialist feedback-routing gap, leading to v0.4 routing rules without inventing a new reporting authority.
- Adoption rationale:
  - evidence spans three role types rather than only the authoring role;
  - observed failures produced concrete revisions from v0.2 through v0.4;
  - the Skill has repeatedly reduced stale-state risk, unnecessary reads, role leakage and unauthorized-write risk;
  - remaining feedback-routing limitations are explicitly modeled rather than hidden;
  - requiring another artificial trial solely to reach a numeric count would conflict with the evidence-over-bureaucracy principle.
- Operating scope:
  - use before important Horizon planning, cross-thread work, governance-sensitive tasks, repository writes where current state matters, and specialist sessions where stale state could materially affect execution;
  - do not trigger a full sync for casual conversation, tiny isolated exercises or tasks already operating from freshly fetched authoritative state.
- Authority constraints:
  - Charter > `THREAD_PROTOCOL.md` > `MASTER_STATUS.md` > role-specific formal state > relevant specialist status/evidence > chat memory;
  - the Skill never creates new authority or write permission;
  - authority ambiguity fails closed and escalates;
  - current external facts must still be freshly verified when material.
- Version-governance rule:
  - adopted v0.4 is version-pinned;
  - edits to the Voyage-owned file after adoption are candidate changes only and do not silently alter the adopted standard;
  - a materially changed v0.5+ requires Project Control review before becoming the new adopted version.
- Physical-location decision:
  - keep the artifact in the existing Voyage-owned path for now;
  - defer canonical migration to `00_Project_Control/Skills/` until shared-library ownership is explicitly reconciled with `THREAD_PROTOCOL.md`;
  - do not modify `THREAD_PROTOCOL.md` merely to make the directory structure look cleaner.
- Backlog decision:
  - `HZN-002 status-update` — frozen;
  - `HZN-003 evidence-intake` — frozen;
  - `HZN-004 strategic-route-audit` — frozen;
  - `HZN-005 opportunity-filter` — frozen;
  - no next Skill is authorized by this decision.
- Follow-up requested from Voyage Room:
  - mark HZN-001 / architecture metadata as Adopted while preserving v0.4 procedure content;
  - close the active Trial phase in the Trial Log while retaining historical trials;
  - treat any future procedure change as a new candidate version.
- Review triggers:
  - a material HZN-001 failure or authority ambiguity;
  - evidence that routine use creates more overhead than it removes;
  - a governance change that invalidates its authority/read model;
  - before replacing v0.4 with a later version;
  - before canonical-library migration.
- Resource / priority implication: none.
- Status: **Adopted / Active**.

### CTV-20260828-03 — Record HZN-001 Main Control Cross-Role Trial Feedback

- Date: 2026-08-28
- Decision: Recorded a successful Main Control cross-role trial with one governance-friction revision; HZN-001 continued in Trial pending broader evidence.
- Result: Voyage incorporated the feedback into v0.3/v0.4 cross-role Trial Evidence routing.
- Status: Complete; superseded in trial-state implication by `CTV-20260828-04`.

### CTV-20260828-02 — Authorize Shared Horizon Skills Trial and HZN-001

- Date: 2026-08-28
- Decision: Adopted the Skills architecture principles as a bounded Trial and authorized HZN-001 for shared cross-thread trial use.
- Key rules retained:
  - Thread = who owns work; Skill = how recurring work is performed; Status = what is currently true; Strategy = what may be worth doing; Evidence = what actually happened;
  - Skills are not a fourth governance layer;
  - Skills never grant new authority;
  - lifecycle: Draft → Trial → Adopted → Deprecated;
  - visible output should remain the user's actual task result rather than governance ceremony.
- Status: Trial phase completed for HZN-001; architecture principles remain active.

### CTV-20260828-01 — Activate Academic Operations & Evidence as Bounded Support

- Date: 2026-08-28
- Decision: Activated `11_Academic/STATUS.md` as **Academic Operations & Evidence / 学业运营与证据**, Active — Bounded Support / Maintenance.
- Initial objective: `Year 2 Fall Academic Baseline v1`.
- Boundary: factual course operations/evidence only; no universal tutoring, strategic academic decisions, technical-priority changes or daily administrative overhead.
- Status: Active.

### CTV-20260824-01 — Adopt Wealth Pillar and Activate Personal Finance & Capital as Bounded Support

- Date: 2026-08-24
- Decision: Financial Freedom / Capital Formation is a first-order long-horizon strategic pillar with asymmetric undergraduate execution. `10_Finance/STATUS.md` is Active — Bounded Support / Maintenance.
- Initial objective: Personal Finance Baseline v1.
- Status: Active.

### CTV-20260821-07 — Adopt Overseas MSc Total-Cost Affordability Constraint

- Date: 2026-08-21
- Decision: Use approximately RMB 100,000/year realistic all-in overseas MSc cost as the current planning band; zero tuition is not a hard requirement and country remains open.
- TUM remains financially conditional under then-current 2026 conditions unless reliable funding changes net cost.
- Status: Active strategic constraint.

### CTV-20260821-06 — Activate Career / Internship as Bounded Support

- Date: 2026-08-21
- Decision: Career / Internship is Active — Bounded Support for readiness, concrete opportunity review, lawful public-source due diligence, local application gaps and market-feedback capture.
- Boundary: no continuous high-volume application work or Career-owned technical curricula without later Control decision.
- Status: Active.

### CTV-20260821-05 — Adopt Career Opportunity Review & Company Due Diligence Workflow

- Date: 2026-08-21
- Decision: Adopt Role Reality Check → Verified User Fit → Company & Team Due Diligence → Risk / Value Verdict → Feedback Loop.
- Standard verdicts: `PRIORITY APPLY / APPLY / WATCH / SKIP`.
- Status: Active.

### CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework

- Date: 2026-08-20
- Decision: Adopt bounded Application Ready Gate; Python remains main, Algorithm structured, C++/Linux support, Embedded dormant until justified.
- Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.
- Status: Active.

### CTV-20260816-02 — Remove Astronomy From Current Strategic Route

- Date: 2026-08-16
- Decision: Astronomy remains outside Horizon's current strategic scope unless explicitly reopened; Physics remains a separate open academic interest.
- Status: Complete.

### CTV-20260816-01 — Acknowledge Long-Term Strategic Research Map

- Date: 2026-08-16
- Decision: Adopted Voyage Room's long-term map as advisory reference without execution-resource change.
- Status: Complete.

## Awaiting Separate Control Review

The following remain separate and are **not** decided by HZN-001 adoption:

- `VTC-20260828-06 — Establish Horizon Liaison as a Bounded Cross-Thread Relay`;
- `VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely`;
- `VTC-20260828-02 — Upgrade Japan to a Formal High-Potential 2029 MSc Strategic Candidate`;
- `VTC-20260825-01 — Establish 2029 MSc Application Exams & Gates Master Map`;
- `VTC-20260822-04 — Establish QS Top-100 Affordable Robotics MSc Target Pool`;
- `VTC-20260822-01 — TUM RCI Control-Engineering Prerequisite Audit`;
- `VTC-20260821-04 — Preserve Fragmented Strategic Inputs as a Durable Life-Route Ledger`.

Closed/superseded transmissions remain governed by their recorded status in `VOYAGE_TO_CONTROL.md`.

## Control Message Template

### CTV-YYYYMMDD-NN — Title

- Date:
- Responds to:
- Decision: Adopt / Reject / Defer / Experiment / Continue research
- Rationale:
- Evidence considered:
- Resource or priority implication:
- Constraints the Voyage Room must use:
- Further research question:
- Expected output:
- Review trigger or date:
- Status: Active / Complete / Superseded
