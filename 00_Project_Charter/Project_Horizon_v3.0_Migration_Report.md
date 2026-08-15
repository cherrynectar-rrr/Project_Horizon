# Project Horizon v3.0 Migration Report

**Migration date:** 2026-08-16  
**From:** Charter v2.1 layered-governance transition  
**To:** Charter v3.0 — Strategic Exploration & Evidence Governance Edition  
**Status:** Completed

---

## 1. Why This Migration Happened

Project Horizon began primarily as a structured engineering-learning system: multiple specialist threads, one main technical line, limited support lines, project-driven learning and GitHub-based evidence.

That structure was useful, but it became insufficient once Project Horizon also needed to handle long-horizon questions such as:

- which technical directions deserve sustained exploration;
- how engineering, research and academic development should interact;
- whether current robotics / AI / embedded interests are durable directions or temporary hypotheses;
- how graduate study, countries, funding, career and quality-of-life constraints should influence future choices;
- how to preserve alternative futures without allowing strategic exploration to fragment daily execution.

The missing capability was not another specialist thread. It was a separate strategic layer that could explore broadly while leaving execution control centralized.

The v3.0 migration therefore changes Project Horizon from a mainly multi-thread learning-management system into an evidence-driven three-layer governance system.

---

## 2. Core Architectural Change

### Before

The earlier model centered on:

- Main Control / 总控
- specialist learning threads
- one main line, limited support lines and maintenance habits
- project-driven execution

Strategic questions could be discussed, but there was no fully independent strategic role or durable bridge between long-term exploration and execution control.

### After

Project Horizon now operates through three distinct layers:

1. **Strategic Layer — Voyage Room / 远航室**
   - explores long-term direction;
   - challenges assumptions;
   - compares scenarios and opportunity costs;
   - maintains hypotheses, open questions and recommendations;
   - has broad analytical freedom but no direct execution authority.

2. **Control Layer — Main Control / 主控**
   - synthesizes strategic exploration with current evidence and constraints;
   - decides priorities and resource allocation;
   - resolves cross-thread conflicts;
   - owns `MASTER_STATUS.md`;
   - converts strategic recommendations into approved experiments, deferrals or execution routes.

3. **Execution Layer — Specialist Threads / 专业线程**
   - executes concrete learning and projects;
   - maintains factual state inside its own domain;
   - produces verifiable evidence;
   - does not independently redefine Project Horizon's long-term route.

**Role relationship:**

**Voyage Room = Explore**  
**Main Control = Decide & Coordinate**  
**Specialist Threads = Execute**

---

## 3. Voyage–Control Bridge Introduced

Different chat threads must not pretend to share live internal conversation state. GitHub is the durable asynchronous communication layer.

### Voyage → Control

`00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`

- Sole writer: Voyage Room.
- Used for meaningful strategic judgments, route hypotheses, recommendations, material risks and questions requiring Main Control judgment.

### Control → Voyage

`00_Project_Control/CONTROL_TO_VOYAGE.md`

- Sole writer: Main Control.
- Used for adopted, rejected or deferred decisions, changed constraints, feedback and new strategic research questions.

A Voyage Room recommendation is advisory until Main Control adopts it.

---

## 4. Evidence Governance Added

v3.0 formalizes the distinction between different kinds of strategic statements:

- **FACT** — verified information.
- **HYPOTHESIS** — plausible but unconfirmed interpretation.
- **OPTION** — route available for consideration.
- **RECOMMENDATION** — advice based on current evidence and constraints.
- **OPEN QUESTION** — unresolved issue requiring more evidence.
- **DECISION** — allocation formally adopted by Main Control.

This prevents interests, assumptions or one-time conversations from silently becoming Project Horizon commitments.

The core operating loop is now:

**Explore → Decide → Execute → Obtain real feedback → Re-explore**

---

## 5. Personal Route Principle Strengthened

v3.0 explicitly separates the university curriculum from the user's personal development strategy.

The university curriculum answers what the institution provides or requires. Project Horizon must separately judge what deserves deep mastery, working knowledge, GPA-focused effort, exploration, external supplementation or minimal strategic investment.

The same principle applies to:

- competitions;
- certificates;
- projects;
- research programs;
- graduate-study opportunities;
- fashionable technical directions.

These are tools, not goals by themselves.

---

## 6. Identity Lock-In Removed From Governance

Current interests in robotics, embodied AI, AI deployment, embedded systems and hardware-software integration remain important exploration directions, but they are not constitutional declarations of a final career identity.

Physics, astronomy, research, engineering, different countries and other future possibilities may remain open until real experience produces enough evidence to narrow them.

Project Horizon's goal is not to label the user early. Its goal is to improve the quality of future decisions while continuing to build transferable capability.

---

## 7. Financial and Life Constraints Elevated

v3.0 treats the following as first-class decision variables rather than secondary considerations:

- GPA and academic foundations;
- time and energy;
- health and sustainability;
- funding and total cost;
- debt and downside risk;
- family financial resilience;
- geographic mobility;
- meaningful work;
- quality of life;
- long-term optionality.

High-cost self-funded education must not be treated as the default route. Funding that is not formally confirmed is treated as unavailable for planning purposes.

---

## 8. Files Added or Upgraded During Migration

### Constitutional / startup layer

- `00_Project_Charter/Project_Horizon_Charter_v3.0.md`
- `00_Project_Charter/Project_Horizon_Chat_Thread_Starter_Pack_v2.0.md`
- `00_Project_Charter/Common_Rules_v2.0.md`
- `00_Project_Charter/README.md` updated to point to v3.0 as the current formal Charter.

### Strategic layer

- `00_Strategy/Voyage_Room/` established as the strategic layer.
- `VOYAGE_CHARTER.md` upgraded to define strategic independence, evidence discipline and authority limits.
- `VOYAGE_TO_CONTROL.md` established as the Voyage Room's outbound communication channel.
- Supporting strategic documents include:
  - `LONG_TERM_DIRECTION.md`
  - `PERSONAL_PROFILE.md`
  - `OPEN_QUESTIONS.md`
  - `DECISION_LOG.md`

### Control layer

- `00_Project_Control/THREAD_PROTOCOL.md` upgraded to v1.1 with the three-layer model and Voyage–Control communication protocol.
- `00_Project_Control/MASTER_STATUS.md` records the strategic layer while preserving current execution priorities.
- `00_Project_Control/CONTROL_TO_VOYAGE.md` established as the Main Control outbound communication channel.

### Repository entry point

- Root `README.md` was rewritten as a stable project navigation page rather than a container for temporary Python progress or current milestones.

---

## 9. What Did Not Change

The migration intentionally did **not** discard Project Horizon's original engineering discipline.

The following remain valid:

- project-driven learning;
- incremental execution;
- one main technical line by default;
- limited support lines;
- GitHub evidence;
- specialist ownership of its own factual execution state;
- Main Control ownership of cross-thread priorities;
- avoiding uncontrolled parallelism;
- preferring real capability over tutorial counts, certificates or artificial activity.

The migration adds strategic capability above the existing execution system rather than replacing it.

---

## 10. Historical Version Policy

Previous Charter and Starter Pack versions remain in the repository as historical records.

They must not be silently overwritten or deleted merely because a newer version exists.

Current formal versions are:

- `Project_Horizon_Charter_v3.0.md`
- `Project_Horizon_Chat_Thread_Starter_Pack_v2.0.md`
- `Common_Rules_v2.0.md`
- `THREAD_PROTOCOL.md` v1.1

Historical files may still contain older paths, priorities or governance assumptions. They are archival evidence, not current instructions.

---

## 11. Current Governance Source Order

For future important Project Horizon work, use this hierarchy:

1. `00_Project_Charter/Project_Horizon_Charter_v3.0.md`
2. `00_Project_Control/THREAD_PROTOCOL.md`
3. `00_Project_Control/MASTER_STATUS.md`
4. `00_Strategy/Voyage_Room/` when strategic context is relevant
5. relevant specialist `STATUS.md`
6. code, projects, experiments and other evidence

Chat memory is supporting context only. GitHub is the formal shared state.

---

## 12. Maintenance Rules After Migration

- Do not update the Charter for ordinary progress changes.
- Do not put current milestones or weekly plans back into the root README.
- Do not let Voyage Room exploration directly consume execution capacity without Main Control approval.
- Do not let specialist threads independently alter the long-term route.
- Update STATUS / MASTER_STATUS only for meaningful state changes.
- Use the Voyage–Control Bridge only for durable strategic communication, not chat transcripts.
- Keep execution narrow while allowing strategic exploration to remain broad.
- Any new major activity must answer: **What will temporarily not be done if this is accepted?**

---

## 13. Migration Acceptance

Project Horizon v3.0 is accepted when all of the following are true:

- Charter v3.0 is the documented current formal Charter;
- three-layer governance is consistently represented across Charter, Protocol, Main Control and Voyage Room files;
- Voyage–Control Bridge ownership is unambiguous;
- root README no longer stores temporary execution progress;
- specialist STATUS ownership remains unchanged;
- previous versions remain preserved as history;
- current execution priorities remain controlled by `MASTER_STATUS.md`, not by strategic exploration.

As of 2026-08-16, these conditions are satisfied.

---

## 14. Final Migration Statement

Project Horizon v3.0 should be understood as a change in how the system thinks, not merely how its folders are organized.

The project now intentionally separates:

- **where we might go** from
- **what we currently decide** from
- **what we are actually doing**.

That separation allows Project Horizon to remain ambitious without becoming chaotic, open-minded without becoming directionless, and execution-focused without prematurely closing off the future.
