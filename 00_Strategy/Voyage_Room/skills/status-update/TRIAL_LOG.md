# HZN-002 — status-update Trial Log

Last Updated: 2026-08-29
Status: Active Candidate Trial
Owner: Horizon Core

## Purpose

Record only meaningful real uses of `HZN-002 — status-update` that reveal value, failure, friction or a needed revision.

Do not create formal state merely to generate Trial evidence.

---

## Trial 002 — Legacy Terminology Detected, No Formal Update

- Date: 2026-08-29
- Invoking role: Horizon Core
- Context: While evaluating HZN-002, Core inspected `11_Academic/STATUS.md` and `10_Finance/STATUS.md` and observed legacy governance wording such as `Project Control` / `Needs Master Decision`.
- Task classification:
  - status-maintenance review;
  - no-write threshold test.

### Meaningful-change gate

The only immediately available change was terminology normalization after the Horizon Core merger.

`THREAD_PROTOCOL.md` v2.0 explicitly allows legacy wording to remain until the next meaningful status update and says not to create churn solely for renaming.

### Outcome

**Formal update: No**

No Academic or Finance STATUS write was made.

### What worked

- HZN-002 correctly distinguished stale terminology from meaningful execution state.
- It avoided cosmetic commits and preserved the rule that STATUS is state, not housekeeping.
- It established the intended behavior for opportunistic migration: normalize legacy terms only when a real future update already touches the file.

### Trial verdict

**Pass — no-write gate prevented unnecessary STATUS churn.**

---

## Trial 001 — Core Authorizes HZN-002 Candidate and Updates MASTER

- Date: 2026-08-29
- Invoking role: Horizon Core
- Trigger: After HZN-001 v0.5 adoption, Core separately approved HZN-002 v0.1 for Candidate Trial based on stable recurring STATUS / MASTER update rules.
- Evidence:
  - `00_Project_Control/THREAD_PROTOCOL.md` v2.0;
  - `00_Strategy/Voyage_Room/skills/status-update/SKILL.md` v0.1;
  - inspected Specialist patterns in Algorithm, Academic Operations & Evidence, and Personal Finance & Capital.
- Task classification:
  - Core decision;
  - formal MASTER state change;
  - real-write threshold test.

### Meaningful-change gate

The Core decision changed formal Skills activation state:

- HZN-002 moved from frozen backlog to Candidate — Trial;
- HZN-003 through HZN-005 remained frozen.

This meets the Core decision / activation-state threshold.

### Target resolution

- Owner: Horizon Core
- Target: `00_Project_Control/MASTER_STATUS.md`
- Specialist STATUS files: not touched.

### Update behavior

Before writing, Core fetched the latest `MASTER_STATUS.md` and SHA.

The write changed only the Skills state and the corresponding review trigger. Python, Algorithm, Linux, C++, Career, Finance, Academic, competition and strategic-route state remained unchanged.

Commit:

`08265da64c2fd0d849fe74c4d0a4f777f2c4f886` — `core: authorize HZN-002 status-update trial`

### What worked

- The meaningful-change gate correctly permitted the write.
- Ownership routed the change to MASTER rather than a Specialist STATUS.
- The change did not unlock HZN-003+.
- Unrelated execution state was preserved.

### Trial verdict

**Pass — first real write produced a bounded Core-state patch.**

---

## Remaining Evidence Gap

HZN-002 now has:

- one real **No formal update** case;
- one real **formal update** case.

Before adoption, seek at least one natural Specialist-side event that either:

1. correctly produces a minimal Specialist STATUS update from real evidence; or
2. correctly refuses a tempting but sub-threshold Specialist update.

Do not manufacture a milestone or edit a Specialist STATUS merely to finish the Trial.
