# Project Horizon — Repository Registry

Last Updated: 2026-09-05
Owner: Horizon Core
Status: Active — Canonical

## Purpose

Project Horizon operates as a small multi-repository ecosystem.

`cherrynectar-rrr/Project_Horizon` is the **control plane**. Detailed learning, project, academic and life execution state belongs to the repository that owns it.

This file is the **single canonical repository registry**.

## Canonical Repositories

| Repository | Visibility | Role | Canonical detailed state / ownership |
| --- | --- | --- | --- |
| `cherrynectar-rrr/Project_Horizon` | Public | Control plane | Charter, `MASTER_STATUS`, `THREAD_PROTOCOL`, strategy, cross-repo decisions, repository registry; Career STATUS remains here until later explicit migration |
| `cherrynectar-rrr/Horizon_Skills` | Public | Reusable methods | Horizon Skills, versions and trial/adoption evidence |
| `cherrynectar-rrr/Horizon_Learning` | Public | Capability building | Python, C++, Linux, Algorithm, Data Structures and Embedded learning artifacts + Specialist STATUS files |
| `cherrynectar-rrr/Earth_Flywheel` | Public | Flagship robotics / research seed | Earth Flywheel architecture, implementation, experiments and future project-local state |
| `cherrynectar-rrr/Horizon_projects` | Public | Bounded real projects | Competitions and smaller real projects; current Qingdao competition lives here |
| `cherrynectar-rrr/Horizon_Academic` | Private | Academic operations / evidence | Academic Operations STATUS, course/application evidence and later APS / prerequisite support artifacts |
| `cherrynectar-rrr/Horizon_Life` | Private | Life operations | Finance STATUS, Nutrition & Recovery and other low-frequency life-support systems |
| `cherrynectar-rrr/Horizon_Opportunity_Radar` | Private | Opportunity discovery support | Existing bounded opportunity-radar implementation under its own approved scope |

## Canonical State Map

| Area | Canonical path |
| --- | --- |
| Horizon-wide state | `Project_Horizon/00_Project_Control/MASTER_STATUS.md` |
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
| Career / Internship | `Project_Horizon/09_Career/STATUS.md` |
| Horizon Skills | `Horizon_Skills/` |
| Earth Flywheel | `Earth_Flywheel/` |

## Source-of-Truth Rule

A detailed fact has one canonical owner.

- `MASTER_STATUS.md` stores **summary state, priority, activation and next gates**.
- Specialist / project repositories store detailed execution state and evidence.
- Strategy remains in `Project_Horizon` even when evidence lives elsewhere.
- Legacy execution copies inside `Project_Horizon` are historical migration artifacts after cutover and must not be edited as live state.
- Do not maintain two independently edited full copies of the same STATUS.

## Minimum-Read Rule

Before important work:

1. route the task to its owner and canonical repository;
2. read the local Specialist / project STATUS first;
3. read `MASTER_STATUS.md` only when priority, capacity, another thread or Core scope matters;
4. read strategy / Protocol / Charter only when the task genuinely needs them;
5. verify mutable external facts when material.

Do not scan every repository by default.

## Human-Only Showcase Boundary

The user's personal showcase/profile repositories are **Human-only / Manual-only** and outside Horizon's AI execution surface.

Horizon Core and Specialist Threads must not read, edit, review, reorganize, synchronize, commit to, open PRs against or otherwise operate on them unless the user explicitly revokes this boundary.

Horizon may generate genuine work in Horizon-owned repositories. The user alone decides what is manually transferred into personal showcase repositories.

## Migration / History Rule

The 2026-09-04 separation is a physical architecture change, not a governance change.

- Horizon Core = Explore + Decide & Coordinate.
- Specialist Threads = Execute.
- Existing Git history in `Project_Horizon` remains the historical record of pre-separation work.
- Legacy deletion is optional cleanup after verification; history is not rewritten.
