# Algorithm Status

Last Updated: 2026-08-29
Status: Active

## Current Goal

Block 01 — Foundation.

## Current Stage

Structured algorithm study is active. Work proceeds one block at a time using the route approved in `00_Project_Control/MASTER_STATUS.md`.

Block 01 scope:

- time complexity;
- space complexity;
- arrays;
- strings;
- sorting;
- binary search;
- two pointers;
- prefix sums;
- basic algorithmic thinking.

Time-complexity, space-complexity, arrays, strings, sorting, binary-search, and two-pointers foundations are complete; the current topic is prefix sums.

The existing Block 01–Block 08 route is now presented through a maintainable course layer in `05_Algorithm/README.md`; this does not create a second algorithm roadmap.

## Completed

- C++ Algorithm Readiness Gate satisfied on 2026-08-18; the prerequisite for Algorithm activation is complete.
- Time-complexity foundation completed on 2026-08-19: practical reasoning for `O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, and `O(n^2)` with runnable code and concise README notes.
- Space-complexity foundation completed on 2026-08-19: distinguished total storage from auxiliary space, recognized pass-by-value copies versus `const` references, and produced runnable code and README notes.
- Arrays foundation completed on 2026-08-19: practiced indexed access and modification, linear search, insertion/deletion movement costs, and in-place reversal with `O(1)` auxiliary space.
- Strings foundation completed on 2026-08-19: practiced indexed character access, full traversal, character counting, in-place reversal, and palindrome checking with correct time/auxiliary-space reasoning.
- Sorting foundation completed on 2026-08-21: implemented selection sort from first principles using minimum-index search, reasoned about `O(n^2)` best/worst time, `O(n)` swaps, and `O(1)` auxiliary space, with runnable code and concise README notes.
- Binary-search foundation completed on 2026-08-29: implemented iterative binary search on an ascending array, handled successful and unsuccessful lookup, and explained best-case `O(1)`, worst-case `O(log n)`, and `O(1)` auxiliary space.
- Two-pointers foundation completed on 2026-08-29: implemented two-sum search on an ascending array using left/right pointers, correctly moved pointers from the comparison with `target`, handled found/not-found cases, and reasoned about worst-case `O(n)` time and `O(1)` auxiliary space.
- Algorithm course homepage established on 2026-08-29: `05_Algorithm/README.md` now maps the approved Block 01–Block 08 route into a maintainable first-study / review / beginner-teaching course format, standardizes topic structure, and defines the progressive-hint protocol for external example problems without creating a second roadmap.

## In Progress

- Block 01 — Foundation
- Current topic: prefix sums

## Next Milestone

Produce the first verifiable prefix-sums milestone through a small runnable exercise, correct complexity reasoning, concise README notes, and a meaningful Git commit.

## Evidence

- `00_Project_Control/MASTER_STATUS.md` — Algorithm activation approved; Block 01–Block 08 structure defined.
- `05_Algorithm/README.md` — maintainable Algorithm course homepage and lesson/problem-coaching conventions.
- Commit `1745ce9a3108807065e472525104e01409050765` — `algorithm: establish course homepage`.
- `02_CPP/STATUS.md` — Algorithm Readiness Gate recorded as passed.
- `02_CPP/Week02/readiness_test.cpp` — direct readiness evidence.
- `05_Algorithm/Block01/01_time_complexity/main.cpp`
- `05_Algorithm/Block01/01_time_complexity/README.md`
- Commit `b3dbe93197cdfe830e6c69482fb542a77211f833` — `algorithm: add time complexity foundation`.
- `05_Algorithm/Block01/02_space_complexity/main.cpp`
- `05_Algorithm/Block01/02_space_complexity/README.md`
- Commit `80c556e487221df71861dc7182a76fdea62b4007` — `algorithm: add space complexity foundation`.
- `05_Algorithm/Block01/03_arrays/main.cpp`
- `05_Algorithm/Block01/03_arrays/README.md`
- Commit `7ebd1a8af2ac4c2b0c0cf579f5fd96edff27491c` — `algorithm: add arrays foundation`.
- `05_Algorithm/Block01/04_strings/main.cpp`
- `05_Algorithm/Block01/04_strings/README.md`
- Commit `74dd4f60b3aab20e6639449c8306f7fdf89314fa` — `algorithm: add strings foundation`.
- `05_Algorithm/Block01/05_sorting/main.cpp`
- `05_Algorithm/Block01/05_sorting/README.md`
- Commit `5f26b73316c0e70ac1681a3ab62a7ae079ee917a` — `algorithm: add sorting foundation`.
- `05_Algorithm/Block01/06_binary_search/main.cpp`
- `05_Algorithm/Block01/06_binary_search/README.md`
- Commit `d3ecbd0be6df50e88d07868f96812a3a09efdb38` — `algorithm: add binary search foundation`.
- `05_Algorithm/Block01/07_two_pointers/main.cpp`
- `05_Algorithm/Block01/07_two_pointers/README.md`
- Commit `470c67132c5a5f063fe41834a13791ec180c8d95` — `algorithm: add two pointers foundation`.
- Commit `5e4f40861fe9760fea59d1b551c596b3f41bf756` — `algorithm: add two pointers notes`.

## Blockers

None reported.

## Needs Core Decision

No
