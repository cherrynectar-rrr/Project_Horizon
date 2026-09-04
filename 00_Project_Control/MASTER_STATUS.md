# Project Horizon — Master Status

Last Updated: 2026-09-05
Status: Active
Authority: Horizon Core only

## Operating Model

Project Horizon uses two layers:

- **Horizon Core / 核心舱 = Explore + Decide & Coordinate**
- **Specialist Threads = Execute**

`cherrynectar-rrr/Project_Horizon` is the control plane. Detailed execution state is distributed across canonical repositories defined in `00_Project_Control/REPOSITORIES.md`.

`MASTER_STATUS.md` is intentionally a **control summary**. Detailed history, curriculum and project implementation belong in their owning repositories.

---

## Current Priority / Capacity

1. **Python** — Main technical capability line
2. **2026 Qingdao Agri Data Competition** — Active, bounded short-term project through 2026-09-30
3. **Algorithm** — Active structured line
4. **Data Structures** — Active academic-acceleration support; shares mastery / capacity with Algorithm and coursework rather than adding a separate fixed study line
5. **Embedded** — Active, bounded exploration
6. **C++** — Support for Algorithm / systems work
7. **Linux** — Support, activated by real workflow needs
8. **Career / Internship** — Active, bounded support; event-driven
9. **Academic Operations & Evidence** — Maintenance / bounded support
10. **Personal Finance & Capital** — Maintenance / bounded support
11. **Life Operations — Nutrition & Recovery** — Active maintenance; Baseline v1 initialized

Academic obligations and GPA-sensitive work outrank competition polish and optional project expansion.

Data Structures is intentionally **not** a second main technical line. When it overlaps Algorithm or university coursework, the same verified learning evidence should be reused and the study time should replace duplicate work rather than stack on top of it.

---

## Active Tracks

| Track | Canonical State | Role | Current State | Next Gate |
| --- | --- | --- | --- | --- |
| Python | `Horizon_Learning/Python/STATUS.md` | Main | Foundation through Week03 complete; OOP transition active | Student Manager V2 or equivalent foundation evidence |
| Qingdao Agri Data Competition | `Horizon_projects/2026_Qingdao_Agri_Data_Competition/STATUS.md` | Bounded project | Phase 1 MVP active; egg-price route GO | Reproducible historical dataset with cited sources, then indicators / risk rule |
| Algorithm | `Horizon_Learning/Algorithm/STATUS.md` | Active | Block 01 active; current topic Prefix Sums | First verifiable prefix-sums milestone |
| Data Structures | `Horizon_Learning/Data_Structures/STATUS.md` | Academic acceleration support | Initialized; course-specific syllabus / language not yet verified | Linear Structure Foundation v1 or course-aligned first block if official materials differ |
| Embedded | `Horizon_Learning/Embedded/STATUS.md` | Bounded exploration | Phase 0 bring-up | Build → Flash → Debug → onboard LED on approved board |
| C++ | `Horizon_Learning/CPP/STATUS.md` | Support | Standalone preheat complete; readiness gate passed | Patch only real C++ / STL gaps from current work |
| Linux | `Horizon_Learning/Linux/STATUS.md` | Support | No verified standalone milestone yet | One real practical workflow milestone when needed |
| Career / Internship | `Project_Horizon/09_Career/STATUS.md` | Bounded support | Readiness Baseline v1 complete; on-demand review active | Re-review after materially stronger project / Linux / Algorithm evidence or a high-fit opportunity |
| Academic Operations | `Horizon_Academic/Academic_Operations/STATUS.md` | Maintenance | Year 2 Fall Academic Baseline v1 active; Course Mastery & Evidence v1 bridge initialized with Data Structures pilot | First linked mastery-evidence cycle + continued baseline maintenance |
| Personal Finance | `Horizon_Life/Finance/STATUS.md` | Maintenance | Personal Finance Baseline v1 in progress | Complete concise baseline, then monthly / event-driven maintenance |
| Nutrition & Recovery | `Horizon_Life/Nutrition_Recovery/STATUS.md` | Maintenance | Baseline v1 initialized; real-life constraints pending intake | Practical meal architecture + recovery guardrails + at most 1–2 behavior-change experiments |
| Earth Flywheel | `Earth_Flywheel/` | Research seed | Sprint v0 preserved; not current execution priority | Resume only when current foundations / capacity justify it |

---

## Current Core Decisions / Guardrails

### Python

Python remains the main technical capability line. The immediate curriculum gate is OOP → Student Manager V2 or equivalent evidence. During the Qingdao competition window, real project-driven Python may count toward foundation growth when it produces stronger evidence than isolated exercises.

### Qingdao Competition

Status: **GO — Active — Bounded Short-Term / End-to-End Delivery**.

- Deadline: **2026-09-30**
- Track: **赛道二 — 农业大数据挖掘分析**
- Working topic: **青岛蛋鸡行情波动风险提示系统**
- Fallback: Qingdao vegetable price / market-volume monitoring if egg-price data becomes materially inadequate
- No deep-learning, mobile-app or generic platform expansion without a new Core decision
- Academic / GPA-sensitive obligations override optional competition polish

### Algorithm

Algorithm remains active and structured. Current topic: **Prefix Sums**. It must not expand into a second independent main line.

### Data Structures

Data Structures is activated as **Active — Academic Acceleration Support**.

Purpose:

- master important prerequisites before or alongside the university course when doing so reduces later learning friction;
- improve engineering / algorithm foundations without waiting for classroom pacing;
- preserve a dedicated subject-matter thread without turning Academic Operations into a tutoring line.

Guardrails:

- **shared mastery, not duplicate study** with Algorithm;
- Data Structures owns structure representation, implementation, invariants, operation cost and course-facing understanding;
- Algorithm owns algorithmic problem solving and its existing Block roadmap;
- strong evidence from one thread should be reused by the other, with only genuinely new capability retested;
- Data Structures does not receive a separate fixed study budget on top of Algorithm / coursework by default;
- official syllabus, textbook, language and teacher materials take precedence for course-specific claims once supplied;
- current initial gate is **Linear Structure Foundation v1**, unless real course materials justify a different first block.

### Embedded

Embedded remains **Active — Bounded Exploration**.

- Authorized first board: `NUCLEO-G071RB`
- Toolchain: STM32CubeIDE
- Current gate: Phase 0 bring-up
- No ESP32 / FPGA / FreeRTOS / Embedded Linux / CAN / ROS2 scope expansion during Sprint v1 without Core decision

### Career

Career remains event-driven support, not a technical curriculum. Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.

### Life / Academic

Academic, Finance and Nutrition / Recovery remain maintenance systems. Their purpose is to protect GPA, evidence, financial resilience and sustainable daily operation without becoming additional main lines.

Academic coursework follows a **Course Mastery & Evidence** separation for important courses:

- `Horizon_Academic` records what the institution can formally prove: course identity, credits / hours, assessment, syllabus, grades and other useful official evidence when verified;
- the relevant `Horizon_Learning` Specialist owns what the learner can actually understand, implement, debug, derive or transfer;
- a course grade is not treated as equivalent to deep mastery;
- APS, MSc prerequisite mapping and similar application processes reuse the evidence later rather than defining the learning route;
- university pacing and curriculum are inputs, not the default personal growth ceiling;
- only strategically important courses receive a durable mastery-evidence record, and evidence should be linked rather than duplicated.

Data Structures is the first pilot of this model.

Nutrition & Recovery has now moved from approved-pending initialization into an active maintenance baseline. Its first version should remain deliberately boring and low-friction: real-environment meal architecture, simple campus / takeout rules, recovery guardrails and no more than one or two useful behavior experiments at a time.

---

## Skills State

Canonical Skill repository: `cherrynectar-rrr/Horizon_Skills`.

### Adopted — Active

- `HZN-001 horizon-context-sync v0.6` — multi-repo local-first routing
- `horizon-learning-loop v0.2` — Self-Study + Assessment default

### Candidate — Trial

- `HZN-002 status-update v0.1`
- `engineering-debug-loop v0.2`
- `behavior-first-testing v0.1`
- `design-grill v0.2`
- `completion-verification v0.1`
- `change-review v0.1`
- `codebase-orientation v0.1`
- `source-grounded-research v0.1`
- `experiment-design v0.1`
- `adaptive-guided-learning v0.1` — high-efficiency guided learning trial using dynamic step size, meaningful tasks and minimal unnecessary interaction
- `nutrition-planning v0.1` — practical campus / budget / everyday nutrition planning; medical and quantitative claims require stricter evidence boundaries
- `habit-change v0.1` — small behavior-change experiments using environment, action / coping plans and minimal monitoring

On 2026-09-04, Horizon Core completed a broad external Agent Skill scan and **selectively absorbed methods rather than bulk-installing repositories**. On 2026-09-05, a separate Life & Health intake added only the two smallest currently useful Candidate procedures and deferred workout / dedicated recovery Skills until real use justifies them.

Candidate Skills consume no scheduled study time and gain value only through natural real-task trials.

`adaptive-guided-learning v0.1` was added after repeated evidence that long passive prereading and overly fragmented simple-question tutoring can waste time. Data Structures is an approved natural trial environment; trial results should be judged by time-to-independent-capability and real transfer, not conversation volume.

Life / health Skill trials use a stricter safety rule: community Skills contribute workflow ideas, while quantitative or mutable health claims must be checked against current authoritative guidance when material. Clinical diagnosis / treatment remains outside ordinary Life Operations optimization.

Skills support execution; they do not create new authority, priorities or learning lines.

---

## Multi-Repository Cutover

Decision date: **2026-09-04**.

Canonical detailed state has moved to the repositories listed in `00_Project_Control/REPOSITORIES.md`.

After cutover:

- new detailed execution updates go only to the canonical destination;
- old execution folders inside `Project_Horizon` are legacy migration/history copies, not live second sources;
- `Project_Horizon` remains the control / strategy plane;
- human-only showcase/profile repositories remain outside Horizon AI operation.

Legacy cleanup may happen only after verification; Git history is not rewritten.

---

## Review Gates

- **Python:** Student Manager V2 / equivalent evidence
- **Competition:** 2026-09-30 submission or earlier material blocker / scope conflict
- **Algorithm:** first Prefix Sums milestone
- **Data Structures:** Linear Structure Foundation v1 or the first verified course-aligned block
- **Embedded:** Phase 0 real-board bring-up
- **Academic:** first Data Structures mastery-evidence link + Year 2 Fall Academic Baseline v1 maintenance
- **Finance:** Personal Finance Baseline v1
- **Life:** Nutrition & Recovery Baseline v1 after first real-environment trial
- **Multi-repo architecture:** verify canonical links and then stop architecture work unless real friction appears

---

## Efficiency Rule

New Horizon infrastructure must solve a recurring real problem or measurably reduce context / coordination cost.

Do not add dashboards, message buses, task systems, agent orchestration or additional repositories merely because they look organized.

**Default execution question:**

> What capability or evidence gets stronger if we spend time on this, and what will temporarily not be done?
