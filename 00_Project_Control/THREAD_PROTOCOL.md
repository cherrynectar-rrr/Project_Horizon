# Project Horizon — Thread Protocol

Last Updated: 2026-08-16
Version: V1.1

## Purpose

GitHub is the shared source of truth for Project Horizon's current state. Chat history can provide context, but it must not be the only place where milestones, blockers, route changes, or competition results are recorded.

Project Horizon uses three layers:

- **Strategic layer — Voyage Room:** explores, analyzes and proposes recommendations.
- **Control layer — Project Control / main control thread:** synthesizes evidence, makes cross-thread judgments and allocates resources.
- **Execution layer — specialist threads:** performs concrete learning, projects and evidence production.

The Voyage Room is not an execution thread and is not parallel to Python, C++, Linux, Algorithm or other specialist domains.

## Session Startup

For every important Project Horizon conversation:

1. For an execution-thread conversation, read that thread's `STATUS.md` before planning or changing work. The Voyage Room follows the strategic startup rules below instead of using a `STATUS.md`.
2. Read `00_Project_Control/MASTER_STATUS.md` when the task involves priorities, dependencies, route choices, competition strategy, or another thread.
3. If chat memory conflicts with GitHub, verify the latest repository state before acting.
4. Use chat memory as supporting context only, never as the sole state source.

Routine, low-impact questions do not require a full status review.

For strategic work, the role-specific startup rules in **Strategic Communication Protocol** also apply.

## Write Ownership

| Thread | May update |
| --- | --- |
| Voyage Room | Voyage Room documents and `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`; `CONTROL_TO_VOYAGE.md` is read-only |
| Main control thread | `00_Project_Control/MASTER_STATUS.md` and `00_Project_Control/CONTROL_TO_VOYAGE.md`; `VOYAGE_TO_CONTROL.md` is read-only |
| Python thread | `01_Python/STATUS.md` |
| C++ thread | `02_CPP/STATUS.md` |
| Linux thread | `03_Linux/STATUS.md` |
| Algorithm thread | `05_Algorithm/STATUS.md` |

Each specialist thread may write only its own `STATUS.md`. Only the main control thread may edit `MASTER_STATUS.md`.

The Voyage Room does not use the execution-thread `STATUS.md` format. It records analysis, assumptions, recommendations, open questions and strategic decision history in its own documents. A Voyage Room recommendation does not become an active route until the main control thread adopts it.

The two strategic communication files have exactly one writer each. The Voyage Room and main control thread must never jointly edit the same communication file.

The Charter is outside this status-sync protocol and must not be changed as part of routine status updates.

## Strategic Communication Protocol

### Voyage Room to Project Control

The Voyage Room updates `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` when it produces any of the following:

- a meaningful long-term strategic judgment;
- a route hypothesis worth evaluating;
- a major recommendation;
- a material risk finding;
- a question requiring main-control judgment.

Project Control must read the latest `VOYAGE_TO_CONTROL.md` before handling:

- long-term direction;
- academic route;
- graduate-study-abroad or international route;
- career direction;
- research direction;
- a major competition or project;
- significant time or resource reallocation;
- an overall Project Horizon route adjustment.

Project Control evaluates the Voyage Room's work together with:

- `MASTER_STATUS.md`;
- relevant specialist-thread `STATUS.md` files;
- Opportunity Radar facts when the decision concerns external opportunities;
- current real-world constraints, including time, energy, health, finances and confirmed commitments.

### Project Control to Voyage Room

Project Control updates `00_Project_Control/CONTROL_TO_VOYAGE.md` when it has:

- important feedback on a Voyage Room recommendation;
- an adopted, rejected or deferred strategic decision;
- a new question or scenario requiring further strategic research;
- changed constraints that materially affect prior analysis.

Before the next strategic analysis that depends on Project Horizon's actual state, the Voyage Room reads:

- `00_Project_Control/MASTER_STATUS.md`;
- `00_Project_Control/CONTROL_TO_VOYAGE.md`;
- any specialist `STATUS.md` files necessary for the question.

### Freedom and Authority Boundary

The Voyage Room has broad freedom to explore. It may challenge the current route, present conflicting hypotheses and research questions far beyond the current execution horizon. It is not bound by execution-thread rules such as one active deliverable or one narrowly scoped objective.

This freedom is analytical, not operational. The Voyage Room cannot directly schedule an execution thread, allocate resources, activate or pause a technical line, or modify `MASTER_STATUS.md`.

**Role relationship:** Voyage Room = Explore; Main Control = Decide & Coordinate; Specialist Threads = Execute.

## When to Update

Update a status file only when at least one of these occurs:

- a meaningful milestone is completed;
- a blocker appears, changes, or is resolved;
- the learning or project route changes;
- a competition result is available;
- a decision is needed from the main control thread;
- the next milestone materially changes.

Do not update status files for ordinary conversation, small exercises, temporary thoughts, or diary-style notes.

## Update Rules

Before writing:

1. Fetch the latest version of the target file.
2. Preserve valuable existing facts.
3. Change only the sections affected by new evidence.
4. Use an ISO date in `Last Updated`.
5. Keep entries concise, factual, and verifiable.
6. Add repository paths or commit links under `Evidence` when available.
7. Never record an assumption as completed work.
8. If a route decision is required, set `Needs Master Decision` to `Yes` and explain the decision needed.

## Standard STATUS.md Shape

```markdown
# <Thread> Status

Last Updated: YYYY-MM-DD
Status: <Main / Support / Preheat / Active / Paused / Blocked / Not Fully Activated>

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

## Needs Master Decision
No
```

Use `None recorded` when the repository contains no verified completion or blocker. Do not fill gaps from memory alone.

## Authority and Conflict Resolution

- The Voyage Room owns strategic exploration and recommendations, but not final allocation or execution authority.
- The main control thread owns synthesis, cross-thread decisions, priority and resource allocation.
- Execution threads own factual work and evidence inside their approved scopes.
- `VOYAGE_TO_CONTROL.md` is Voyage Room-owned and read-only to Project Control and specialist threads.
- `CONTROL_TO_VOYAGE.md` is Project Control-owned and read-only to the Voyage Room and specialist threads.
- `MASTER_STATUS.md` controls cross-thread priority, activation, and route decisions.
- Each thread's `STATUS.md` controls factual execution state inside that thread.
- When the two disagree, do not silently overwrite either file. The specialist thread reports the mismatch in its own status and requests a master decision.
- Fetch the latest file immediately before editing to avoid overwriting concurrent updates.
- If a Voyage Room recommendation conflicts with the current route, record the question and send it to the main control thread; do not directly rewrite execution priorities.
