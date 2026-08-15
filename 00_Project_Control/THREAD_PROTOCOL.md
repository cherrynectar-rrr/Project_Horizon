# Project Horizon — Thread Protocol

Last Updated: 2026-08-15
Version: V1

## Purpose

GitHub is the shared source of truth for Project Horizon's current state. Chat history can provide context, but it must not be the only place where milestones, blockers, route changes, or competition results are recorded.

## Session Startup

For every important Project Horizon conversation:

1. Read the current thread's `STATUS.md` before planning or changing work.
2. Read `00_Project_Control/MASTER_STATUS.md` when the task involves priorities, dependencies, route choices, competition strategy, or another thread.
3. If chat memory conflicts with GitHub, verify the latest repository state before acting.
4. Use chat memory as supporting context only, never as the sole state source.

Routine, low-impact questions do not require a full status review.

## Write Ownership

| Thread | May update |
| --- | --- |
| Main control thread | `00_Project_Control/MASTER_STATUS.md` |
| Python thread | `01_Python/STATUS.md` |
| C++ thread | `02_CPP/STATUS.md` |
| Linux thread | `03_Linux/STATUS.md` |
| Algorithm thread | `05_Algorithm/STATUS.md` |

Each specialist thread may write only its own `STATUS.md`. Only the main control thread may edit `MASTER_STATUS.md`.

The Charter is outside this status-sync protocol and must not be changed as part of routine status updates.

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

- `MASTER_STATUS.md` controls cross-thread priority, activation, and route decisions.
- Each thread's `STATUS.md` controls factual execution state inside that thread.
- When the two disagree, do not silently overwrite either file. The specialist thread reports the mismatch in its own status and requests a master decision.
- Fetch the latest file immediately before editing to avoid overwriting concurrent updates.
