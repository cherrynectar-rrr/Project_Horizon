# Project Horizon — Multi-Repository Migration

Date: 2026-09-04
Owner: Horizon Core
Status: **Control-Plane Cutover Complete — Legacy Cleanup Pending**

## Decision

Project Horizon separated its control/governance plane from capability-building evidence, real projects, academic operations and life operations.

The purpose is to reduce context cost, clarify ownership, protect private operational material and let real engineering projects mature independently.

This migration does **not** change the Charter mission or the Horizon Core / Specialist authority model.

## Target Architecture

- `Project_Horizon` — control plane: Charter, Protocol, MASTER, strategy, repository registry
- `Horizon_Skills` — reusable Horizon / engineering methods
- `Horizon_Learning` — technical learning and capability evidence
- `Earth_Flywheel` — flagship robotics / research project
- `Horizon_projects` — bounded competitions and smaller real projects
- `Horizon_Academic` — private academic operations / application evidence
- `Horizon_Life` — private Finance / Nutrition / Recovery / life operations
- `Horizon_Opportunity_Radar` — existing private bounded opportunity-support repository

Personal showcase/profile repositories remain explicitly Human-only and outside Horizon AI operation.

## Migration Safety Rules

1. **Copy before delete.**
2. **One canonical owner after cutover.**
3. **Preserve real evidence without cosmetic rewrites.**
4. **Preserve pre-separation Git history.**
5. **Never record a plan as completed work.**
6. **Private operational material stays in private repositories.**
7. **Human-only showcase boundary is absolute unless the user explicitly revokes it.**

## Phase State

### Phase 1 — Registry and destination initialization

**Complete.**

- repository access / visibility checked;
- target repositories initialized;
- canonical ownership defined;
- `Horizon_Life` verified Private before life content migration.

### Phase 2 — Copy active canonical content

**Substantially complete for active state.**

Migrated active canonical state/evidence includes:

- Horizon Skills;
- Python, C++, Linux, Algorithm and Embedded active learning state/evidence;
- Qingdao Agri Data Competition active workspace / state;
- Earth Flywheel seed artifact;
- Academic Operations state;
- Finance and Nutrition / Recovery life-operation artifacts.

Historical material may remain in `Project_Horizon`; the objective is not to duplicate every old artifact merely for symmetry.

### Phase 3 — Control-plane cutover

**Complete — 2026-09-04.**

- `THREAD_PROTOCOL.md` updated to V2.3 multi-repo local-first operation;
- `MASTER_STATUS.md` reduced to a control summary and repointed to canonical repositories;
- `REPOSITORIES.md` established as the single canonical registry;
- `HZN-001 horizon-context-sync` updated to v0.6 local-first multi-repo routing;
- `Project_Horizon/README.md` updated to describe the control-plane role.

After this point, legacy execution copies inside `Project_Horizon` are not live second sources.

### Phase 4 — Verification

**Core verification complete; ongoing naturally through use.**

Verified canonical state paths exist for:

- Python;
- C++;
- Linux;
- Algorithm;
- Embedded;
- Qingdao competition;
- Academic Operations;
- Finance;
- Nutrition / Recovery base artifact;
- Skills.

Future Specialist sessions should naturally validate local-first startup as they resume work. Do not manufacture test sessions merely to generate migration evidence.

### Phase 5 — Legacy cleanup

**Pending — low priority.**

Legacy execution folders may be frozen or removed only when doing so reduces real confusion or repository clutter.

Do not spend prime learning / project time on cosmetic cleanup. Pre-separation Git history already preserves the evidence.

## Efficiency Changes Produced by the Migration

Default Specialist startup is now:

`task → owner → canonical repo → local STATUS → execute`

`MASTER_STATUS.md` is loaded only when Horizon-wide context matters.

Repository routing is canonicalized in one file, and duplicate repository registry files are retired.

## Success Test

The architecture is successful when:

- `Project_Horizon` is primarily a control / strategy repository;
- each active execution area has one canonical detailed state owner;
- Specialist startup normally requires one local state read;
- private academic/life material is not expected in the public control repo;
- Skills have a dedicated home;
- the user does not need to act as a message bus;
- the architecture becomes boring enough that attention returns to learning and building.

## Next Architecture Rule

**Stop expanding infrastructure by default.**

Add new repository machinery, dashboards, task systems, message buses or orchestration only after repeated real friction demonstrates that the expected reduction in coordination cost is worth the maintenance burden.
