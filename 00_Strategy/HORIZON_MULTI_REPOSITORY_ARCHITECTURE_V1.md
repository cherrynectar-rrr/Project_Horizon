# Horizon Multi-Repository Architecture v1

Date: 2026-09-04
Owner: Horizon Core
Status: Adopted — Migration In Progress

## 1. Purpose

Project Horizon is separating its internal governance system from learning artifacts, project execution, academic evidence, life operations and reusable Skills.

The goal is not to maximize repository count. The goal is to make ownership, privacy, engineering presentation and source-of-truth boundaries clearer while preserving Horizon's current governance model.

## 2. Architecture

### `Project_Horizon` — Control Plane

Answers: **What is Horizon doing, why, and with what priority?**

Owns:

- Charter and common governance rules;
- `MASTER_STATUS.md`;
- `THREAD_PROTOCOL.md`;
- long-term strategy and Core decisions;
- repository registry and cross-repository coordination.

It should become smaller over time and should not remain the default storage location for all code, projects, academic evidence or life records.

### `Horizon_Skills` — Reusable Operating Methods

Answers: **How should recurring Horizon / AI / engineering work be performed?**

Owns adopted and trial Skills, including context sync, learning loop, status updates, debugging, testing and design methods.

### `Horizon_Learning` — Capability Building

Answers: **How is technical capability being built and verified?**

Owns structured learning evidence for Python, C++, Linux, Algorithm, Embedded and later justified capability areas.

Learning artifacts may include lessons, exercises, assessments, small learning projects and STATUS files. A large real-world project should not remain here merely because it teaches something.

### `Earth_Flywheel` — Flagship Research / Engineering Project

Answers: **What is the detailed state and evidence of Earth Flywheel?**

Owns Earth Flywheel design, code, firmware, hardware notes, experiments, data, research notes and project-specific status.

### `Horizon_projects` — Bounded Real Projects

Answers: **What real bounded projects are currently being built or delivered?**

Owns competitions, prototypes and short/medium projects that are more substantial than learning exercises but do not yet justify standalone repositories.

Projects may graduate to standalone repositories if their lifetime, complexity or external-facing value makes that worthwhile.

### `Horizon_Academic` — Private Academic Operations

Answers: **What academic evidence and formal course/application material exists?**

Owns course evidence, assessment records, syllabus/lab/project evidence, prerequisite mapping and application-support artifacts.

Privacy is deliberate because academic evidence can include personal information.

### `Horizon_Life` — Private Life Operations

Answers: **How do daily systems support Horizon sustainably?**

Intended to own finance operating frameworks, nutrition/recovery systems and low-friction life operations.

It must be Private before personal finance, health or sensitive life material is migrated. At migration start it was still Public, so a privacy hold is active.

### `Horizon_Opportunity_Radar` — Existing Specialized Service

This existing private repository remains a dedicated opportunity-radar execution surface. It is registered but not forcibly merged into Career or Project_Horizon.

## 3. State ownership

Multi-repository operation does not create multiple masters.

- Horizon-wide state and priority: `Project_Horizon/00_Project_Control/MASTER_STATUS.md`.
- Detailed specialist/project state: destination repository's canonical `STATUS.md` after migration verification.
- The control repo summarizes, links and coordinates; it does not mirror full detailed state.

## 4. Migration sequence

1. **Initialize** destination repositories with scope and privacy boundaries.
2. **Copy** current files to destination repositories without deleting sources.
3. **Verify** copied contents, links and destination visibility.
4. **Repoint** control documents and Specialist startup rules to new canonical locations.
5. **Freeze / archive** old duplicate paths.
6. **Delete** obsolete duplicates only after explicit verification.

## 5. Initial path mapping

| Old Project_Horizon path | Destination |
| --- | --- |
| `00_Strategy/Voyage_Room/skills/**` | `Horizon_Skills/**` |
| `01_Python/**` | `Horizon_Learning/Python/**` |
| `02_CPP/**` | `Horizon_Learning/CPP/**` |
| `03_Linux/**` | `Horizon_Learning/Linux/**` |
| `04_Embedded/**` | `Horizon_Learning/Embedded/**` |
| `05_Algorithm/**` | `Horizon_Learning/Algorithm/**` |
| `06_AI/**` | `Horizon_Learning/AI/**` |
| `07_Embodied_AI/**` | review during migration; avoid duplicating Earth Flywheel ownership |
| `08_English/**` | `Horizon_Learning/English/**` when content is substantive |
| `09_Career/**` | retain control-side summary for now; opportunity execution already has `Horizon_Opportunity_Radar`; move only after ownership review |
| `10_Finance/**` | `Horizon_Life/Finance/**` after privacy hold clears |
| `10_Graduate/**` | strategy/application split review; graduate strategy remains Core, personal application evidence belongs Academic |
| `11_Academic/**` | `Horizon_Academic/**` |
| `11_Investment/**` | privacy/finance review before any move |
| `12_Life/**` | `Horizon_Life/**` after privacy hold clears |
| `13_Projects/2026_Qingdao_Agri_Data_Competition/**` | `Horizon_projects/2026_Qingdao_Agri_Data_Competition/**` |
| `13_Projects/Earth_Flywheel/**` | `Earth_Flywheel/**` |

## 6. What this migration does not change

- Horizon Core remains **Explore + Decide & Coordinate**.
- Specialist Threads remain **Execute**.
- GitHub remains the formal state source.
- Curriculum, competitions, repositories and Skills remain tools rather than identity goals.
- No new technical main line is created by this repository split.

## 7. Review trigger

Migration v1 is complete only when:

- all destination repositories are initialized;
- current canonical STATUS files exist at their intended destinations;
- Project_Horizon registry and MASTER links point to the new canonical homes;
- sensitive repositories have correct privacy;
- old duplicates are clearly historical or removed;
- no material state has two live owners.
