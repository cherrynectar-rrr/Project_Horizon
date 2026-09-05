# Project Horizon — Thread Protocol

Last Updated: 2026-09-05
Version: V2.4 — Multi-Repository Efficiency + Thread Handoff Edition

## Purpose

GitHub is Project Horizon's formal shared state. Project Horizon now operates as a **multi-repository ecosystem** while preserving the same two-layer governance model:

- **Horizon Core / 核心舱 = Explore + Decide & Coordinate**
- **Specialist Threads = Execute**

`cherrynectar-rrr/Project_Horizon` is the **control plane**. Detailed execution state belongs to the repository that owns the relevant specialist or project.

The goal of this protocol is to minimize startup and coordination cost. Read the **minimum authoritative state** needed for the task; do not scan the ecosystem by default.

---

## 1. Canonical State Topology

Repository ownership is defined in:

`00_Project_Control/REPOSITORIES.md`

Current canonical detailed state includes:

| Area | Canonical detailed state |
| --- | --- |
| Horizon-wide priority / activation / resource allocation | `Project_Horizon/00_Project_Control/MASTER_STATUS.md` |
| Python | `Horizon_Learning/Python/STATUS.md` |
| C++ | `Horizon_Learning/CPP/STATUS.md` |
| Linux | `Horizon_Learning/Linux/STATUS.md` |
| Algorithm | `Horizon_Learning/Algorithm/STATUS.md` |
| Data Structures | `Horizon_Learning/Data_Structures/STATUS.md` |
| Embedded | `Horizon_Learning/Embedded/STATUS.md` |
| Qingdao Agri Data Competition | `Horizon_projects/2026_Qingdao_Agri_Data_Competition/STATUS.md` |
| Academic Operations & Evidence | `Horizon_Academic/Academic_Operations/STATUS.md` |
| Personal Finance & Capital | `Horizon_Life/Finance/STATUS.md` |
| Nutrition & Recovery | `Horizon_Life/Nutrition_Recovery/STATUS.md` |
| Career / Internship | `Project_Horizon/09_Career/STATUS.md` until a later explicit repository decision |
| Horizon Skills | `Horizon_Skills/` |
| Earth Flywheel | `Earth_Flywheel/` project-local state/evidence as it matures |

Legacy execution copies inside `Project_Horizon` are migration/history artifacts after cutover and must not be treated as independently writable live state.

---

## 2. Session Startup — Local First

### Horizon Core

For important Core work:

1. Read `Project_Horizon/00_Project_Control/MASTER_STATUS.md`.
2. Read only the specialist/project `STATUS.md` files that can materially change the decision.
3. Read relevant strategy only when prior route research, competing hypotheses or unresolved questions matter.
4. Read Charter / Protocol only when governance, authority, repository ownership or shared infrastructure is material.
5. Verify current external sources when mutable real-world facts matter.

Do **not** reread already-fresh state in the same conversation without a reason.

### Specialist Thread

Default startup:

1. Read the specialist's **canonical local `STATUS.md`**.
2. Start execution.

Read `MASTER_STATUS.md` only when the task involves:

- priority or capacity;
- another thread;
- activation / pause / promotion;
- competition or project scope;
- a Core dependency;
- a conflict between local state and Horizon-wide state.

Read README / course architecture only when long-scope context is needed. Read Charter / Protocol only when authority or write ownership is unclear.

Routine low-impact questions do not require a full Horizon sync.

### Mandatory New-Thread Handoff Standard

Whenever Horizon Core or a Specialist recommends, authorizes or creates a **new chat thread** for a Specialist, bounded project, Sprint, maintenance line or other Horizon-owned execution context, the handoff must include a **ready-to-paste starter prompt in the same response**.

Do not merely say "open a new thread" or provide only a repository path. The user should not have to reconstruct startup instructions manually.

The starter prompt should include only the minimum useful context, normally:

1. **Role / owner** — what thread or project the new chat is responsible for;
2. **Canonical repository / path** — where current state lives;
3. **Startup reads** — local `STATUS.md` first, plus README / MASTER / Protocol only when materially required;
4. **Current status and one current goal**;
5. **Scope / authority boundaries** — especially what the thread must not decide or modify;
6. **Relevant Skills / methods** when they materially affect execution;
7. **Known hard constraints** — deadlines, capacity limits, verified deliverables or hardware / data dependencies;
8. **First action** — what the new thread should do immediately after reading state.

The prompt must be directly usable without the user needing to rewrite it. Avoid loading it with full Horizon history that the new thread can retrieve from canonical state itself.

If the new thread has already been formally initialized in GitHub, reference its canonical `STATUS.md` and instruct the new chat to continue from there rather than recreating planning state.

This is a **user-experience and coordination rule**, not a new governance layer or message bus.

---

## 3. Write Ownership

### Horizon Core

Horizon Core owns:

- `Project_Horizon/00_Project_Control/MASTER_STATUS.md`;
- `Project_Horizon/00_Project_Control/THREAD_PROTOCOL.md`;
- repository registry / migration infrastructure;
- top-level strategy and Core decisions;
- shared operating architecture explicitly assigned to Core.

### Specialist Threads

A Specialist may write only:

- its canonical `STATUS.md`;
- its authorized operational workspace and evidence files.

A Specialist must not:

- modify another Specialist's state;
- modify `MASTER_STATUS.md`;
- redefine long-term direction;
- change cross-thread priority;
- convert a local technical need into a new Horizon main line.

Use:

`Needs Core Decision: Yes`

when a meaningful local state change requires Core judgment.

---

## 4. Project Activation Semantics

When Horizon Core authorizes a project as **GO / Active**, the owning Project Specialist may execute the approved scope end-to-end without returning to Core for permission at every internal phase.

Internal phases are execution checkpoints, not recurring permission gates.

Escalate only when there is a material change such as:

- major topic / track / purpose change;
- substantial new technical stack or feature family;
- material reallocation from another Horizon line;
- conflict with GPA-sensitive obligations or a higher-priority commitment;
- deadline / feasibility / evidence failure that makes Pivot or Stop serious;
- high-cost, irreversible, regulated or strategically significant commitment.

A **Feasibility Only / Trial** authorization is not equivalent to full project activation.

---

## 5. Meaningful-Change Gate

Update `STATUS.md` or `MASTER_STATUS.md` only when at least one meaningful change occurs:

- milestone completed;
- blocker appears, changes or resolves;
- route or scope materially changes;
- competition / project / application result arrives;
- next gate materially changes;
- activation / priority changes;
- Specialist requires Core decision.

Do not update formal state for ordinary conversation, tiny exercises, speculative plans, cosmetic wording or message passing.

Before writing:

1. fetch the latest target and SHA;
2. preserve valuable existing facts;
3. make the minimum evidence-justified change;
4. use ISO dates;
5. never record plans as completion;
6. distinguish verified evidence, user report and inference;
7. fail closed if write ownership is unclear.

`MASTER_STATUS.md` is a **control summary**, not a complete history archive.

---

## 6. Standard Specialist STATUS Shape

```markdown
# <Thread> Status

Last Updated: YYYY-MM-DD
Status: <Main / Support / Active / Bounded / Maintenance / Paused / Blocked>

## Current Goal
...

## Current Stage
...

## In Progress
...

## Next Milestone
...

## Recent Evidence
...

## Blockers
None

## Needs Core Decision
No
```

Long-term route, course architecture and durable explanation belong in README or dedicated docs rather than being repeated inside STATUS.

---

## 7. Strategy and Historical Material

The former Voyage Room / Main Control split is retired. Strategy material preserved under `Project_Horizon/00_Strategy/Voyage_Room/` remains a Core-owned library, not a separate authority.

Historical bridge files remain frozen:

- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`
- `00_Project_Control/CONTROL_TO_VOYAGE.md`

Do not recreate a message bus, Liaison, OUTBOX or INBOX without real recurring evidence that normal local STATUS + Core startup is insufficient.

---

## 8. Skills

Canonical Horizon Skills live in:

`cherrynectar-rrr/Horizon_Skills`

Skills are reusable procedures, not a governance layer. They never grant authority and should exist only when they reduce repeated work or improve reliability.

Current important operating Skills include:

- `HZN-001 horizon-context-sync` — local-first context routing;
- `horizon-learning-loop` — Self-Study + Assessment default learning loop;
- `HZN-002 status-update` — Candidate trial for meaningful-state writes;
- engineering micro-skills such as debug-loop, behavior-first testing and design-grill while under trial.

---

## 9. External Information

Potentially changing facts — admissions, funding, visas, competition dates, software versions, labs, professors, jobs, salaries, regulations and similar information — must be freshly verified from reliable sources when material to the answer or decision.

Old Horizon strategy is context, not a substitute for current verification.

---

## 10. Human-Only Showcase Boundary

The user's personal showcase/profile repositories are outside Horizon's AI execution surface.

Horizon Core and Specialist Threads must not read, edit, review, synchronize, commit to or otherwise operate on them unless the user explicitly revokes that boundary.

Horizon produces genuine evidence in Horizon-owned repositories; the user alone decides what to transfer into personal showcase repositories.

---

## 11. Authority and Conflict Resolution

Authority order:

1. `Project_Horizon/00_Project_Charter/Project_Horizon_Charter_v4.0.md`
2. `Project_Horizon/00_Project_Control/THREAD_PROTOCOL.md`
3. `Project_Horizon/00_Project_Control/MASTER_STATUS.md`
4. relevant Core strategy / decisions
5. relevant canonical Specialist / project STATUS
6. evidence / artifacts
7. chat memory

When lower-level sources disagree, do not silently overwrite either. Resolve through evidence and the correct owner.

**Role relationship:**  
**Horizon Core = Explore + Decide & Coordinate**  
**Specialist Threads = Execute**
