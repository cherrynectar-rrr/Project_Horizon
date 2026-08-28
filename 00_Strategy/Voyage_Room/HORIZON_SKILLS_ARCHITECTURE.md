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

### Current adopted version

**HZN-001 v0.5 — horizon-context-sync / Horizon Core Edition**

- Status: **Adopted — Active**
- Current artifact: `skills/horizon-context-sync/SKILL.md`
- Adoption evidence: `skills/horizon-context-sync/TRIAL_LOG_V0.5.md`
- Historical adopted baseline: v0.4 under `CTV-20260828-04`, blob SHA `ff2d8af44fd346e20ed6d9e255be4ff9a48e8f78`
- Historical v0.1–v0.4 trials: `skills/horizon-context-sync/TRIAL_LOG.md`

v0.5 migrated the Skill to the two-layer Horizon Core model and retained the same evidence, authority and freshness protections while removing stale Voyage–Control machinery.

Adoption evidence includes:

- Trial 005 — clean Horizon Core self-preflight using fresh-state reuse and minimum sufficient context;
- Trial 006 — real Algorithm Specialist invocation with repository-verified clean state, no artificial STATUS churn and no cross-thread write leakage.

Evidence limitation remains explicit: GitHub does not expose chat-side read telemetry, so exact internal read sequences are not independently observable. The Skill must not invent such telemetry.

### Superseded version

**HZN-001 v0.4** remains preserved as the first adopted historical baseline. It is no longer the preferred operational version because its three-role model predates Charter v4.0 / Protocol v2.0.

## 6. HZN-002 State

**HZN-002 v0.1 — status-update**

- Status: **Candidate — Trial**
- Current artifact: `skills/status-update/SKILL.md`
- Trial evidence: `skills/status-update/TRIAL_LOG.md`

Purpose:

- decide whether a formal STATUS / MASTER update is justified;
- route the update to the correct single owner;
- fetch the latest target + SHA before writing;
- apply the minimum evidence-justified patch;
- prevent plans, tiny exercises, communication-only events and cosmetic cleanup from creating state churn.

Initial evidence:

- Trial 001 — Core authorization of HZN-002 correctly produced a bounded MASTER update;
- Trial 002 — legacy `Project Control / Needs Master Decision` wording in older Specialist STATUS files was correctly left untouched because no meaningful execution change justified a write.

Remaining adoption evidence gap:

- one natural Specialist-side case that demonstrates either a clean minimal Specialist STATUS update or a correct no-write decision.

Do not manufacture Specialist state to finish the Trial.

## 7. Physical Location

Current Skills remain under the preserved strategy path:

`00_Strategy/Voyage_Room/skills/`

This path is Core-maintained under Charter v4.0 / Protocol v2.0.

Potential future canonical location remains:

`00_Project_Control/Skills/`

Do **not** migrate merely for cosmetic cleanliness. Reconsider physical migration only when multiple adopted Skills make a shared library materially useful or a governance / maintenance benefit becomes clear.

## 8. Frozen Backlog

The following remain **not authorized for implementation**:

- `HZN-003 — evidence-intake`
- `HZN-004 — strategic-route-audit`
- `HZN-005 — opportunity-filter`

HZN-002 Trial authorization does **not** unlock them automatically.

Any next Skill requires a separate Horizon Core decision after HZN-002 is adopted, abandoned or materially revised.

## 9. Invocation Rule

Skills should be invoked by task pattern, normally without visible ceremony.

### HZN-001

- important Horizon / cross-thread / governance-sensitive task → run a minimum context preflight;
- tiny isolated work → do not perform a full sync;
- fresh authoritative state already fetched in the same conversation → reuse it when safe rather than rereading by ritual.

### HZN-002

- a real event may justify STATUS / MASTER state → apply the meaningful-change gate first;
- threshold not met → no formal write;
- threshold met → route to the correct owner, fetch latest target / SHA and make the minimum justified patch.

The visible response should answer the user's actual task rather than narrating Skill machinery unless the decision itself is useful to explain.

## 10. Success Test

The Skills layer is useful only if it measurably reduces one or more of:

- repeated setup instructions;
- unnecessary repository reads;
- incorrect or unauthorized writes;
- stale-state decisions;
- meaningless STATUS / MASTER churn;
- context / administration cost;
- user coordination burden.

If a Skill adds more maintenance than it removes, simplify or remove it.

## 11. Immediate Operating Rule

For now:

1. operate with adopted HZN-001 v0.5;
2. trial only HZN-002 v0.1 as the next candidate;
3. preserve historical Skill evidence;
4. seek one natural Specialist-side HZN-002 validation;
5. revise only from observed friction;
6. keep HZN-003–005 frozen;
7. decide HZN-002 adoption before starting another Skill.
