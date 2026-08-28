# Project Horizon — Skills Architecture v2

Last Updated: 2026-08-29
Owner: Horizon Core
Status: Active Architecture — Conservative Expansion

## 1. Purpose

A **Horizon Skill** is a reusable, versioned operating procedure for a recurring task pattern that is stable enough to execute consistently.

Skills exist to reduce repeated setup, context cost, inconsistent execution and role leakage.

> Thread = who owns the work.  
> Skill = how a recurring type of work is performed.  
> Status = what is currently true.  
> Strategy = what may be worth doing.  
> Evidence = what actually happened.

Skills compress mature methods. They do **not** create new execution lines.

## 2. Governance

Project Horizon now uses:

- **Horizon Core = Explore + Decide & Coordinate**
- **Specialist Threads = Execute**

Every Skill is subordinate to:

1. `00_Project_Charter/Project_Horizon_Charter_v4.0.md`
2. `00_Project_Control/THREAD_PROTOCOL.md`
3. `00_Project_Control/MASTER_STATUS.md`
4. role-specific authority and evidence

A Skill never grants authority the invoking role does not already possess.

If write ownership or authority is unclear, fail closed rather than inventing permission.

## 3. Design Principles

A useful Skill should:

- read the **minimum sufficient context** rather than the whole repository;
- distinguish verified state, user evidence, external facts and inference;
- produce a predictable result without unnecessary ceremony;
- preserve Specialist / Core boundaries;
- reuse fresh state already fetched in the same conversation when safe;
- verify mutable external facts when material;
- reduce total user / system effort rather than create maintenance for its own sake.

A Skill is **not**:

- a new thread or governance layer;
- a hidden memory store;
- a generic prompt collection;
- a substitute for Charter / Protocol / MASTER / STATUS;
- a mechanism that silently activates work;
- a reason to automate a process before it is understood.

## 4. Lifecycle

### Draft

A proposed procedure exists but has not yet earned shared use.

### Candidate / Trial

The procedure is exercised on real tasks. Record only meaningful value, failure or friction.

### Adopted

Horizon Core explicitly approves a version as the preferred shared procedure for that task pattern.

Adoption is **version-pinned**. Editing a working file does not silently replace the adopted version.

### Deprecated

A newer adopted version or governance change supersedes the old one. Historical evidence remains discoverable.

## 5. HZN-001 State

### Adopted baseline

**HZN-001 v0.4 — horizon-context-sync**

- Status: Adopted historical baseline
- Decision: `CTV-20260828-04`
- Adoption-time blob SHA: `ff2d8af44fd346e20ed6d9e255be4ff9a48e8f78`
- Historical trials: `skills/horizon-context-sync/TRIAL_LOG.md`

v0.4 proved the basic method across Voyage Room, Main Control and an Algorithm Specialist, but its role model predates the Horizon Core merger.

### Current candidate

**HZN-001 v0.5 — Horizon Core Edition**

- Status: Candidate — Trial
- Current artifact: `skills/horizon-context-sync/SKILL.md`
- Candidate trial log: `skills/horizon-context-sync/TRIAL_LOG_V0.5.md`

Primary change:

- simplify the operating roles to `Horizon Core` + `Specialist Thread`;
- remove live Voyage–Control bridge logic;
- reduce redundant reads and old trial-routing machinery;
- preserve the same evidence / authority / freshness protections.

Adoption gate:

- at least one clean real Horizon Core use;
- at least one real Specialist use under the two-layer model;
- no material authority ambiguity or evidence that the rewrite increases overhead.

Do not manufacture tests solely to hit a count.

## 6. Physical Location

The Skill currently remains under the preserved strategy path:

`00_Strategy/Voyage_Room/skills/horizon-context-sync/`

This path is now Core-maintained under Charter v4.0 / Protocol v2.0.

Potential future canonical location remains:

`00_Project_Control/Skills/`

Do **not** migrate merely for cosmetic cleanliness. Reconsider physical migration only after v0.5 is adopted or when multiple adopted Skills make a shared library materially useful.

## 7. Frozen Backlog

The following remain **not authorized for implementation**:

- `HZN-002 — status-update`
- `HZN-003 — evidence-intake`
- `HZN-004 — strategic-route-audit`
- `HZN-005 — opportunity-filter`

HZN-001 v0.5 work does not unlock them automatically.

The next Skill should begin only after HZN-001 v0.5 is either adopted or intentionally abandoned.

## 8. Invocation Rule

Skills should be invoked by task pattern, normally without visible ceremony.

For HZN-001:

- important Horizon / cross-thread / governance-sensitive task → run a minimum context preflight;
- tiny isolated work → do not perform a full sync;
- fresh authoritative state already fetched in the same conversation → reuse it when safe rather than rereading by ritual.

The visible response should answer the user's actual task.

## 9. Success Test

The Skills layer is useful only if it measurably reduces one or more of:

- repeated setup instructions;
- unnecessary repository reads;
- incorrect or unauthorized writes;
- stale-state decisions;
- context / administration cost;
- user coordination burden.

If a Skill adds more maintenance than it removes, simplify or remove it.

## 10. Immediate Operating Rule

For now:

1. trial only HZN-001 v0.5;
2. preserve v0.4 as the adopted historical baseline;
3. seek one real Specialist validation;
4. revise only from observed friction;
5. keep HZN-002–005 frozen;
6. decide v0.5 adoption before starting another Skill.