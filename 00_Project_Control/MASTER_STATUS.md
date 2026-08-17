# Project Horizon — Master Status

Last Updated: 2026-08-18
Status: Active
Authority: Main control thread only

## Current Operating Model

Project Horizon uses GitHub as the shared source of truth and now operates through three layers: the Voyage Room provides strategic exploration and recommendations; Project Control makes integrated judgments and allocates resources; specialist threads execute concrete learning and projects.

See [THREAD_PROTOCOL.md](./THREAD_PROTOCOL.md) for the read/write and update rules.

## Strategic Layer

### Voyage Room / 远航室

| Field | Value |
| --- | --- |
| Status | Active |
| Location | [`00_Strategy/Voyage_Room/`](../00_Strategy/Voyage_Room/) |
| Layer | Strategic |
| Role | Explore long-term direction, analyze scenarios and trade-offs, and propose recommendations |
| Decision Authority | Advisory only |
| Decision Owner | Main control thread |
| Voyage → Control | [`VOYAGE_TO_CONTROL.md`](../00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md) |
| Control → Voyage | [`CONTROL_TO_VOYAGE.md`](./CONTROL_TO_VOYAGE.md) |

The Voyage Room is not an execution thread and is not parallel to Python, C++, Linux, Algorithm or other technical domains. It may challenge assumptions and surface strategic options, but it cannot activate a route, change priorities, allocate time, or direct specialist work on its own.

Project Control combines Voyage Room recommendations with current evidence, capacity and constraints before recording a decision or changing resource allocation.

## Current Priority Order

1. Python — main line
2. Linux — support line
3. C++ — preheat line preparing for algorithms
4. Algorithm — not fully activated

## Track Overview

| Track | Role | Current State | Next Gate |
| --- | --- | --- | --- |
| [Python](../01_Python/STATUS.md) | Main line | Python foundation completed through Week03; OOP is the current milestone | Build Student Manager V2 with object-oriented structure |
| [Linux](../03_Linux/STATUS.md) | Support line | Active as needed; no verified Linux milestone is recorded yet | Build practical command-line and development-environment skills that support current projects |
| [C++](../02_CPP/STATUS.md) | Preheat | Week01 completed; continuing the C-to-C++ transition | Pass the Algorithm Readiness Gate defined below |
| [Algorithm](../05_Algorithm/STATUS.md) | Pending activation | Not fully activated | Activate structured algorithm study after the C++ readiness gate |

## Current Main-Line Decision

Python remains the main learning line. The immediate milestone is object-oriented programming through Student Manager V2.

Linux is a support line and should be learned through real development needs rather than allowed to displace the Python main line.

C++ remains in preheat. Its purpose is to establish enough language and STL fluency to make algorithm study productive.

Algorithm study is not yet a full independent line. It should activate after the C++ readiness gate is met.

## Algorithm Activation Protocol

Algorithm activation is controlled by a small C++ readiness gate rather than by completing a broad C++ curriculum.

The C++ / joint preparation thread should transition the user to the Algorithm thread when the following are all demonstrated at a practical level:

1. Comfortable use of `std::string` and `std::vector`.
2. Understanding of references, including ordinary use of forms such as `const std::vector<int>&` in function parameters.
3. Ability to use `std::sort`, including a simple custom comparator.
4. Practical use of `vector`, `stack`, `queue`, and `pair`, with basic awareness of `set` and `map`.
5. Ability to solve a simple array or string task without being blocked by C++ syntax or basic STL usage.

Validation should be a small **Algorithm Readiness Test**, not a long C++ examination. Once this gate passes:

- the Algorithm specialist thread may change its own status to Active;
- C++ should shift from standalone preheat toward support for algorithm implementation;
- the Algorithm thread should begin Block 01 below;
- Python remains the Horizon main line unless Project Control later makes a separate priority decision.

## Algorithm Learning Architecture

The Algorithm thread should teach one block at a time. Each block should produce verifiable evidence such as code, solved problems, a small implementation task, README notes, or commits before moving on.

| Block | Scope |
| --- | --- |
| Block 01 — Foundation | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking |
| Block 02 — Linear Structures | Linked lists, stacks, queues, deques, hash tables |
| Block 03 — Search | Recursion, enumeration, DFS, BFS, backtracking, basic pruning |
| Block 04 — Trees & Priority Structures | Binary trees, traversals, BST concepts, heap / `priority_queue`, disjoint set union |
| Block 05 — Graphs | Graph representation, DFS/BFS, connectivity, topological sort, shortest paths, minimum spanning trees |
| Block 06 — Greedy | Sorting-based greedy methods, intervals, proof intuition, common greedy patterns |
| Block 07 — Dynamic Programming | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP |
| Block 08 — Toolbox | Bit operations, basic number theory, GCD, primes, fast power, monotonic stack/queue, Trie, KMP and other recurring tools |
| Advanced — On Demand | Fenwick tree, segment tree, harder graph algorithms, advanced DP/string algorithms when evidence or competition needs justify them |

School `数据结构与算法` coursework should feed this same route rather than creating a second parallel curriculum. Horizon should add implementation depth, problem-solving practice and evidence around school content instead of re-teaching the same material independently.

## Competition Strategy

| Competition | Position | Current Strategy |
| --- | --- | --- |
| Mathematics competition | Primary | Main competition focus |
| Physics theory competition | Secondary / interest validation | Participate as a secondary direction and use it to test sustained interest |
| Lanqiao Cup campus selection | Baseline attempt | Sit the campus selection without dedicated preparation; record the result when available |

## External Systems

### Horizon Opportunity Radar

| Field | Value |
| --- | --- |
| Status | Active |
| Source | [`cherrynectar-rrr/Horizon_Opportunity_Radar`](https://github.com/cherrynectar-rrr/Horizon_Opportunity_Radar) |
| Role | External opportunity intake / 外部机会入口 |
| Cadence | GitHub Actions every 6 hours |
| Decision Owner | Main control thread |

When evaluating competitions, research, exchanges, scholarships, summer research, internships, or similar opportunities, the main control thread may read the Radar repository's `data/opportunities.json` and `data/opportunities.md` as needed.

Opportunity Radar is responsible only for collecting, deduplicating, structuring, and presenting factual opportunity data. It cannot change the Project Horizon route or make the user's final `APPLY`, `WATCH`, `SKIP`, or `URGENT` decision.

## Cross-Thread Blockers

None reported.

## Decisions Needed

None currently.

## Next Master Review

Review this file when any thread reports:

- a completed milestone;
- a new or resolved blocker;
- a route or priority change;
- readiness to activate the algorithm line;
- a competition result;
- `Needs Master Decision: Yes`;
- a Voyage Room recommendation that requires adoption, rejection, deferral or an experiment.

This file is a control summary, not a daily journal.
