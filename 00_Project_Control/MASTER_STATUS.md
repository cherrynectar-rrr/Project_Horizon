# Project Horizon — Master Status

Last Updated: 2026-08-24
Status: Active
Authority: Main control thread only

## Current Operating Model

Project Horizon uses GitHub as the shared source of truth and operates through three layers: Voyage Room explores; Project Control decides and coordinates; specialist threads execute concrete work and produce evidence.

See [THREAD_PROTOCOL.md](./THREAD_PROTOCOL.md) for read/write and update rules.

## Strategic Layer

### Voyage Room / 远航室

| Field | Value |
| --- | --- |
| Status | Active |
| Location | [`00_Strategy/Voyage_Room/`](../00_Strategy/Voyage_Room/) |
| Layer | Strategic |
| Role | Explore long-term direction, scenarios, trade-offs and strategic recommendations |
| Decision Authority | Advisory only |
| Decision Owner | Main control thread |
| Voyage → Control | [`VOYAGE_TO_CONTROL.md`](../00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md) |
| Control → Voyage | [`CONTROL_TO_VOYAGE.md`](./CONTROL_TO_VOYAGE.md) |

Voyage Room may challenge assumptions and surface options, but it cannot activate routes, allocate resources or change execution priority.

## Current Priority / Capacity Structure

1. Python — main technical line
2. Algorithm — active structured line
3. Linux — support line
4. C++ — support for algorithm implementation
5. Career / Internship — Active — Bounded Support; event-driven
6. Personal Finance & Capital — Active — Bounded Support / Maintenance; low-frequency standing support

The addition of Finance does **not** change the one-main-technical-line principle. Strategic importance and current execution intensity are not the same thing.

## Track Overview

| Track | Role | Current State | Next Gate |
| --- | --- | --- | --- |
| [Python](../01_Python/STATUS.md) | Main line | Foundation complete through Week03; OOP is current | Student Manager V2 with object-oriented structure |
| [Algorithm](../05_Algorithm/STATUS.md) | Active structured line | Block 01 active; complexity, arrays, strings and sorting foundations complete; binary search is current | First verifiable binary-search milestone |
| [Linux](../03_Linux/STATUS.md) | Support | No verified standalone Linux milestone yet | One bounded practical workflow milestone when a real programming need or capacity permits |
| [C++](../02_CPP/STATUS.md) | Support | Standalone preheat complete; Algorithm Readiness Gate passed | Continue supporting Algorithm and patch only real C++/STL gaps |
| [Career / Internship](../09_Career/STATUS.md) | Bounded support | Active; Internship Readiness Baseline v1 complete; on-demand opportunity review active | New readiness evidence, concrete high-fit opportunity, or seasonal application decision |
| [Personal Finance & Capital](../10_Finance/STATUS.md) | Bounded support / maintenance | Activated 2026-08-24; first baseline in progress | Personal Finance Baseline v1 |

## Current Main-Line Decision

Python remains the Horizon main technical learning line. The immediate milestone is OOP through Student Manager V2.

Algorithm remains active as a structured line and must not displace Python without a separate Project Control decision. Sorting foundation is complete; binary search is now the active topic.

Linux and C++ remain support lines. C++ standalone preheat is complete; Linux should be learned through real development needs rather than as a broad standalone curriculum.

Career / Internship remains Active — Bounded Support. Its readiness baseline is complete; it may evaluate concrete opportunities and capture market feedback, but it may not create technical curricula or a continuous high-volume application workload without Project Control approval.

Personal Finance & Capital is now Active — Bounded Support / Maintenance. It exists to handle recurring operational finance work at low time cost and must not displace GPA/core coursework, Python, Algorithm or approved Career work.

## First-Internship Readiness Framework

The bounded First-Internship Readiness Framework remains active.

### Application Ready Gate

Before a serious first-internship application push, look for approximately:

1. at least one presentable engineering project with a clear README and explainable design/debugging/limitations;
2. C/C++ fluency sufficient for small modules and debugging without syntax/STL being the main blocker;
3. verified practical Linux workflow evidence;
4. basic algorithm/data-structure competence from the approved Algorithm route;
5. ability to explain projects, reproduce bugs, document work and communicate technical decisions;
6. a credible continuous availability window.

Career's Baseline v1 currently records: C++ readiness demonstrated; project evidence partial; Linux evidence missing; Algorithm Block 01 in progress; communication/documentation partial; internship availability unverified.

### Career Opportunity Review Workflow

For concrete opportunities, Career uses:

1. Role Reality Check
2. Verified User Fit
3. Lawful public-source Company & Team Due Diligence
4. Risk / Value Verdict
5. Application / Interview Feedback Loop

Standard verdicts: `PRIORITY APPLY / APPLY / WATCH / SKIP`.

Local application gaps may be handled by Career. Technical capability gaps return to Project Control. Structural mismatches are classified as structural rather than converted into technical study tasks.

Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.

## Personal Finance & Capital Framework

Project Control adopts Financial Freedom / Capital Formation as a **first-order long-horizon strategic pillar**, while keeping undergraduate execution deliberately bounded.

### Current Finance Objective

`Personal Finance Baseline v1` should establish:

- recurring cash inflow / support;
- realistic essential spending floor;
- discretionary, growth and irregular spending categories;
- liquid reserve / safety-buffer target;
- separation between money that must remain liquid and money that is genuinely investable;
- current asset categories at a non-sensitive summary level;
- a lightweight monthly review process.

### Execution Ceiling

Default Finance workload:

- one initial baseline session;
- one short monthly review;
- event-driven work only when income, expenses, asset allocation, study-abroad cost, internship salary, tax residency, currency exposure or major investment decisions materially change.

No standing market-watching quota is authorized.

### Finance Guardrails

- no borrowed-money investing merely to accelerate returns;
- no speculative use of tuition, essential living money or emergency reserves;
- no guaranteed-return assumptions;
- no high-frequency trading roadmap by default;
- no financial work that materially displaces current academic / technical priorities without Project Control review;
- no passwords, authentication codes, full account numbers or other sensitive credentials stored in GitHub;
- material tax/legal/regulated-product questions must be reverified against then-current authoritative sources.

Voyage Room continues to own the strategic role of wealth, country/career wealth-formation comparisons and money-versus-life-quality trade-offs. Finance owns approved operational execution only.

## Algorithm Learning Architecture

The Algorithm thread proceeds one block at a time with verifiable evidence before moving on.

| Block | Scope |
| --- | --- |
| Block 01 — Foundation | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking |
| Block 02 — Linear Structures | Linked lists, stacks, queues, deques, hash tables |
| Block 03 — Search | Recursion, enumeration, DFS, BFS, backtracking, basic pruning |
| Block 04 — Trees & Priority Structures | Binary trees, traversals, BST concepts, heap / `priority_queue`, disjoint set union |
| Block 05 — Graphs | Graph representation, DFS/BFS, connectivity, topological sort, shortest paths, minimum spanning trees |
| Block 06 — Greedy | Sorting-based greedy, intervals, proof intuition, common patterns |
| Block 07 — Dynamic Programming | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP |
| Block 08 — Toolbox | Bits, basic number theory, GCD, primes, fast power, monotonic stack/queue, Trie, KMP, recurring tools |
| Advanced — On Demand | Fenwick tree, segment tree, harder graph algorithms, advanced DP/string algorithms when evidence justifies them |

External problem sets support the current Algorithm topic and must not become a second roadmap. Prefer a small number of selected problems over raw volume. Lanqiao remains a baseline attempt unless Project Control later upgrades it.

## Competition Strategy

| Competition | Position | Current Strategy |
| --- | --- | --- |
| Mathematics competition | Primary | Main competition focus |
| Physics theory competition | Secondary / interest validation | Use as secondary participation and evidence of sustained interest |
| Lanqiao Cup campus selection | Baseline attempt | No dedicated preparation; only low-cost topic-aligned exposure until later review gates |

Review systematic Lanqiao past-paper practice after Algorithm Block 03; review full simulations only after substantial Block 07 completion and a separate competition upgrade decision.

## External Systems

### Horizon Opportunity Radar

| Field | Value |
| --- | --- |
| Status | Active |
| Source | [`cherrynectar-rrr/Horizon_Opportunity_Radar`](https://github.com/cherrynectar-rrr/Horizon_Opportunity_Radar) |
| Role | External opportunity intake |
| Cadence | GitHub Actions every 6 hours |
| Decision Owner | Main control thread |

Radar collects factual opportunities only. Project Control owns `APPLY / WATCH / SKIP / URGENT` decisions.

## Cross-Thread Blockers

None reported.

## Decisions Needed

The latest Finance activation request has been resolved by Project Control. Other Voyage Room transmissions dated 2026-08-21 through 2026-08-22 may still require separate acknowledgement or decision; they should be handled individually rather than silently folded into execution state.

## Next Master Review

Review on meaningful changes including:

- Student Manager V2 completion;
- an Algorithm block/topic milestone that materially changes state;
- first verified Linux milestone;
- concrete high-fit internship opportunity or seasonal application decision;
- first 3–5 Career opportunity reviews producing repeated market evidence;
- Personal Finance Baseline v1 completion;
- a material financial change or finance issue requiring cross-thread resources;
- a competition result;
- `Needs Master Decision: Yes`;
- a Voyage Room recommendation requiring adoption, rejection, deferral or an experiment.

This file is a control summary, not a daily journal.
