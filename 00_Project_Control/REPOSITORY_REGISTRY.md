# Project Horizon — Repository Registry

Last Updated: 2026-09-04
Owner: Horizon Core
Status: Active — Multi-Repository Migration v1

GitHub remains the shared source of truth for Project Horizon, but formal state is now distributed across a small set of repositories with explicit ownership.

## Canonical repositories

| Repository | Visibility | Canonical responsibility |
| --- | --- | --- |
| `cherrynectar-rrr/Project_Horizon` | Public | Charter, Horizon Core governance, MASTER_STATUS, THREAD_PROTOCOL, long-term strategy, cross-repository registry and coordination |
| `cherrynectar-rrr/Horizon_Skills` | Public | reusable Horizon / AI / engineering Skills and their trial evidence |
| `cherrynectar-rrr/Horizon_Learning` | Public | capability-building evidence: Python, C++, Linux, Algorithm, Embedded, AI foundations and related learning artifacts |
| `cherrynectar-rrr/Earth_Flywheel` | Public | flagship Earth Flywheel engineering / research execution and evidence |
| `cherrynectar-rrr/Horizon_projects` | Public | bounded projects, competitions and prototypes that do not yet justify standalone repositories |
| `cherrynectar-rrr/Horizon_Academic` | Private | academic operations, course evidence and application-support evidence |
| `cherrynectar-rrr/Horizon_Life` | **Public — privacy migration hold** | intended home for Life Operations; personal finance / health / sensitive life material MUST NOT migrate until repository is Private |
| `cherrynectar-rrr/Horizon_Opportunity_Radar` | Private | existing specialized opportunity-radar execution repository; retained as a dedicated service rather than folded into another repo |

## Source-of-truth rule

Each detailed state has exactly one canonical owner.

- Horizon-wide priority / activation / resource allocation → `Project_Horizon/00_Project_Control/MASTER_STATUS.md`.
- Specialist execution state → the repository that owns that specialist or project after its migration is verified.
- MASTER_STATUS stores only the cross-repository summary and next gate; it must not duplicate full detailed STATUS content.
- Historical copies in `Project_Horizon` remain read-only migration sources until each destination is verified, then may be archived or removed in a later cleanup phase.

## Migration safety rule

Migration is copy → verify → repoint → archive/delete.

No source material is deleted merely because a destination repository exists. Deletion is a separate final cleanup decision after content and links are verified.

## Repository naming note

The projects repository currently exists as `Horizon_projects` (lowercase `p`). Registry uses the actual GitHub repository name. Renaming is optional and not required for migration correctness.
