# Project Horizon

Project Horizon is a long-term personal development and engineering-capability system.

Its purpose is not merely to complete courses or accumulate projects. It exists to build the engineering, research and judgment capability needed to create meaningful work and preserve long-term freedom over how to live, where to live and why to work.

> The world is vast. I want to earn, through my own effort, the freedom to explore it, to keep creating, to understand more deeply, and to live the life I truly choose.

---

## Mission

Build world-class engineering, research and judgment capability while preserving health, curiosity, financial resilience and long-term optionality.

Project Horizon treats technical growth as a vehicle, not a permanent identity constraint. Current interests may evolve as real evidence accumulates.

---

## Governance Model

Project Horizon uses three layers:

- **Strategic layer — Voyage Room / 远航室:** explores long-term direction, scenarios, risks, trade-offs and open questions.
- **Control layer — Main Control / 主控:** decides current priorities, coordinates resources, resolves cross-thread conflicts and converts strategic exploration into executable plans.
- **Execution layer — Specialist Threads / 专业线程:** performs concrete learning, projects and evidence production inside approved scopes.

**Role summary:**

- Voyage Room = Explore
- Main Control = Decide & Coordinate
- Specialist Threads = Execute

The Voyage Room is not parallel to Python, C++, Linux or other technical threads. It has broad analytical freedom but no direct execution authority.

---

## Source of Truth

GitHub is Project Horizon's formal shared state.

Use the following order when navigating important questions:

1. `00_Project_Charter/Project_Horizon_Charter_v3.0.md` — highest stable governance authority.
2. `00_Project_Control/THREAD_PROTOCOL.md` — read/write and state-sync rules.
3. `00_Project_Control/MASTER_STATUS.md` — current approved priorities, activation states and cross-thread decisions.
4. `00_Strategy/Voyage_Room/` — strategic facts, hypotheses, options, recommendations and open questions.
5. Relevant specialist `STATUS.md` — factual execution state inside one domain.
6. Code, projects, experiments, results and other evidence.

Chat memory is supporting context only. When chat memory conflicts with current formal GitHub state, GitHub governs.

---

## Repository Structure

```text
Project_Horizon/
├── 00_Project_Charter/
│   ├── Project_Horizon_Charter_v3.0.md
│   ├── Project_Horizon_Chat_Thread_Starter_Pack_v2.0.md
│   └── historical Charter versions
│
├── 00_Strategy/
│   └── Voyage_Room/
│       ├── LONG_TERM_DIRECTION.md
│       ├── PERSONAL_PROFILE.md
│       ├── OPEN_QUESTIONS.md
│       ├── DECISION_LOG.md
│       ├── VOYAGE_CHARTER.md
│       └── VOYAGE_TO_CONTROL.md
│
├── 00_Project_Control/
│   ├── MASTER_STATUS.md
│   ├── THREAD_PROTOCOL.md
│   └── CONTROL_TO_VOYAGE.md
│
├── 01_Python/
├── 02_CPP/
├── 03_Linux/
├── 04_Embedded/
├── 05_Algorithm/
├── 06_AI/
├── 07_Embodied_AI/
├── 08_English/
├── 09_Career/
├── 10_Graduate/
└── 11_Investment/
```

Some execution directories may exist before they are formally activated. Directory existence does not itself grant execution priority.

---

## Strategic Communication

The Voyage Room and Main Control communicate through a deliberate asynchronous bridge:

- Voyage → Control: `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`
- Control → Voyage: `00_Project_Control/CONTROL_TO_VOYAGE.md`

Each file has exactly one writer. Strategic recommendations become operational only after Main Control reviews them against current execution state, capacity and real-world constraints.

---

## Learning and Evidence Philosophy

Project Horizon prefers:

- project-driven learning;
- incremental progress;
- minimum necessary theory before action;
- debugging and explanation instead of blind replacement;
- reusable and transferable capability;
- real evidence over self-description;
- sustainable depth over uncontrolled parallelism.

Useful evidence includes:

- runnable code;
- reproducible projects;
- README and technical documentation;
- meaningful Git history;
- tests and experiment results;
- hardware demonstrations;
- competition outcomes with analysis;
- research outputs;
- internship outcomes;
- strong academic performance;
- recommendations earned through real work.

Certificates, tutorial counts and artificial activity are not treated as capability by themselves.

---

## Personal Route Principle

The university curriculum describes what the institution offers and requires. It does not automatically define the user's personal development route.

Courses, competitions, certificates and projects are tools. Their value should be judged by factors such as:

- long-term capability;
- dependency value;
- GPA impact;
- engineering or research relevance;
- evidence quality;
- time and financial cost;
- opportunity cost;
- contribution to future optionality.

Current interests in robotics, embodied AI, AI deployment, embedded systems, physics or astronomy remain exploration signals rather than fixed lifelong identities.

---

## Capacity Rule

Execution resources are intentionally limited.

The default model is:

- one main technical line;
- up to two support lines;
- a small number of maintenance habits;
- valuable but inactive directions kept in backlog or strategic exploration.

Any new major task should answer:

> What will temporarily not be done if this is accepted?

Current priorities are **not** maintained in this README. Read `00_Project_Control/MASTER_STATUS.md` for the latest approved state.

---

## External Opportunity Intake

Project Horizon may use external systems such as Horizon Opportunity Radar to collect and structure competitions, research opportunities, exchanges, scholarships, internships and similar information.

External systems provide factual inputs. They do not own Project Horizon's final strategic decisions.

Final decisions such as `APPLY`, `WATCH`, `SKIP` or `URGENT` belong to the user and Main Control.

---

## How to Start a New Chat Thread

Use:

`00_Project_Charter/Project_Horizon_Chat_Thread_Starter_Pack_v2.0.md`

It contains startup rules for:

- Main Control;
- Voyage Room;
- specialist execution threads.

New threads must read current GitHub state instead of relying on hard-coded progress from the starter template.

---

## Current State

This README intentionally does not record the current Python milestone, competition priority, country shortlist or active weekly plan.

For current execution state, read:

`00_Project_Control/MASTER_STATUS.md`

For detailed execution state, read the relevant specialist `STATUS.md`.

For current strategic exploration, read:

`00_Strategy/Voyage_Room/`

---

## Core Loop

Project Horizon follows an evidence-driven cycle:

**Explore → Decide → Execute → Obtain real feedback → Re-explore**

The mission is stable. The route is allowed to evolve.
