# Matt Pocock Skills — Selective Horizon Trial Decision

Date: 2026-09-04
Owner: Horizon Core
Status: Active Trial Authorization

## Decision

The user explicitly authorized Horizon Core to selectively absorb a small number of engineering practices from `mattpocock/skills` rather than importing the repository wholesale.

This decision is the separate Core authorization required by the conservative-expansion rule in `HORIZON_SKILLS_ARCHITECTURE.md`.

It creates a narrow exception to the previous immediate rule that HZN-002 must finish before any other Skill trial begins.

The following three **unnumbered engineering micro-skills** are authorized as Candidate — Trial:

1. `engineering-debug-loop` — feedback-loop-first debugging;
2. `behavior-first-testing` — behavior-focused tests and optional red→green slices where useful;
3. `design-grill` — clarify non-trivial design decisions and hidden assumptions before implementation.

These trials do **not** consume or unlock `HZN-003`, `HZN-004` or `HZN-005`; those numbered backlog items remain frozen.

## Why These Three

They directly reinforce Charter-level durable capabilities already named by Horizon: debugging, testing, software design, experimental reasoning and real feedback.

They are also useful across several active or near-term environments:

- Python projects;
- C++ / Algorithm implementation;
- Linux debugging;
- STM32 / Embedded bring-up and integration;
- later robotics and research software.

They should strengthen execution rather than create a new roadmap.

## What Is Not Being Imported

Horizon is not importing the full Matt Pocock workflow, issue-tracker machinery, agent orchestration, HTML teaching workspace, background-agent assumptions or any automatic process ownership.

`teach` is not imported because `horizon-learning-loop v0.2` already covers the core Horizon learning architecture.

`research` is not imported as a separate Skill because Horizon governance already requires fresh reliable sources for mutable facts; specific research procedure may be revisited only after real recurring friction appears.

## Trial Rules

- invoke a micro-skill only when a real task naturally matches it;
- do not add ceremony to tiny exercises or obvious fixes;
- do not require strict TDD for every function, especially while the user is still building basic programming fluency;
- do not turn design clarification into endless questioning;
- preserve hardware/safety constraints and Specialist/Core authority boundaries;
- record trial evidence only when the method materially changes execution quality, debugging clarity, rework or learning.

## Trial Gates

### engineering-debug-loop

At least one real Python, C++, Linux or Embedded bug should be handled by building a specific reproduction / feedback signal before changing code or hardware. Trial passes only if the loop materially reduces random guessing or leaves useful regression/debug evidence.

### behavior-first-testing

At least one real project feature should define observable behavior first and verify it through a useful public seam or acceptance check. Full strict TDD is not required. Trial passes only if the test/check improves correctness or safe refactoring rather than creating busywork.

### design-grill

At least one non-trivial design decision should be clarified before implementation. Trial passes only if important ambiguity, constraints or hidden assumptions are surfaced and downstream rework is reduced.

## Source / Attribution

Conceptually adapted from the MIT-licensed repository:

`https://github.com/mattpocock/skills`

Primary inspirations at authorization time:

- `skills/engineering/diagnosing-bugs/SKILL.md`
- `skills/engineering/tdd/SKILL.md`
- `skills/productivity/grilling/SKILL.md`

Horizon adaptations are deliberately smaller and are governed by Project Horizon Charter / Protocol rather than the source repository's agent environment.

## Review Trigger

Review after the three methods have each encountered at least one natural real task, or earlier if any of them creates obvious friction.

Possible outcomes: Adopt / Revise / Merge into another Skill / Drop.
