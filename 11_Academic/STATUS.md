# Academic Operations & Evidence Status

Last Updated: 2026-08-28
Status: Active — Bounded Support / Maintenance

## Primary Responsibility

Maintain the factual academic-operations and evidence layer for the user's university coursework: actual semester course intake, assessment structures, deadlines, textbooks/syllabi, lecture coverage, labs/projects, grades, and application-relevant course evidence.

This thread is an execution/support thread. It does **not** own long-term academic strategy, country/graduate-school decisions, technical curricula, or cross-thread resource allocation.

## Current Goal

Complete **Year 2 Fall Academic Baseline v1**.

The baseline should establish:

1. a verified current-semester course register based primarily on the user's actual registration / execution plan rather than the generic school curriculum;
2. assessment methods and materially important deadlines for current courses when verified;
3. an evidence-capture baseline for textbooks, official syllabi, lecture coverage, labs/projects and grades;
4. a lightweight maintenance workflow for the Notion `University Course Evidence` workspace;
5. a semester-end archive procedure that can later support APS, prerequisite audits and MSc applications without reconstructing coursework from memory.

## Current Stage

Academic Operations & Evidence is formally **Active — Bounded Support / Maintenance**.

Its purpose is to reduce recurring coordination and evidence-reconstruction cost, not to create a new curriculum or administrative burden.

## Authorized Work

- ingest the user's actual semester course plan and distinguish it from the school's generic 培养方案;
- maintain factual course records such as official Chinese/English names, credits, hours, semester, assessment structure and grades when verified;
- preserve course evidence including syllabi, textbooks, lecture outlines, lab/project instructions, reports, code/results and other verifiable artifacts;
- maintain the Notion course-evidence system and a lightweight semester dashboard;
- track academic deadlines / grading-risk items when the user supplies the relevant course information;
- conduct short weekly or event-driven academic-operations reviews when useful;
- perform semester-end archival and identify missing evidence;
- prepare factual course-evidence packages for later APS / TUM / MSc prerequisite review;
- escalate strategic elective choices, overload decisions, GPA-versus-project trade-offs, graduation-route changes and cross-thread conflicts to Project Control.

## Not Authorized

- decide long-term academic, country, career or research direction;
- independently change Horizon priorities or allocate time across technical threads;
- teach Python, Algorithm, Linux or C++ material owned by existing specialist threads;
- become a universal tutoring thread;
- turn every lecture into a polished Notion note;
- copy whole textbooks or slide decks into Notion;
- treat the school curriculum as the user's personal growth route;
- create daily administrative overhead merely to keep records visually complete.

When a course overlaps an existing specialist thread, subject-matter learning remains with that specialist. Academic Operations & Evidence owns only the academic/evidence layer.

## Workspace Boundary

- GitHub remains Project Horizon's formal source of truth for governance, thread state and meaningful milestones.
- Notion `University Course Evidence` may serve as the operational workspace for structured course records and evidence maintenance.
- Important strategic or cross-thread decisions must still return to Project Control and must not exist only in Notion.

## Operating Cadence

Default workload ceiling:

- one semester-start baseline setup;
- one short weekly review only when useful;
- event-driven updates for major assignments, labs, exams, project outputs, grades or newly available official materials;
- one semester-end archive.

No standing daily note-taking or administration quota is authorized.

## Completed

- `VTC-20260828-01` identified the recurring academic-operations / evidence-maintenance need and recommended a dedicated bounded specialist thread.
- Project Control approved activation on 2026-08-28.

## In Progress

- Year 2 Fall Academic Baseline v1.

## Next Milestone

Produce Year 2 Fall Academic Baseline v1 with a verified course register, assessment/deadline map for materially important courses, current evidence inventory, Notion maintenance workflow and semester-end archive procedure.

## Evidence

- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` — `VTC-20260828-01`.
- `00_Project_Control/MASTER_STATUS.md`.
- User-supplied actual course registration / execution evidence and course materials, when provided.
- Notion `University Course Evidence` workspace, when used operationally.

## Blockers

None reported. Course-level details should remain unfilled until supported by actual registration or course evidence.

## Needs Master Decision

No
