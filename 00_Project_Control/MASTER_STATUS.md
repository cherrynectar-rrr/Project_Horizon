# Project Horizon — Master Status

Last Updated: 2026-08-31
Status: Active
Authority: Horizon Core only

## Current Operating Model

Project Horizon now operates through two layers under `Project_Horizon_Charter_v4.0.md`:

- **Horizon Core / 核心舱 = Explore + Decide & Coordinate**
- **Specialist Threads = Execute**

The former Voyage Room / Main Control split is retired. The existing Main Control chat evolves into Horizon Core and absorbs the Voyage Room's strategic exploration function.

For major decisions, Core preserves an internal two-pass discipline:

1. **Explore** — alternatives, uncertainty, counter-cases, external evidence and missing information.
2. **Decide & Coordinate** — temporary decision, resource implication, opportunity cost and review trigger.

The former Voyage strategy directory remains preserved as a strategy library; the two Voyage–Control bridge files become historical records after merger handoff.

See `00_Project_Control/THREAD_PROTOCOL.md` v2.0 for current read/write rules.

---

## Current Priority / Capacity Structure

1. Python — main technical capability line
2. Qingdao Agri Data Competition Project — Active — Bounded Short-Term Project; Phase 1 MVP build through the 2026-09-30 competition deadline
3. Algorithm — active structured line
4. Linux — support line
5. C++ — support for algorithm implementation
6. Embedded — Active — Bounded Exploration; project-first Sprint v1
7. Career / Internship — Active — Bounded Support; event-driven
8. Personal Finance & Capital — Active — Bounded Support / Maintenance; low-frequency standing support
9. Academic Operations & Evidence — Active — Bounded Support / Maintenance; semester/event-driven

The Qingdao Agri Data Competition project is **not** a new permanent main line. It is a deadline-bounded application project that primarily consumes Python application time. Python remains the main technical capability line; Algorithm and Embedded remain active within their existing scopes but should not expand while the competition project is in its delivery window. Academic obligations and GPA-sensitive work remain higher priority than competition polish.

---

## Track Overview

| Track | Role | Current State | Next Gate |
| --- | --- | --- | --- |
| [Python](../01_Python/STATUS.md) | Main capability line | Foundation complete through Week03; OOP / Student Manager V2 remains open | Student Manager V2 or equivalent evidence that Python foundation can support real project work |
| [Qingdao Agri Data Competition](../13_Projects/2026_Qingdao_Agri_Data_Competition/STATUS.md) | Bounded short-term project | Phase 0 GO; egg-price topic authorized; Phase 1 MVP build active | Reproducible historical dataset + indicators + chart + explainable risk rule |
| [Algorithm](../05_Algorithm/STATUS.md) | Active structured line | Block 01 active; binary search and two pointers complete; prefix sums is current | First verifiable prefix-sums milestone |
| [Linux](../03_Linux/STATUS.md) | Support | No verified standalone Linux milestone yet | One bounded practical workflow milestone when a real programming need or capacity permits |
| [C++](../02_CPP/STATUS.md) | Support | Standalone preheat complete; Algorithm Readiness Gate passed | Support Algorithm and patch only real C++/STL gaps |
| [Embedded](../04_Embedded/STATUS.md) | Bounded exploration | Specialist STATUS active; Phase 0 bring-up in progress; NUCLEO-G071RB remains the authorized first board | Phase 0: verify toolchain, build, flash and debug loop on real board |
| [Career / Internship](../09_Career/STATUS.md) | Bounded support | Internship Readiness Baseline v1 complete; on-demand opportunity review active | New readiness evidence, high-fit opportunity, or seasonal application decision |
| [Personal Finance & Capital](../10_Finance/STATUS.md) | Bounded support / maintenance | Personal Finance Baseline v1 in progress | Complete Personal Finance Baseline v1 |
| [Academic Operations & Evidence](../11_Academic/STATUS.md) | Bounded support / maintenance | Year 2 Fall Academic Baseline v1 in progress | Complete Year 2 Fall Academic Baseline v1 |

---

## Current Main-Line Decision

Python remains the Horizon main technical capability line. Its immediate curriculum milestone remains OOP through Student Manager V2, but during the Qingdao competition delivery window, bounded Python learning may be driven directly by the real project when that produces stronger evidence than isolated curriculum exercises.

Algorithm remains active as a structured line and must not displace Python or the authorized short-term project without a separate Core decision. Binary search and two pointers foundations are complete; prefix sums is the current topic.

Linux and C++ remain support lines. C++ standalone preheat is complete; Linux should be learned through real development needs rather than through a broad standalone curriculum.

Embedded is activated only as **bounded exploration**. Its job is to collect real evidence about fit with MCU / hardware-software engineering through one small STM32 project-first sprint. It is not authorized to become a parallel full curriculum, and it may not expand into ESP32, 51, FPGA, FreeRTOS, Embedded Linux, CAN or ROS 2 during Sprint v1 without a separate Core decision.

Career / Internship remains bounded support. It may evaluate concrete opportunities and capture market feedback, but it may not create technical curricula or continuous high-volume application work without Core approval.

Personal Finance & Capital remains low-frequency bounded maintenance. It must not displace GPA/core coursework, Python, Algorithm or justified Career work.

Academic Operations & Evidence owns factual academic operations and course-evidence maintenance, not subject-matter teaching or strategic academic decisions.

---

## Qingdao Agri Data Competition Project

Status: **GO — Active — Bounded Short-Term Project / Phase 1 MVP Build**.

Core decision date: **2026-08-31**.

Target competition: `2026 青岛市农业农村领域数据驱动创新应用竞赛`.

Current authorized route:

- track: **赛道二 — 农业大数据挖掘分析**;
- working topic: **青岛蛋鸡行情波动风险提示系统**;
- fallback topic: **青岛蔬菜价格—上市量波动监测** if egg-price data becomes materially inadequate;
- submission deadline: **2026-09-30**.

Phase 0 exit decision: **GO**.

Evidence supporting GO:

- real Qingdao egg-price observations have been stored locally, read successfully with `pandas`, and plotted with `matplotlib`;
- the user correctly interpreted the first real time-series chart;
- official Qingdao weekly reports provide historical egg-price observations beyond a one-off July sample;
- official local reporting supports a real problem around cyclical egg-price volatility, producer market-warning needs and income-risk protection;
- MVP buildability has been demonstrated using current Python plus bounded just-in-time additions;
- one July sample point still requires source reconciliation, but this is a data-cleaning task rather than a project-feasibility blocker.

Phase 1 minimum output:

1. one reproducible historical dataset with cited sources;
2. Python loading / cleaning pipeline;
3. basic indicators such as latest value, week-to-week change, recent average and recent volatility;
4. one clear time-series chart;
5. one simple, explainable trend / risk rule;
6. README that separates observed facts from forecasts and states limitations.

Resource allocation through the competition window:

- the project receives bounded short-term delivery priority and may use Python learning time as direct application work;
- Python foundation is not abandoned; project-driven gaps should be learned just in time rather than opening a second curriculum;
- Algorithm remains active but receives no expansion of scope because of this competition;
- Embedded remains bounded exploration and receives no scope expansion during the competition delivery window;
- academic/GPA-sensitive obligations override competition polish or optional features;
- no deep-learning, mobile-app, generic smart-agriculture-platform or unrelated feature expansion is authorized unless a later evidence-based Core decision changes scope.

Review / stop triggers:

- Phase 1 MVP cannot be made reproducible from real data;
- project workload begins materially damaging academic obligations or the main capability line;
- the agricultural story requires fabricated evidence or unsupported claims;
- the project proposes a major track/topic change;
- MVP completion shows a clear case for Phase 2 competition polishing;
- submission / competition result creates meaningful new evidence.

Project workspace: `13_Projects/2026_Qingdao_Agri_Data_Competition/`.

The Project Specialist owns its `STATUS.md` and project files. Horizon Core owns cross-thread resource decisions and MASTER state.

---

## Embedded Exploration Sprint v1

Status: **Active — Bounded Exploration**.

Purpose: use one small project-first STM32 sprint to determine whether Embedded deserves a larger long-term role in Horizon.

Current platform decision:

- board: `NUCLEO-G071RB`;
- toolchain: current official `STM32CubeIDE` at setup time;
- Core startup artifact: `04_Embedded/README.md`;
- Specialist-owned state: `04_Embedded/STATUS.md`.

Sprint route:

1. **Phase 0 — Bring-up:** install / verify toolchain, connect ST-LINK, create/build/flash/debug a minimal project and control the onboard LED.
2. **Phase 1 — MCU interaction:** GPIO, button input, EXTI, timer, PWM and UART, patching embedded-C gaps only when the hardware task requires them.
3. **Phase 2 — First integrated project:** `STM32 Interactive Controller v1` with button input, interrupts, timer/PWM, UART, simple state-machine behavior, README, wiring / pin explanation, demo evidence and meaningful Git history.

Sprint exit review asks:

- is real hardware debugging genuinely engaging after friction appears?
- can the user explain the system rather than only reproduce tutorial steps?
- did Embedded materially disrupt Python / Algorithm or academic priorities?
- did the sprint produce a reproducible project artifact worth keeping in a future portfolio?

Possible exit decisions: Promote / Continue Bounded Exploration / Pause.

---

## Horizon Core Governance Transition

### Adopted merger

`VTC-20260829-01 — Merge Voyage Room and Main Control into Horizon Core` is adopted.

Reason:

- the separate top-level chats created recurring user-visible coordination cost;
- the user was repeatedly required to relay messages between Voyage and Control;
- a proposed Liaison / OUTBOX / INBOX system would add machinery around a split the user no longer wants;
- strategic independence can be preserved cognitively through Explore mode without preserving separate chats.

### Surviving top-level role

The existing Main Control chat becomes **Horizon Core / 核心舱**.

The former Voyage Room chat becomes historical / retired after handoff. Its function survives as Core Explore mode.

### Historical bridge

After handoff:

- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` — historical, frozen;
- `00_Project_Control/CONTROL_TO_VOYAGE.md` — final merger response then historical, frozen.

No future Core work should require the user to relay information between these two former roles.

### Liaison consequence

The proposed top-level `Horizon Liaison` / OUTBOX / INBOX architecture is withdrawn as unnecessary for Voyage ↔ Control communication.

Do not create a Specialist → Core message bus unless real post-merger evidence later shows a persistent problem.

---

## HZN-001 Skill State

`HZN-001 — horizon-context-sync v0.5` is the current **Adopted — Active** shared Horizon Skill.

v0.5 supersedes v0.4 for current operation and is aligned with Charter v4.0 / `THREAD_PROTOCOL.md` v2.0:

- roles simplified to `Horizon Core` + `Specialist Thread`;
- frozen Voyage–Control bridges are no longer read as live state;
- fresh authoritative state may be safely reused in the same conversation;
- Specialist threads read their own STATUS first and only load MASTER / strategic context when materially required;
- evidence, write-boundary and external-freshness protections remain active.

Adoption evidence:

- Trial 005 — clean Horizon Core migration/self-preflight;
- Trial 006 — real Algorithm Specialist invocation with repository-verified clean state, no artificial STATUS churn and no cross-thread write leakage;
- v0.4 historical trials remain preserved as prior evidence for the underlying context-sync method.

Adoption commit: `4d4ad680febc8194d735ad3874902ef0952686c5`.
Adoption-time Skill blob SHA: `c501100aef77dc488a98badddcb566c2ab55cf7e`.

Evidence limitation: GitHub does not expose chat-side read telemetry, so exact internal read sequences are not claimed as independently verified.

`HZN-001 v0.4` remains preserved as the first adopted historical baseline under `CTV-20260828-04`.

---

## HZN-002 Skill State

`HZN-002 — status-update v0.1` is **Candidate — Trial**.

Purpose:

- apply a meaningful-change gate before any STATUS / MASTER write;
- route updates to the correct single owner;
- fetch the latest target + SHA before writing;
- make the minimum evidence-justified patch;
- prevent plans, tiny exercises and communication-only events from becoming formal state churn;
- opportunistically migrate legacy governance terminology only when a meaningful update already touches the file.

Current artifact:

`00_Strategy/Voyage_Room/skills/status-update/SKILL.md`

Trial gate:

1. at least one real **No formal update** case that correctly prevents churn;
2. at least one real meaningful update that produces a minimal evidence-based patch;
3. no authority leakage or evidence inflation.

The Embedded Sprint activation is an additional real Core-state update governed by HZN-002: Core changes MASTER / Protocol while leaving the future Specialist-owned `04_Embedded/STATUS.md` untouched.

`HZN-003` through `HZN-005` remain frozen. HZN-002 trial authorization does not unlock them.

---

## First-Internship Readiness Framework

Before a serious application push, Core should look for approximately:

1. one presentable engineering project with clear README and explainable design/debugging/limitations;
2. practical C/C++ fluency;
3. verified practical Linux workflow evidence;
4. baseline algorithm/data-structure competence from the approved Algorithm route;
5. ability to explain projects, reproduce bugs, document work and communicate technical decisions;
6. a credible continuous availability window.

Current Career evidence: C++ readiness demonstrated; project evidence partial; Linux evidence missing; Algorithm Block 01 in progress; communication/documentation partial; internship availability unverified.

Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.

---

## Personal Finance & Capital Framework

Financial Freedom / Capital Formation remains a first-order long-horizon strategic pillar with deliberately bounded undergraduate execution.

Current objective: `Personal Finance Baseline v1` covering cash inflow/support, spending floor, discretionary/growth/irregular spending, liquid reserve, investable-money boundary, asset categories and lightweight monthly review.

Guardrails remain:

- no borrowed-money investing merely to accelerate returns;
- no speculative use of tuition, essential living money or emergency reserves;
- no guaranteed-return assumptions;
- no default high-frequency trading roadmap;
- no finance workload that materially displaces core academic/technical priorities;
- verify current tax/legal/regulated-product rules when material.

---

## Academic Operations & Evidence Framework

Current objective: `Year 2 Fall Academic Baseline v1`.

It should establish:

1. verified actual-semester course register rather than assuming the generic培养方案;
2. assessment methods and important deadlines when verified;
3. evidence baseline for textbooks, syllabi, lecture coverage, labs/projects and grades;
4. lightweight Notion `University Course Evidence` maintenance workflow;
5. semester-end archival supporting later APS / prerequisite / MSc review.

Notion may be an operational workspace; GitHub remains formal Horizon governance/state.

---

## Algorithm Learning Architecture

Algorithm proceeds one block at a time with verifiable evidence.

| Block | Scope |
| --- | --- |
| Block 01 — Foundation | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking |
| Block 02 — Linear Structures | Linked lists, stacks, queues, deques, hash tables |
| Block 03 — Search | Recursion, enumeration, DFS, BFS, backtracking, basic pruning |
| Block 04 — Trees & Priority Structures | Binary trees, traversals, BST concepts, heap / `priority_queue`, disjoint set union |
| Block 05 — Graphs | Representation, DFS/BFS, connectivity, topological sort, shortest paths, minimum spanning trees |
| Block 06 — Greedy | Sorting-based greedy, intervals, proof intuition, common patterns |
| Block 07 — Dynamic Programming | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP |
| Block 08 — Toolbox | Bits, basic number theory, GCD, primes, fast power, monotonic stack/queue, Trie, KMP, recurring tools |
| Advanced — On Demand | Fenwick tree, segment tree, harder graphs, advanced DP/string algorithms when evidence justifies them |

External problem sets support the active topic and must not become a second roadmap.

---

## Competition Strategy

| Competition | Position | Current Strategy |
| --- | --- | --- |
| Mathematics competition | Primary | Main competition focus |
| Qingdao Agri Data Competition | Active bounded project | GO; build a real Python/data MVP for Track 2 before 2026-09-30; no unrelated AI expansion |
| Physics theory competition | Secondary / interest validation | Secondary participation and evidence of sustained interest |
| Lanqiao Cup campus selection | Baseline attempt | No dedicated preparation; only low-cost topic-aligned exposure until later review gates |

Review systematic Lanqiao past papers after Algorithm Block 03; review full simulations only after substantial Block 07 completion and a separate upgrade decision.

---

## Strategic Handoff Backlog from Retired Voyage Room

The following unresolved strategic items are now **Horizon Core's own backlog**; they no longer require Voyage → Control relay:

1. `VTC-20260828-03` — Germany–Japan Strategic Gate / preserve both candidates without parallel high-intensity language execution.
2. `VTC-20260828-02` — Japan as a high-potential 2029 MSc strategic candidate; Science Tokyo IGP(C) benchmark; do not activate Japanese yet.
3. `VTC-20260825-01` — 2029 MSc Application Exams & Gates Master Map.
4. `VTC-20260822-04` — broader affordable robotics/control/intelligent-systems MSc target-pool framework under the current all-in affordability band.
5. `VTC-20260822-01` — TUM RCI control-engineering prerequisite evidence audit.
6. `VTC-20260821-04` — durable strategic-input / life-route ledger proposal.

These remain pending until Horizon Core reviews them one at a time. They are not silently adopted by the governance merger.

---

## Active Strategic Constraints

- Overseas MSc country pool remains open.
- Current working affordability band is approximately RMB 100,000/year realistic all-in cost, not a precise hard ceiling.
- Zero tuition is not mandatory.
- High-cost self-funded routes are non-default.
- TUM remains financially conditional under currently known conditions unless reliable funding changes the net cost.
- Astronomy remains outside the current strategic route unless explicitly reopened; Physics remains a separate open academic interest.

Mutable external facts must be reverified when used for a high-impact decision.

---

## External Systems

### Horizon Opportunity Radar

Status: Active  
Source: `cherrynectar-rrr/Horizon_Opportunity_Radar`  
Role: external opportunity intake  
Cadence: GitHub Actions every 6 hours  
Decision owner: Horizon Core

Radar collects factual opportunities only. Horizon Core owns `APPLY / WATCH / SKIP / URGENT` decisions.

---

## Cross-Thread Blockers

None reported.

## Decisions Needed

The Qingdao Agri Data Competition Phase 0 exit gate is resolved: **GO**. Phase 1 MVP build is authorized under the bounded short-term resource rules above.

No governance decision remains for the Voyage/Main Control merger; it is adopted through Charter v4.0 and THREAD_PROTOCOL v2.0.

Embedded Sprint v1 is authorized. The next Embedded decision is the Sprint exit review after real project evidence, not an immediate promotion to a full line.

The strategic handoff backlog above remains to be reviewed one item at a time.

## Next Core Review

Review on meaningful changes including:

- Qingdao Agri Data Competition Phase 1 MVP completion, material project blocker, submission decision or competition result;
- Student Manager V2 completion;
- a material Algorithm milestone;
- Embedded Phase 0 bring-up completion or a material hardware/toolchain blocker;
- Embedded `STM32 Interactive Controller v1` completion and Sprint exit review;
- first verified Linux milestone;
- concrete high-fit internship opportunity or seasonal application decision;
- Personal Finance Baseline v1 completion;
- Year 2 Fall Academic Baseline v1 completion or a major academic workload issue;
- competition result;
- `Needs Core Decision: Yes` from a specialist;
- one of the inherited strategic backlog items being ready for decision;
- a material HZN-001 failure / authority ambiguity;
- HZN-002 producing a clean Specialist real-write case or exposing material friction;
- a material failure showing the Horizon Core merger created strategic tunnel vision or new communication friction.

This file is a Core summary, not a daily journal.