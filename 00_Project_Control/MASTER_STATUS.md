# Project Horizon — Master Status

Last Updated: 2026-08-29
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

1. Python — main technical line
2. Algorithm — active structured line
3. Linux — support line
4. C++ — support for algorithm implementation
5. Career / Internship — Active — Bounded Support; event-driven
6. Personal Finance & Capital — Active — Bounded Support / Maintenance; low-frequency standing support
7. Academic Operations & Evidence — Active — Bounded Support / Maintenance; semester/event-driven

The Horizon Core merger changes governance and communication overhead only. It does **not** change current execution priorities or the one-main-technical-line principle.

---

## Track Overview

| Track | Role | Current State | Next Gate |
| --- | --- | --- | --- |
| [Python](../01_Python/STATUS.md) | Main line | Foundation complete through Week03; OOP is current | Student Manager V2 with object-oriented structure |
| [Algorithm](../05_Algorithm/STATUS.md) | Active structured line | Block 01 active; complexity, arrays, strings and sorting foundations complete; binary search is current | First verifiable binary-search milestone |
| [Linux](../03_Linux/STATUS.md) | Support | No verified standalone Linux milestone yet | One bounded practical workflow milestone when a real programming need or capacity permits |
| [C++](../02_CPP/STATUS.md) | Support | Standalone preheat complete; Algorithm Readiness Gate passed | Support Algorithm and patch only real C++/STL gaps |
| [Career / Internship](../09_Career/STATUS.md) | Bounded support | Internship Readiness Baseline v1 complete; on-demand opportunity review active | New readiness evidence, high-fit opportunity, or seasonal application decision |
| [Personal Finance & Capital](../10_Finance/STATUS.md) | Bounded support / maintenance | Personal Finance Baseline v1 in progress | Complete Personal Finance Baseline v1 |
| [Academic Operations & Evidence](../11_Academic/STATUS.md) | Bounded support / maintenance | Year 2 Fall Academic Baseline v1 in progress | Complete Year 2 Fall Academic Baseline v1 |

---

## Current Main-Line Decision

Python remains the Horizon main technical learning line. The immediate milestone is OOP through Student Manager V2.

Algorithm remains active as a structured line and must not displace Python without a separate Core decision. Sorting foundation is complete; binary search is the current topic.

Linux and C++ remain support lines. C++ standalone preheat is complete; Linux should be learned through real development needs rather than through a broad standalone curriculum.

Career / Internship remains bounded support. It may evaluate concrete opportunities and capture market feedback, but it may not create technical curricula or continuous high-volume application work without Core approval.

Personal Finance & Capital remains low-frequency bounded maintenance. It must not displace GPA/core coursework, Python, Algorithm or justified Career work.

Academic Operations & Evidence owns factual academic operations and course-evidence maintenance, not subject-matter teaching or strategic academic decisions.

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

`HZN-001 — horizon-context-sync v0.4` remains the first adopted shared Horizon Skill, version-pinned to its adoption-time artifact.

Because v0.4 encodes the former three-role model, Charter v4.0 and THREAD_PROTOCOL v2.0 override any stale role labels.

A future candidate HZN-001 v0.5 may simplify the role model to:

- Horizon Core;
- Specialist Thread.

v0.5 must be reviewed normally and must not silently replace adopted v0.4.

HZN-002 through HZN-005 remain frozen unless separately authorized.

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

No governance decision remains for the Voyage/Main Control merger; it is adopted through Charter v4.0 and THREAD_PROTOCOL v2.0.

The strategic handoff backlog above remains to be reviewed one item at a time.

## Next Core Review

Review on meaningful changes including:

- Student Manager V2 completion;
- a material Algorithm milestone;
- first verified Linux milestone;
- concrete high-fit internship opportunity or seasonal application decision;
- Personal Finance Baseline v1 completion;
- Year 2 Fall Academic Baseline v1 completion or a major academic workload issue;
- competition result;
- `Needs Core Decision: Yes` from a specialist;
- one of the inherited strategic backlog items being ready for decision;
- a material failure showing the Horizon Core merger created strategic tunnel vision or new communication friction.

This file is a Core summary, not a daily journal.
