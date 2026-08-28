# HZN-001 v0.5 — Candidate Trial Log

Last Updated: 2026-08-29
Status: Candidate Trial Complete — Adoption Recommended
Owner: Horizon Core

## Purpose

Record only meaningful real uses of the **v0.5 Horizon Core Edition** that reveal value, failure, friction or a needed revision.

Historical v0.1–v0.4 trial evidence remains preserved in `TRIAL_LOG.md` and Git history. Adopted v0.4 remains pinned by `CTV-20260828-04` until v0.5 is formally adopted.

---

## Trial 006 — Algorithm Specialist Validation Under Horizon Core

- Date: 2026-08-29
- Invoking role: Algorithm Specialist Thread
- User intent: run HZN-001 v0.5 and then continue the existing Algorithm main line.
- Evidence classification: **user-reported invocation + repository-verified clean Specialist state**.
- Task classification:
  - Specialist-thread context preflight;
  - two-layer governance validation;
  - no independent Algorithm milestone expected from the Skill test itself.

### Repository observations

- `05_Algorithm/STATUS.md` remains focused on real Algorithm execution state.
- The current topic remains binary search and the next milestone remains the first verifiable binary-search milestone.
- `Last Updated` remains 2026-08-21; the Skill test did not manufacture a status update.
- No new commit was created under `05_Algorithm/` merely to record the Skill test; the most recent Algorithm-path commit remains the 2026-08-21 advance to binary search.
- No evidence indicates that the Specialist modified another thread or converted the Skill invocation into execution evidence.

### What can and cannot be verified

GitHub verifies the **absence of incorrect writes / artificial status churn** and the preservation of Algorithm's factual state.

GitHub does not record chat-side read telemetry, so Horizon Core cannot independently prove exactly which files the Algorithm chat read or did not read during the invocation. The user confirmed that the invocation completed. Therefore this trial does **not** invent a claim that every internal read step was independently observed.

### Outcome

The observable Specialist-side behavior is consistent with v0.5's intended boundaries:

1. the Skill invocation did not become an Algorithm milestone;
2. Algorithm STATUS remained clean and factual;
3. no cross-thread write leakage appeared;
4. no unnecessary repository artifact was created solely for trial bookkeeping.

Combined with:

- Trial 005's clean Horizon Core self-preflight under Charter v4.0 / Protocol v2.0; and
- v0.4's prior cross-role evidence establishing the underlying context-sync method,

this is sufficient evidence for the **governance migration** from v0.4 to v0.5. A further manufactured test would add little decision value.

### Trial verdict

**Pass — Specialist validation sufficient for v0.5 adoption.**

Evidence limitation retained: exact chat-side read telemetry is not independently available from GitHub.

---

## Trial 005 — Horizon Core Governance Migration / Self-Preflight

- Date: 2026-08-29
- Invoking role: Horizon Core
- User intent: optimize Horizon efficiency by migrating HZN-001 from the retired Voyage Room + Main Control model to the new Horizon Core model.
- Task classification:
  - governance-sensitive repository write;
  - Skill-version migration;
  - efficiency / context-cost reduction.

### Authoritative state used

The conversation had freshly fetched and verified:

- `00_Project_Charter/Project_Horizon_Charter_v4.0.md`;
- `00_Project_Control/THREAD_PROTOCOL.md` v2.0;
- `00_Project_Control/MASTER_STATUS.md` under Horizon Core;
- adopted HZN-001 v0.4 and current Skills Architecture / historical Trial Log.

Because this state was already fresh in the same conversation, the v0.5 preflight correctly did **not** require redundant refetching of the full governance stack before drafting the candidate.

### Context packet

- Role: Horizon Core
- Task Type: Governance-sensitive Skill migration + repository write
- Authoritative State: two-layer Horizon Core + Specialist model under Charter v4.0 / Protocol v2.0
- Relevant Priorities / Constraints: reduce context and governance overhead; do not unlock HZN-002+; preserve adopted v0.4 history
- Affected Threads: none directly
- Allowed Writes: Core-owned Skill / strategic workspace; no specialist STATUS writes
- External Freshness Needed: No
- Needs Core Decision: No — user already authorized beginning the v0.5 candidate work and Core owns the workspace
- Unknowns That Matter: whether v0.5 remains reliable in a real Specialist invocation

### Outcome

The candidate rewrite:

1. reduced the role model from three roles to two;
2. removed live Voyage–Control bridge reads;
3. updated the authority root from Charter v3.0 to Charter v4.0;
4. simplified the internal Context Packet;
5. removed obsolete cross-role Trial Log routing machinery;
6. preserved v0.4 as a pinned adopted historical baseline instead of silently replacing it;
7. avoided a repository-wide scan and avoided rereading already-fresh authoritative state.

### What worked

- The Skill adapted cleanly to the Horizon Core merger without needing a new governance layer.
- Fresh-state reuse reduced redundant reads.
- Write ownership remained clear: Core may maintain the preserved strategy / Skill workspace, while specialist STATUS ownership remains untouched.
- The candidate became shorter and more directly aligned with current Horizon governance.

### Friction / open evidence gap

No material Core-side friction was found in this trial.

The remaining evidence gap was Specialist behavior under v0.5; this was addressed by Trial 006.

### Trial verdict

**Pass — Core migration trial successful.**
