# Project Horizon — Thread Protocol

Last Updated: 2026-09-01
Version: V2.2 — Horizon Core Edition

## Purpose

GitHub is the shared source of truth for Project Horizon's current state. Chat history provides context but must not be the only place where milestones, blockers, route changes or major decisions are recorded.

Project Horizon now uses two layers:

- **Horizon Core / 核心舱:** Explore + Decide & Coordinate.
- **Specialist Threads:** Execute approved work and produce evidence.

The former Voyage Room / Main Control split is retired. Strategic exploration remains mandatory as an internal mode of Horizon Core rather than a separate top-level chat.

---

## 1. Session Startup

### Horizon Core

For important Core work:

1. Read `00_Project_Control/MASTER_STATUS.md`.
2. Read only the specialist `STATUS.md` files that can materially affect the task.
3. Read relevant strategic documents under `00_Strategy/Voyage_Room/` when the task depends on prior route research, unresolved hypotheses or preserved strategic evidence.
4. Verify current external facts when the answer depends on mutable real-world information.
5. Use chat memory as supporting context only.

For a major decision, Horizon Core should use the internal two-pass discipline:

- **Explore:** alternatives, uncertainty, counter-cases, missing evidence.
- **Decide & Coordinate:** temporary decision, resources, opportunity cost, review trigger.

### Specialist Thread

For important execution work:

1. Read that specialist's own `STATUS.md`.
2. Read `MASTER_STATUS.md` when the task involves priority, another thread, capacity conflict, activation state, a competition/project route or a Core dependency.
3. Read strategic documents only when the approved execution scope genuinely depends on long-term route context.
4. Verify mutable external facts when material.

Routine low-impact questions do not require a full project sync.

---

## 2. Write Ownership

### Horizon Core

Horizon Core may maintain:

- `00_Project_Control/MASTER_STATUS.md`;
- `00_Project_Control/THREAD_PROTOCOL.md`;
- top-level control/governance documents explicitly assigned to Core;
- strategic analysis documents under `00_Strategy/Voyage_Room/` after the merger, except frozen historical bridge files;
- future Core-owned shared infrastructure explicitly authorized by Charter / Core decision.

The following former bridge files are **historical and frozen after merger handoff**:

- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`;
- `00_Project_Control/CONTROL_TO_VOYAGE.md`.

Do not use them for new top-level communication after the merger is complete.

### Specialist Threads

Each specialist thread may maintain only its own `STATUS.md` and any operational workspace/file explicitly authorized for that thread by Core.

Current specialist state owners include:

- Python → `01_Python/STATUS.md`
- C++ → `02_CPP/STATUS.md`
- Linux → `03_Linux/STATUS.md`
- Embedded → `04_Embedded/STATUS.md` after its first Specialist session creates the file
- Algorithm → `05_Algorithm/STATUS.md`
- Career / Internship → `09_Career/STATUS.md`
- Personal Finance & Capital → `10_Finance/STATUS.md`
- Academic Operations & Evidence → `11_Academic/STATUS.md`

Future specialists follow the same single-owner rule.

A specialist must not modify another specialist's state, `MASTER_STATUS.md`, Core strategy, or cross-thread priority.

---

## 3. Horizon Core Internal Decision Discipline

The merger removes chat-to-chat relay, not strategic dissent.

For high-impact decisions, Horizon Core should separate:

### Explore mode

- generate serious alternatives;
- challenge the current route;
- preserve plausible competing hypotheses;
- identify uncertainty and evidence gaps;
- research current external reality when needed;
- allow deferral when evidence is insufficient.

Explore output is not automatically an execution change.

### Decide & Coordinate mode

- compare options against current evidence and constraints;
- make, reject, defer or bound an experiment;
- decide resource implications;
- state what will temporarily not be done;
- define review triggers;
- update formal state only when a meaningful change occurs.

A major decision should not be justified solely by the current plan's convenience when a credible counter-case exists.

---

## 4. Specialist Escalation

A specialist handles concrete execution inside its scope.

Escalate to Horizon Core when the issue involves:

- long-term direction;
- another thread's priority or resources;
- activation / pause / promotion of a line;
- strategic electives or course overload;
- GPA-versus-project or competition trade-offs;
- research / career / country / graduate-route decisions;
- a repeated technical gap that may justify cross-thread allocation;
- any conflict between specialist state and `MASTER_STATUS.md`.

Use:

`Needs Core Decision: Yes`

when a meaningful specialist-state update genuinely requires Core judgment.

Do not manufacture STATUS updates merely to transmit a casual cross-chat message.

### 4.1 Project Activation Semantics

When Horizon Core explicitly authorizes a project as **GO / Active**, that authorization is **end-to-end within the approved project scope**.

The owning Project Specialist may proceed from research and data collection through implementation, testing, debugging, documentation, iteration, competition preparation and final delivery without returning to Core for permission at every internal phase.

Internal phases and milestones are execution checkpoints, **not recurring permission gates**.

Once a project is activated, the default expectation is to finish the approved project properly rather than leave it artificially half-open.

A Project Specialist should escalate again only when a new decision would materially change what Core originally authorized, including:

- major topic, track or project-purpose change;
- substantial new technical stack or feature family outside the approved scope;
- material reallocation from another Horizon line;
- real conflict with GPA-sensitive academic obligations or another higher-priority commitment;
- deadline, feasibility or evidence failure that makes Pivot / Stop a serious option;
- a high-cost, irreversible, regulated or otherwise strategically significant commitment.

If Core intends to authorize only a feasibility study, prototype or trial, it must state that explicitly as **Feasibility Only / Trial**. A feasibility-only authorization is not equivalent to activating the full project.

---

## 5. When to Update STATUS / MASTER_STATUS

Update only when at least one meaningful change occurs:

- a milestone is completed;
- a blocker appears, changes or resolves;
- the learning/project route materially changes;
- a competition/application/project result arrives;
- the next milestone materially changes;
- a cross-thread decision changes active state or priority;
- a specialist requires a Core decision.

Do not update formal state for ordinary conversation, tiny exercises, speculative plans or diary entries.

`MASTER_STATUS.md` is a control summary, not a complete history archive.

---

## 6. Update Rules

Before writing:

1. Fetch the latest target file and current SHA.
2. Preserve valuable existing facts.
3. Change only what new evidence or a formal decision justifies.
4. Use ISO dates.
5. Keep state concise, factual and verifiable.
6. Add paths / commits / artifacts when useful.
7. Never record a plan as completed work.
8. Distinguish verified evidence from user reports and inference.
9. If write authority is unclear, fail closed and resolve governance before writing.

---

## 7. Standard Specialist STATUS Shape

```markdown
# <Thread> Status

Last Updated: YYYY-MM-DD
Status: <Main / Support / Active / Paused / Blocked / Bounded Support / Maintenance>

## Current Goal
...

## Current Stage
...

## Completed
- ...

## In Progress
- ...

## Next Milestone
- ...

## Evidence
- ...

## Blockers
None

## Needs Core Decision
No
```

Legacy `Needs Master Decision` wording remains understandable in older files; specialists may migrate to `Needs Core Decision` on their next meaningful status update rather than creating churn solely for renaming.

---

## 8. Strategy Documents

The directory `00_Strategy/Voyage_Room/` is preserved as the historical and working strategy library.

After the merger:

- Horizon Core may read and maintain non-bridge strategy documents there;
- the directory name does not imply a surviving separate Voyage authority;
- existing analyses, hypotheses and research history remain valuable evidence;
- no cosmetic migration is required unless it later reduces real cost.

The former Voyage chat is historical / retired. Its exploratory function survives as Core Explore mode.

---

## 9. Historical Voyage–Control Bridge

The old bridge existed because separate top-level chats did not share live context.

After the one-time merger handoff:

- `VOYAGE_TO_CONTROL.md` is preserved at its final Voyage-owned state;
- `CONTROL_TO_VOYAGE.md` records the final Core adoption/handoff decision and is then frozen;
- Horizon Core no longer sends strategy to itself through bridge files.

Unresolved strategic items from the final Voyage transmission become Horizon Core's own decision backlog, not messages requiring relay.

---

## 10. Skills

A Skill is a reusable, versioned operating procedure, not a governance layer.

Skills:

- remain subordinate to the Charter and this protocol;
- never grant new authority;
- should reduce ceremony and context cost;
- should be promoted only after repeated real use, except where an explicit user operating preference directly defines the procedure;
- are version-pinned when adopted.

`HZN-001 horizon-context-sync v0.5` is the current adopted active context-sync Skill for the Horizon Core + Specialist model.

`HZN-002 status-update v0.1` is currently Candidate — Trial.

`horizon-learning-loop v0.2` is **Adopted — Active** as the default learning-oriented Specialist procedure. The user explicitly changed Horizon's default learning surface on 2026-09-01 from continuous step-by-step tutoring to **Self-Study + Assessment**.

Default learning operation is:

`capability target → curated resources → independent study → examination / practical / project gate → grading and gap diagnosis → targeted remediation → retest / transfer`.

Specialists should normally recommend a small, high-quality set of video courses, books, official references and exercise sources, state what must be learned, and then let the learner study independently. Capability is checked through diagnostic tests, unit tests, stage exams, practical gates, project gates, finals or research gates as appropriate to the domain.

Continuous guided teaching is no longer the default. It may be used when the user explicitly asks for tutoring, when a concrete assessed gap needs focused repair, or when safety-critical hardware / destructive operations require direct guidance.

Exams declared closed-book should not receive hints or solutions before submission. Real engineering projects may replace traditional exams when they provide stronger evidence. Specialists must not turn the new assessment system into bureaucracy, excessive testing or a second roadmap.

Current artifact:

`00_Strategy/Voyage_Room/skills/horizon-learning-loop/SKILL.md`

HZN-003 through HZN-005 remain frozen unless separately authorized. The unnumbered learning-loop Skill does not unfreeze or consume those IDs.

---

## 11. Liaison / Message Bus Rule

Do **not** create a Liaison, OUTBOX or INBOX system merely to restore communication between the former Voyage Room and Main Control; that split no longer exists.

A Specialist → Core relay mechanism may be considered later only if real post-merger evidence shows persistent communication friction that cannot be solved through normal Core startup, specialist STATUS or direct user interaction.

Do not pre-build communication bureaucracy.

---

## 12. External Information

Potentially changing facts — admissions rules, scholarships, visas, programme fees, competition dates, software versions, labs, professors, jobs, salaries, employment policy and similar information — must be verified from current reliable sources before high-impact decisions.

Old strategic documents are context, not substitutes for current verification.

---

## 13. Authority and Conflict Resolution

Authority order:

1. `00_Project_Charter/Project_Horizon_Charter_v4.0.md`
2. `00_Project_Control/THREAD_PROTOCOL.md`
3. `00_Project_Control/MASTER_STATUS.md`
4. relevant Core strategy / decision documents
5. relevant specialist `STATUS.md`
6. evidence / artifacts
7. chat memory

When two lower-level sources disagree, do not silently overwrite either. Resolve the conflict through evidence and the correct owner.

**Role relationship:**  
**Horizon Core = Explore + Decide & Coordinate**  
**Specialist Threads = Execute**
