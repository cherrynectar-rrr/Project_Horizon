# Project Horizon — Thread Protocol

Last Updated: 2026-08-29
Version: V2.0 — Horizon Core Edition

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
- should be promoted only after repeated real use;
- are version-pinned when adopted.

`HZN-001 horizon-context-sync v0.4` remains the first adopted Skill and historical evidence. Because v0.4 encodes the former three-role model, a later candidate version may simplify it for Horizon Core + Specialist Threads. Until then, Charter v4.0 and this protocol govern whenever the old role labels conflict.

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
