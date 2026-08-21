# Project Horizon — Master Status

Last Updated: 2026-08-21
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
2. Algorithm — active structured line
3. Linux — support line
4. C++ — support for algorithm implementation
5. Career / Internship — Preheat branch; on-demand only, no continuous execution allocation

## Track Overview

| Track | Role | Current State | Next Gate |
| --- | --- | --- | --- |
| [Python](../01_Python/STATUS.md) | Main line | Python foundation completed through Week03; OOP is the current milestone | Build Student Manager V2 with object-oriented structure |
| [Algorithm](../05_Algorithm/STATUS.md) | Active structured line | Block 01 active; time/space complexity, arrays and strings completed; sorting is current | Complete the sorting milestone, then continue Block 01 one topic at a time |
| [Linux](../03_Linux/STATUS.md) | Support line | Active as needed; no verified Linux milestone is recorded yet | Complete one bounded practical Linux workflow milestone after Student Manager V2, or earlier only if a real programming need provides the entry point |
| [C++](../02_CPP/STATUS.md) | Support | Standalone preheat complete; Algorithm Readiness Gate passed | Use C++ reliably in algorithm work and fill only real language/STL gaps as they appear |
| [Career / Internship](../09_Career/STATUS.md) | Preheat | Dedicated internship thread formally established; no continuous application push is active | Produce Internship Readiness Baseline v1, then remain low-intensity until an activation trigger |

## Current Main-Line Decision

Python remains the Horizon main learning line. The immediate milestone is object-oriented programming through Student Manager V2.

Algorithm study is active as a structured line because the C++ readiness gate has been passed with repository evidence. It is currently in Block 01 — Foundation. Time complexity, space complexity, arrays and strings have verifiable completion evidence; sorting is the current topic. Algorithm work should continue one topic at a time and must not displace the Python main line without a separate Project Control decision.

Linux remains a support line learned through real development needs.

C++ standalone preheat is complete. C++ now serves algorithm implementation and future system work rather than remaining an independent preparation track.

Career / Internship now has a dedicated Preheat thread in `09_Career/STATUS.md`. This creates a clear place for internship readiness, concrete opportunity evaluation, resume/portfolio preparation, application-window planning and interview feedback, but it does not create a new technical curriculum or a continuous high-intensity execution line.

## First-Internship Readiness Framework

Project Control adopts `VTC-20260820-02 — Internship-Aligned Capability Planning Review` as a **bounded planning framework**, not as a new execution line.

The purpose is to make the existing technical lines compound toward a future first serious internship while preserving GPA, competition priorities, execution depth and long-term robotics / embedded / systems / AI-deployment optionality.

### Application Ready Gate

Before a serious first-internship application push, Project Control should look for approximately the following evidence:

1. At least one presentable engineering project that runs, has a clear README, and can be explained in terms of design choices, debugging and limitations.
2. C/C++ fluency sufficient for small modules and debugging without syntax or basic STL becoming the primary blocker.
3. Verified practical Linux workflow evidence covering filesystem/CLI use, Git/tooling, compile/run/debug, environment/package use and basic shell work in a real task.
4. Basic algorithm/data-structure competence from the approved Algorithm route, without opening a second high-volume interview-grinding roadmap.
5. Ability to explain projects, reproduce bugs, document work and communicate technical decisions.
6. A credible continuous availability window for the target internship period.

This is an **Application Ready** gate, not a professional-engineer readiness claim.

### Resource Decisions

- **Python:** remains the main line through Student Manager V2. Internship planning does not replace the current OOP milestone.
- **Algorithm:** continues the approved Block 01 → Block 08 route one topic at a time and remains the source of baseline screening readiness.
- **C++:** remains implementation support. Do not restart a broad standalone C++ curriculum without evidence of a real gap.
- **Linux:** is the clearest current support-evidence gap. The next explicit support milestone should be one bounded practical workflow milestone, preferably after Student Manager V2 unless a real Python/C++ task creates an earlier natural need. It must be integrated with real programming work rather than become an independent curriculum.
- **Embedded:** remains dormant. Reconsider only after the current main-line milestone is completed or handed off, execution capacity is not under acute academic/competition pressure, and suitable hardware access or a concrete project/opportunity can justify one bounded hardware-software output.
- **Career / Internship:** is now formally established in **Preheat** state. Its first bounded output is Internship Readiness Baseline v1. After that, it remains low-intensity / on-demand until early-2027 winter-break availability is known, the Application Ready Gate is substantially satisfied, a concrete high-fit opportunity appears, or Project Control explicitly authorizes a seasonal application window. Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.
- **AI / Embodied AI:** remain strategic options and are not first-internship prerequisites.

### Explicit Non-Goals

This framework does **not** authorize:

- opening multiple new technical lines at once;
- ROS2 + STM32 + CUDA + OpenCV + advanced C++ in parallel;
- a second LeetCode/interview-grinding roadmap;
- treating internship job descriptions as a personal curriculum;
- optimizing for employer prestige over real technical content;
- allowing internship preparation to displace GPA/core coursework or the current mathematics competition priority without a separate Project Control decision.

### Review Triggers

Review the framework when any of the following occurs:

- Student Manager V2 is completed;
- the first verified Linux milestone is completed;
- a presentable engineering project is available;
- a major Algorithm block milestone is completed;
- Internship Readiness Baseline v1 identifies a gap that requires a control-level resource decision;
- early-2027 winter-break availability is confirmed;
- a concrete high-fit internship opportunity appears;
- a relevant specialist thread reports `Needs Master Decision: Yes`.

Formal response: `CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework` in `CONTROL_TO_VOYAGE.md`.

## Algorithm Activation Protocol

Algorithm activation is controlled by a small C++ readiness gate rather than by completing a broad C++ curriculum.

The C++ / joint preparation thread should transition the user to the Algorithm thread when the following are all demonstrated at a practical level:

1. Comfortable use of `std::string` and `std::vector`.
2. Understanding of references, including ordinary use of forms such as `const std::vector<int>&` in function parameters.
3. Ability to use `std::sort`, including a simple custom comparator.
4. Practical use of `vector`, `stack`, `queue`, and `pair`, with basic awareness of `set` and `map`.
5. Ability to solve a simple array or string task without being blocked by C++ syntax or basic STL usage.

Validation should be a small **Algorithm Readiness Test**, not a long C++ examination.

**Gate result: PASS — 2026-08-18.** The C++ specialist status records the gate as passed, and `02_CPP/Week02/readiness_test.cpp` provides direct implementation evidence. The Algorithm thread is therefore authorized to activate and begin Block 01.

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

## Algorithm Practice Integration

External problem sets are support material for the Algorithm thread, not a second independent roadmap.

- Practice should follow the currently completed or in-progress topic. Do not jump ahead merely because a platform labels a problem as popular or important.
- A small number of selected problems is preferred over large undirected volume. The aim is transfer, implementation fluency and error analysis rather than a raw solved-count metric.
- LeetCode / AcWing / Luogu may be used when a problem directly reinforces the active topic; the Algorithm thread should choose the smallest useful set.
- Lanqiao Cup problems may be used opportunistically when they only require material already learned. This counts as topic practice, not dedicated Lanqiao preparation.
- After Block 03 is complete, Project Control should review whether systematic Lanqiao past-paper practice is justified.
- After Block 07 is substantially complete, Project Control may review whether full 4-hour Lanqiao simulations are justified if the competition target has been upgraded.
- Until Project Control explicitly changes the competition strategy, Lanqiao remains a baseline attempt and must not create a parallel high-intensity preparation line.

## Competition Strategy

| Competition | Position | Current Strategy |
| --- | --- | --- |
| Mathematics competition | Primary | Main competition focus |
| Physics theory competition | Secondary / interest validation | Participate as a secondary direction and use it to test sustained interest |
| Lanqiao Cup campus selection | Baseline attempt | Sit the campus selection without dedicated preparation; allow only low-cost topic-aligned problem exposure until a later review gate |

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
- an Algorithm block milestone;
- completion of Algorithm Block 03 or substantial completion of Block 07, for Lanqiao review gates;
- completion of Student Manager V2, first verified Linux milestone, a presentable engineering project, or Internship Readiness Baseline v1 for internship-readiness review;
- confirmation of early-2027 winter-break availability or discovery of a concrete high-fit internship opportunity;
- a competition result;
- `Needs Master Decision: Yes`;
- a Voyage Room recommendation that requires adoption, rejection, deferral or an experiment.

This file is a control summary, not a daily journal.
