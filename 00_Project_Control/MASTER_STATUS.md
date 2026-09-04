# Project Horizon — Master Status

Last Updated: 2026-09-04
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
4. **Embedded** — Active, bounded exploration
5. **C++** — Support for Algorithm / systems work
6. **Linux** — Support, activated by real workflow needs
7. **Career / Internship** — Active, bounded support; event-driven
8. **Academic Operations & Evidence** — Maintenance / bounded support
9. **Personal Finance & Capital** — Maintenance / bounded support
10. **Life Operations — Nutrition & Recovery** — Maintenance; baseline not yet initialized as a Specialist STATUS

Academic obligations and GPA-sensitive work outrank competition polish and optional project expansion.

---

## Active Tracks

| Track | Canonical State | Role | Current State | Next Gate |
| --- | --- | --- | --- | --- |
| Python | `Horizon_Learning/Python/STATUS.md` | Main | Foundation through Week03 complete; OOP transition active | Student Manager V2 or equivalent foundation evidence |
| Qingdao Agri Data Competition | `Horizon_projects/2026_Qingdao_Agri_Data_Competition/STATUS.md` | Bounded project | Phase 1 MVP active; egg-price route GO | Reproducible historical dataset with cited sources, then indicators / risk rule |
| Algorithm | `Horizon_Learning/Algorithm/STATUS.md` | Active | Block 01 active; current topic Prefix Sums | First verifiable prefix-sums milestone |
| Embedded | `Horizon_Learning/Embedded/STATUS.md` | Bounded exploration | Phase 0 bring-up | Build → Flash → Debug → onboard LED on approved board |
| C++ | `Horizon_Learning/CPP/STATUS.md` | Support | Standalone preheat complete; readiness gate passed | Patch only real C++ / STL gaps from current work |
| Linux | `Horizon_Learning/Linux/STATUS.md` | Support | No verified standalone milestone yet | One real practical workflow milestone when needed |
| Career / Internship | `Project_Horizon/09_Career/STATUS.md` | Bounded support | Readiness Baseline v1 complete; on-demand review active | Re-review after materially stronger project / Linux / Algorithm evidence or a high-fit opportunity |
| Academic Operations | `Horizon_Academic/Academic_Operations/STATUS.md` | Maintenance | Year 2 Fall Academic Baseline v1 in progress | Verified course / assessment / evidence baseline |
| Personal Finance | `Horizon_Life/Finance/STATUS.md` | Maintenance | Personal Finance Baseline v1 in progress | Complete concise baseline, then monthly / event-driven maintenance |
| Nutrition & Recovery | `Horizon_Life/Nutrition_Recovery/README.md` | Maintenance | Approved — pending Specialist initialization | Nutrition & Recovery Baseline v1 |
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

---

## Skills State

Canonical Skill repository: `cherrynectar-rrr/Horizon_Skills`.

- `HZN-001 horizon-context-sync v0.6` — **Adopted — Active**; multi-repo local-first routing
- `horizon-learning-loop v0.2` — **Adopted — Active**; Self-Study + Assessment default
- `HZN-002 status-update v0.1` — **Candidate — Trial**
- `engineering-debug-loop v0.1` — **Candidate — Trial**
- `behavior-first-testing v0.1` — **Candidate — Trial**
- `design-grill v0.1` — **Candidate — Trial**

Skills support execution; they do not create new authority or a new workload.

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
- **Embedded:** Phase 0 real-board bring-up
- **Academic:** Year 2 Fall Academic Baseline v1
- **Finance:** Personal Finance Baseline v1
- **Life:** Nutrition & Recovery Baseline v1 after Specialist initialization
- **Multi-repo architecture:** verify canonical links and then stop architecture work unless real friction appears

---

## Efficiency Rule

New Horizon infrastructure must solve a recurring real problem or measurably reduce context / coordination cost.

Do not add dashboards, message buses, task systems, agent orchestration or additional repositories merely because they look organized.

**Default execution question:**

> What capability or evidence gets stronger if we spend time on this, and what will temporarily not be done?
