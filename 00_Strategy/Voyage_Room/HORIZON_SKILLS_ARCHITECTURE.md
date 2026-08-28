# Project Horizon — Skills Architecture v1

Last Updated: 2026-08-28
Owner: Voyage Room (prototype / strategic design)
Status: Trial Architecture — Bounded Trial Authorized by Project Control

## 1. Purpose

Project Horizon now contains enough recurring workflows that repeatedly solving them from scratch in chat creates unnecessary context cost, inconsistency and role leakage.

A **Horizon Skill** is a reusable, versioned operating procedure for a task pattern that has become stable enough to execute consistently.

Skills should compress mature methods without creating new execution lines.

> Thread = who owns the work.  
> Skill = how a recurring type of work is performed.  
> Status = what is currently true.  
> Strategy = what may be worth doing.  
> Evidence = what actually happened.

Project Control authorized these architecture principles as a **bounded Trial** in `CTV-20260828-02`. This does not create a fourth governance layer or authorize unrestricted Skill implementation.

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

## 5. Lifecycle

Project Control adopted the following lifecycle for trial purposes:

### Draft

A role may design a Skill inside its own writable area when governance permits. It is not canonical and does not bind other roles.

### Trial

The Skill is used on real tasks. Failures, missing inputs, unnecessary steps and measurable value are recorded.

Cross-thread trial use requires Project Control authorization.

### Adopted

Project Control approves canonical cross-thread use and governance. An adopted Skill becomes the preferred operating procedure for its task pattern, but remains subordinate to higher-authority documents.

### Deprecated

A newer Skill or governance change supersedes it. The old Skill remains discoverable with a clear replacement pointer when useful.

## 6. Canonical Library — Deferred

Intended future canonical location:

`00_Project_Control/Skills/`

Project Control accepted this as the intended direction but **deferred physical migration and canonicalization** because `THREAD_PROTOCOL.md` does not yet define shared Skill Library write ownership.

During the bounded trial:

- `HZN-001` remains physically located in the Voyage-owned prototype path;
- shared invocation is authorized by Control;
- physical location does not imply canonical ownership;
- no other role may infer new write rights from the Skill's location or trial authorization.

Potential future shape remains:

```text
00_Project_Control/Skills/
  README.md
  HZN-001_horizon-context-sync/
    SKILL.md
```

Do not create this canonical structure before the ownership question is explicitly resolved.

## 7. Current Trial and Frozen Backlog

### HZN-001 — horizon-context-sync

Status: **Shared Cross-Thread Trial Authorized**.

Purpose: determine the minimum authoritative Horizon state that must be read before an important task and produce a role-safe context packet.

Current artifact:

`00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md`

Review trigger:

- approximately 3–5 meaningful real uses;
- use across more than one Horizon role;
- any material authority ambiguity, failure or evidence that the Skill adds more overhead than it removes.

### Frozen backlog

The following concepts remain **not authorized for implementation** until Project Control reviews HZN-001 trial evidence:

- `HZN-002 — status-update`
- `HZN-003 — evidence-intake`
- `HZN-004 — strategic-route-audit`
- `HZN-005 — opportunity-filter`

The backlog may remain documented as candidate patterns, but no Skill artifact should be implemented merely because the pattern is attractive.

## 8. Invocation Model

Skills should be invoked by task pattern, not by requiring the user to remember an exact command.

For the current trial:

- important cross-thread or governance-sensitive Horizon task → consider `HZN-001` preflight;
- routine low-impact work → do not invoke a full sync unnecessarily.

Invocation should normally be silent. The user should receive the actual task result, not a recital of governance machinery.

## 9. Relationship to Threads and Tools

A Skill may orchestrate existing tools such as GitHub, Notion, web research, file analysis or other connected systems.

The Skill is the procedure; the tool is the mechanism.

A Skill does not own the underlying work merely because it coordinates a procedure.

Example boundary:

- Academic Operations & Evidence owns factual academic evidence maintenance;
- a future `evidence-intake` Skill could standardize *how* evidence is ingested across eligible contexts;
- such a Skill would not transfer Academic's operational authority to Voyage Room or any other role.

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

## 11. Immediate Operating Rule

For now:

1. use and observe only `HZN-001`;
2. record only meaningful Trial evidence;
3. revise HZN-001 only from observed friction, failure or clear simplification opportunities;
4. seek real use from more than one role type;
5. keep HZN-002–005 frozen;
6. return to Project Control after approximately 3–5 meaningful trials or sooner if a material problem appears.

The next milestone is **decision-quality HZN-001 trial evidence**, not a larger Skill catalog.
