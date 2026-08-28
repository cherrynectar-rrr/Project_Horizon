# Project Horizon — Skills Architecture v1

Last Updated: 2026-08-28
Owner: Voyage Room (prototype / strategic design)
Status: Draft — Awaiting Project Control Adoption

## 1. Purpose

Project Horizon now contains enough recurring workflows that repeatedly solving them from scratch in chat creates unnecessary context cost, inconsistency and role leakage.

A **Horizon Skill** is a reusable, versioned operating procedure for a task pattern that has become stable enough to execute consistently.

Skills should compress mature methods without creating new execution lines.

> Thread = who owns the work.  
> Skill = how a recurring type of work is performed.  
> Status = what is currently true.  
> Strategy = what may be worth doing.  
> Evidence = what actually happened.

## 2. What a Skill Is Not

A Skill is not:

- a new specialist thread;
- an independent decision authority;
- a hidden memory store;
- a substitute for the Charter, THREAD_PROTOCOL or MASTER_STATUS;
- a generic prompt collection;
- a roadmap that silently activates work;
- a reason to automate a process before it is understood.

A Skill never grants permissions that the invoking role does not already have.

## 3. Design Principles

### 3.1 Governance first

Every Skill must obey the Charter, THREAD_PROTOCOL and current Project Control state.

If a Skill conflicts with a higher-authority document, the Skill loses.

### 3.2 Minimal sufficient context

A Skill should read only the authoritative files required for the task. It should not fetch the entire repository by default.

### 3.3 Evidence over inference

Skills must clearly separate:

- verified repository state;
- user-supplied evidence;
- external verified facts;
- inference / recommendation.

### 3.4 No role leakage

A Voyage Room Skill cannot allocate execution resources. A specialist Skill cannot change long-term route. A Main Control Skill cannot rewrite evidence as if work were completed.

### 3.5 Reusable output contract

A Skill should produce a predictable output shape so other workflows can rely on it.

### 3.6 Fail closed on authority

If write authority is unclear, the Skill should stop and escalate rather than writing to an uncertain file.

### 3.7 Cheap before automated

First make a workflow reliable manually. Automate only after repeated evidence shows that the workflow is stable and automation reduces real cost.

## 4. Skill Anatomy

Every canonical `SKILL.md` should contain:

1. **Skill ID** — stable identifier, e.g. `HZN-001`.
2. **Name** — concise machine/human-readable name.
3. **Version / Status** — Draft, Trial, Adopted, Deprecated.
4. **Purpose** — what recurring problem it solves.
5. **Owner / Allowed Roles** — who may maintain or invoke it.
6. **Triggers** — when it should run.
7. **Do Not Trigger When** — low-value or conflicting situations.
8. **Inputs** — required information.
9. **Required Reads** — authoritative files / sources.
10. **Write Boundary** — exact files or systems it may modify, if any.
11. **Procedure** — deterministic execution steps.
12. **Output Contract** — expected result shape.
13. **Verification** — how to check that the Skill succeeded.
14. **Escalation / Stop Conditions** — when it must stop or request Main Control / Voyage / user input.
15. **Anti-patterns** — recurring failure modes.
16. **Change Log** — meaningful changes only.

## 5. Proposed Lifecycle

### Draft

A role may design a Skill inside its own writable area. It is not yet canonical.

### Trial

The Skill is used on several real tasks. Failures, missing inputs and unnecessary steps are recorded.

### Adopted

Project Control approves cross-thread use and canonical location. An adopted Skill becomes the preferred operating procedure for its task pattern, but remains subordinate to governance documents.

### Deprecated

A newer Skill or governance change supersedes it. The old Skill remains discoverable with a clear replacement pointer when useful.

## 6. Proposed Canonical Library

Recommended canonical location after Project Control approval:

`00_Project_Control/Skills/`

Rationale:

- Skills are shared operating infrastructure rather than another execution thread;
- Project Control can govern cross-thread adoption without making the Skill itself a Main Control decision;
- role-owned prototypes may remain inside the role's writable directory until adopted;
- canonical Skills should be stable, low-frequency artifacts.

Proposed shape:

```text
00_Project_Control/Skills/
  README.md
  HZN-001_horizon-context-sync/
    SKILL.md
  HZN-002_status-update/
    SKILL.md
  HZN-003_evidence-intake/
    SKILL.md
```

Final location and write ownership require Project Control approval because THREAD_PROTOCOL does not yet define a shared Skill Library.

## 7. Initial Skill Backlog

Priority is intentionally small.

### HZN-001 — horizon-context-sync

Determine the minimum authoritative Horizon state that must be read before an important task and produce a role-safe context packet.

Why first: every later Skill depends on correct state and authority.

### HZN-002 — status-update

Perform evidence-safe, role-safe STATUS / bridge updates only when a meaningful change exists.

Why next: status writing is repetitive and high-risk if done inconsistently.

### HZN-003 — evidence-intake

Turn user-supplied files/screenshots/project artifacts into verified structured evidence without inventing missing facts.

Why next: directly useful to Academic Operations, Career, projects and future MSc applications.

### HZN-004 — strategic-route-audit

Standardize deep comparison of countries, degrees, careers or research routes using current external evidence, assumptions, opportunity cost and decision gates.

### HZN-005 — opportunity-filter

Apply the Charter decision framework to competitions, internships, projects, courses or external opportunities and explicitly answer: "What temporarily will not be done?"

Do not create all backlog Skills at once. Promote only workflows that have repeated real use.

## 8. Invocation Model

Skills should be invoked by task pattern, not by user having to remember an exact command.

Example:

- User asks an important cross-thread Horizon question → invoke `horizon-context-sync` first.
- A verified milestone is completed → consider `status-update`.
- User uploads a syllabus / grade screenshot / report → consider `evidence-intake`.

Invocation does not mean visible ceremony. Routine Skill use should normally be silent unless the user benefits from seeing the procedure or decision boundary.

## 9. Relationship to Tools

A Skill may orchestrate existing tools such as GitHub, Notion, web research, file analysis or other connected systems.

The Skill is the procedure; the tool is the mechanism.

A Skill must not assume a connector is available. If a required tool is unavailable, it should either use an allowed fallback or stop with a clear limitation.

## 10. Success Criteria

The Skills layer succeeds if it:

- reduces repeated setup instructions;
- reduces incorrect file reads/writes;
- makes cross-chat behavior more consistent;
- preserves governance boundaries;
- makes evidence handling more reliable;
- lowers context and administration cost;
- increases the percentage of Horizon effort spent on real learning, building, research and judgment.

It fails if it becomes a large bureaucracy that requires maintaining Skills for their own sake.

## 11. Immediate Recommendation

Prototype and trial only `HZN-001 — horizon-context-sync` first.

After several real uses, Project Control should decide whether to:

- adopt the shared Skills architecture;
- choose the canonical location;
- promote HZN-001;
- authorize HZN-002 and HZN-003 as the next two skills.
