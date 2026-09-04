# Project Horizon — Multi-Repository Migration

Date: 2026-09-04
Owner: Horizon Core
Status: Active Migration

## Decision

Project Horizon is separating its internal governance/control plane from capability-building evidence, real projects, academic operations and life operations.

The migration is intended to reduce repository clutter, make ownership clearer, protect private operational material, and allow major engineering projects to mature independently.

This migration does **not** change the Charter mission, Horizon Core / Specialist authority model, current priorities, or the meaning of existing verified milestones.

## Target Architecture

- `Project_Horizon` — control plane: Charter, protocol, MASTER, strategy, registry.
- `Horizon_Skills` — reusable Horizon / engineering operating procedures.
- `Horizon_Learning` — technical learning and capability evidence.
- `Earth_Flywheel` — independent flagship robotics/research project.
- `Horizon_projects` — bounded competitions and smaller real projects.
- `Horizon_Academic` — private academic operations and application evidence.
- `Horizon_Life` — private finance / nutrition / recovery / life operations.
- `Horizon_Opportunity_Radar` — existing private bounded opportunity-support repository.

Personal showcase/profile repositories are explicitly human-only and outside Horizon AI operation.

## Migration Safety Rules

1. **Copy before delete.** No legacy artifact is removed until its target copy is verified.
2. **One canonical owner after cutover.** Temporary duplicates are migration artifacts, not two live sources of truth.
3. **Preserve evidence.** Existing real code and learning artifacts are copied without rewriting them for cosmetic consistency.
4. **Preserve history.** The old `Project_Horizon` Git history remains the historical record of pre-separation work.
5. **No plan-as-completion.** A target repository being initialized does not mean all historical content has been migrated.
6. **Private stays private.** Academic and life operational content moves only into private repositories.
7. **Human-only showcase boundary.** No Horizon agent reads or writes the user's manually maintained showcase/profile repositories.

## Phase Plan

### Phase 1 — Registry and destination initialization

Status: In progress.

- verify repository access and visibility;
- add canonical repository registry;
- initialize destination README / provenance files;
- define new ownership paths.

### Phase 2 — Copy active canonical content

Status: In progress.

Priority order:

1. Skills;
2. active Learning tracks;
3. active Qingdao competition project;
4. Earth Flywheel;
5. Academic Operations;
6. Life Operations.

### Phase 3 — Control-plane cutover

Status: Pending.

- update `THREAD_PROTOCOL.md` path rules;
- update `MASTER_STATUS.md` links/workspaces;
- mark new repositories as canonical detailed state owners.

### Phase 4 — Verification

Status: Pending.

- verify destination files and key code artifacts;
- check cross-repository references;
- confirm privacy boundaries;
- confirm active Specialist startup rules resolve to the new locations.

### Phase 5 — Legacy cleanup

Status: Pending.

Only after verification:

- freeze or remove duplicated execution folders from `Project_Horizon`;
- retain governance, strategy and migration/history records;
- do not rewrite old Git history.

## Known Naming Detail

The projects repository currently exists as `Horizon_projects` with a lowercase `p`. Horizon will use the repository's actual name during migration. A cosmetic rename is optional and is not required for the architecture to work.

## Success Test

Migration is complete when:

- opening `Project_Horizon` primarily shows governance/control/strategy rather than all execution artifacts;
- each active Specialist or project has one clear detailed source of truth;
- private academic/life material is no longer expected to live in the public control repo;
- Skills have a normal dedicated home rather than a retired `Voyage_Room` path;
- cross-repository startup and write ownership are unambiguous;
- the user's human-only showcase repositories remain untouched by Horizon agents.
