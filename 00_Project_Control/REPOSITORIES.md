# Project Horizon — Repository Registry

Last Updated: 2026-09-04
Owner: Horizon Core
Status: Active

## Purpose

Project Horizon now operates as a multi-repository ecosystem rather than a single monolithic repository.

`Project_Horizon` remains the **control plane**. Execution evidence, learning artifacts, project code, academic operations and life operations may live in dedicated repositories. This registry defines canonical ownership so state is not duplicated ambiguously.

## Canonical Repositories

| Repository | Visibility | Role | Canonical Ownership |
| --- | --- | --- | --- |
| `cherrynectar-rrr/Project_Horizon` | Public | Control plane | Charter, `MASTER_STATUS`, `THREAD_PROTOCOL`, strategy, repository registry, cross-repo coordination |
| `cherrynectar-rrr/Horizon_Skills` | Public | Reusable operating methods | Horizon Skills and their trial/adoption evidence |
| `cherrynectar-rrr/Horizon_Learning` | Public | Capability building | Python, C++, Linux, Algorithm, Embedded, AI/Embodied-AI and English learning artifacts / specialist state |
| `cherrynectar-rrr/Earth_Flywheel` | Public | Flagship research/robotics project | Earth Flywheel project artifacts and future project-local state |
| `cherrynectar-rrr/Horizon_projects` | Public | Bounded real projects | Competitions and smaller real projects that do not yet justify an independent repository |
| `cherrynectar-rrr/Horizon_Academic` | Private | Academic operations / application evidence | Course evidence, academic operations state, future APS / prerequisite / application evidence where appropriate |
| `cherrynectar-rrr/Horizon_Life` | Private | Life operations | Finance, nutrition/recovery and other low-frequency life-support systems |
| `cherrynectar-rrr/Horizon_Opportunity_Radar` | Private | Opportunity discovery support | Existing bounded opportunity-radar implementation; governed by its own approved scope |

## Human-Only Showcase Boundary

The user maintains separate personal showcase/profile repositories outside Horizon's AI execution surface.

**Horizon Core and all Specialist Threads must not read, edit, review, reorganize, synchronize, commit to, open pull requests against, or otherwise operate on those human-only showcase repositories unless the user explicitly revokes this boundary in a future instruction.**

Horizon may produce genuine engineering evidence in its own repositories. The user alone decides what, if anything, is manually transferred into personal showcase repositories.

## Source-of-Truth Rule

A fact should have one detailed canonical owner.

- `MASTER_STATUS.md` records only cross-repository summary state, priority, activation and next gates.
- Detailed specialist execution state lives with the specialist's canonical repository.
- Project implementation state lives in the owning project repository.
- Strategy remains in `Project_Horizon` even when the evidence it refers to lives elsewhere.
- Do not maintain two independently edited full copies of the same STATUS file.

During migration, legacy files in `Project_Horizon` may remain temporarily as historical copies. Once a target copy is verified and the control-plane references are updated, the legacy copy may be frozen or removed in a later cleanup phase.

## Cross-Repository Read Rule

Before important work, read only the minimum authoritative state required:

1. control-plane state from `Project_Horizon` when priority/governance matters;
2. the relevant canonical specialist/project state from its owning repository;
3. current external sources when mutable facts matter.

Do not scan every repository by default.

## Migration Principle

The 2026-09-04 separation is a **physical architecture change**, not a change to Horizon's two-layer governance model.

- Horizon Core = Explore + Decide & Coordinate.
- Specialist Threads = Execute.
- Repository location does not grant new authority.

Legacy Git history remains preserved in `Project_Horizon`; new repositories begin their own post-separation history with explicit provenance where useful.
