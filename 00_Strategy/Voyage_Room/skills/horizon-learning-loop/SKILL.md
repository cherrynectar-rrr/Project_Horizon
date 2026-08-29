# Horizon Learning Loop

Version: 0.1
Status: Candidate — Cross-thread Trial
Owner: Horizon Core
Last Updated: 2026-08-30

## Purpose

Provide a reusable learning procedure for Project Horizon learning-oriented Specialist Threads so that Python, C++, Algorithm, Linux, Embedded, AI and future learning threads share a strong default way to learn without becoming identical courses.

This Skill operationalizes learning principles already extracted in Horizon discussions and already visible in the Algorithm Course. It is **not** a summary of, quotation from, or claim of exhaustive fidelity to the two books that inspired the discussion. The current repository evidence supports the principles below through the Algorithm learning architecture and Charter learning/evidence standards; broader cross-domain effectiveness remains a trial question.

The Skill is a learning procedure, not a governance layer. It does not change thread ownership, activation state, roadmap priority or write authority.

## Core Outcome

A learning unit should aim to move the learner from:

`recognition / familiarity`

into:

`generation → understanding → execution → feedback → retrieval → transfer → explanation`.

The default success test is not “I have read it” or “I watched the tutorial”. It is whether the learner can increasingly:

- predict or reason before seeing the answer;
- explain the mechanism;
- perform the task independently;
- run / test / observe real feedback when the domain permits;
- debug mistakes using hypotheses rather than random edits;
- retrieve the core idea later without rereading everything;
- transfer the idea to a nearby new problem;
- explain it clearly to a beginner.

## Default Learning Loop

Use the following loop as a default, adapting its surface form to the domain:

```text
1. Capability Target
→ 2. Pretest / First Attempt
→ 3. Expose the Gap
→ 4. Minimum Necessary Theory
→ 5. Guided Discovery / Small Model
→ 6. Independent Construction
→ 7. Run / Test / Observe
→ 8. Debug / Explain / Trade-offs
→ 9. Closed-book Retrieval
→ 10. Spaced Revisit
→ 11. Interleaving after basic mastery
→ 12. Transfer / Teach-back
```

### 1. Capability Target

Before teaching, define what the learner should be able to **do**, not only what topic should be covered.

Good targets:

- implement a binary search and explain its invariant;
- build, flash and debug a minimal STM32 project;
- write a Python class and use it in a small program;
- inspect a Linux process and explain the commands used.

Weak targets:

- finish Chapter 4;
- watch three videos;
- read the documentation.

### 2. Pretest / First Attempt

Whenever reasonable, let the learner attempt a prediction, explanation, hand simulation, small implementation or diagnostic step **before** full explanation.

The attempt may be incomplete. Its purpose is generation and diagnosis, not punishment.

Do not withhold essential safety information or prerequisites that would make the attempt unsafe or meaningless.

### 3. Expose the Gap

Use the first attempt to locate the real missing link:

- concept;
- mental model;
- syntax / API;
- boundary condition;
- debugging method;
- prerequisite knowledge;
- inability to transfer an idea already seen.

Teach the missing layer instead of dumping the whole topic again.

### 4. Minimum Necessary Theory

Provide enough theory to make the next action intelligible and correct.

Prefer:

`need → mechanism → immediately use it`

over:

`long theory block → hope it becomes useful later`.

This does not mean avoiding deep theory. Deep theory is introduced when the task, explanation quality, later dependency or research goal actually requires it.

### 5. Guided Discovery / Small Model

Use the smallest useful representation:

- a tiny array;
- a short code trace;
- one object with two methods;
- one GPIO pin;
- one shell pipeline;
- one toy dataset;
- one diagram or physical prediction.

Ask the learner to predict the next step when possible.

### 6. Independent Construction

The learner should produce something from memory and understanding:

- code;
- command sequence;
- derivation;
- circuit configuration;
- explanation;
- debugging hypothesis;
- small design decision.

Do not replace this with copying unless copying itself is the explicit skill being learned.

### 7. Run / Test / Observe

Use real feedback whenever the domain allows it:

- execute the program;
- compile;
- inspect output;
- run tests;
- flash hardware;
- enter the debugger;
- measure a signal;
- compare a prediction with observed behavior.

Feedback should be close enough to the action that the learner can connect cause and effect.

### 8. Debug / Explain / Trade-offs

When something fails, prefer:

`What did we expect? → What actually happened? → What hypothesis explains the difference? → What test distinguishes the hypotheses?`

After success, explain:

- why it works;
- important assumptions;
- common failure modes;
- complexity / resource / engineering trade-offs where relevant.

### 9. Closed-book Retrieval

Before rereading notes, ask the learner to reconstruct the important parts from memory.

Examples:

- explain the core idea in three sentences;
- hand-simulate one example;
- rewrite the key function;
- list the bring-up sequence;
- reproduce the command pattern;
- explain one common mistake.

Use notes to check gaps **after** the retrieval attempt.

### 10. Spaced Revisit

Do not require mastery to be maintained through continuous rereading.

Revisit important knowledge after a delay, using retrieval or a small task first. The exact schedule may vary with thread intensity and importance; do not create scheduling bureaucracy when a lightweight revisit is enough.

### 11. Interleaving After Basic Mastery

Once the learner has a usable foundation, mix nearby problem types so that they must identify **which method applies**, rather than only repeating one freshly demonstrated pattern.

Do not interleave so early that the learner has no stable base at all.

### 12. Transfer / Teach-back

A strong completion check is one of:

- solve a nearby but non-identical problem;
- modify the system under a new constraint;
- explain the concept to a beginner;
- compare two methods and justify the choice;
- reproduce the workflow after a delay.

## Motivation and Engagement Design

Project Horizon should make learning compelling through real progress, not artificial productivity theatre.

Prefer:

- **meaningful challenge:** tasks slightly beyond current independent ability;
- **curiosity gaps:** reveal a concrete problem before giving the mechanism;
- **fast real feedback:** compiler, debugger, tests, hardware behavior, output, reasoning checks;
- **visible capability progress:** “I can now build / explain / debug this”;
- **small completions inside a larger arc:** each session can close one real loop;
- **ownership:** the learner makes predictions and decisions rather than only following instructions;
- **connection:** show how the current piece unlocks later work.

Avoid using:

- streaks, points or GitHub activity as substitutes for capability;
- fake urgency;
- excessive novelty that fragments the roadmap;
- difficulty escalation purely to feel advanced;
- endless explanation without construction;
- “motivation systems” whose maintenance costs more attention than the learning itself.

## Hint Ladder

When the learner is stuck, do not default to a full solution.

Use a progressive ladder when appropriate:

1. ask a directional question;
2. point to the relevant observation / invariant / system behavior;
3. use a tiny example or trace;
4. give pseudocode / command skeleton / configuration skeleton;
5. patch the learner's partial work;
6. provide a complete solution only when necessary or explicitly requested.

The correct level depends on the task. Safety-critical configuration, destructive commands or high-cost hardware actions may require more direct guidance.

## Domain Adaptation

The loop should preserve its **mechanism**, not force identical lesson formatting.

### Algorithm

Emphasize hand simulation, invariants, independent implementation, complexity, retrieval and problem transfer.

### Python / C++

Emphasize small programs, prediction of execution, independent construction, tests, debugger use, refactoring and transfer into mini-projects.

### Linux

Emphasize real workflows, command prediction, observing system state, safe experimentation and explaining what each command changes.

### Embedded

Emphasize prediction of hardware/software behavior, minimal bring-up steps, build/flash/debug feedback, measurement and hypothesis-driven debugging. Do not hide hardware friction behind copied tutorials.

### Mathematics / Physics when used in Horizon learning

Emphasize first attempts, derivation, small examples, retrieval, explaining assumptions and applying the idea to a nearby problem. Calculation volume alone is not mastery.

### AI / Data

Emphasize prediction before running experiments, small baselines, observed metrics, error analysis, reproducibility and explaining why a model or method is appropriate.

## Evidence Standard

A learning milestone should produce evidence appropriate to the domain. Examples include:

- runnable code;
- tests or debugging evidence;
- hardware demonstration;
- derivation or solved problem with explanation;
- README / concise notes with retrieval prompts;
- reproducible experiment;
- meaningful Git commit;
- successful transfer task.

Do not manufacture artifacts merely because this Skill lists them.

## Specialist Use

For learning-oriented Specialist Threads, this Skill is the default **trial learning mechanism** when it fits the task.

A Specialist may adapt sequencing or omit steps when justified by:

- prior mastery;
- task size;
- safety;
- domain constraints;
- the user explicitly requesting a direct answer;
- a time-critical real-world task.

Do not turn the Skill into ritual. If a step adds ceremony but no learning value, compress it.

The Skill does not authorize a Specialist to change its roadmap, priority or another thread's work.

## Trial Questions

Cross-thread trial should answer:

1. Does the loop improve independent recall and construction compared with explanation-first teaching?
2. Does it work in at least two materially different domains, not only Algorithm?
3. Does the motivation design increase sustained engagement without creating tracking overhead?
4. Are some steps redundant or domain-specific?
5. Does the Skill reduce or increase conversational friction?
6. Does the user increasingly need fewer hints on repeated patterns?

Evidence should come from ordinary learning sessions. Do not create artificial exercises just to validate the Skill.

## Adoption Gate

Do not mark this Skill adopted merely because its principles sound plausible.

A future adoption decision should preferably have:

- existing Algorithm evidence;
- at least one real software-learning trial outside Algorithm;
- at least one materially different domain trial when practical, such as Embedded / Linux / mathematics;
- no evidence that the procedure creates excessive ceremony;
- user feedback that it improves learning quality or engagement.

## Source / Evidence Boundary

Current support comes from:

- `Project_Horizon_Charter_v4.0.md` — create-before-consume, default learning loop, real feedback, evidence and transfer;
- `05_Algorithm/README.md` — pretest, guided discovery, hand simulation, independent implementation, test/debug, closed-book retrieval, spaced review, interleaving and teach-back;
- prior user discussion identifying two learning books as inspiration for improving Horizon learning design.

The actual book texts are not stored in this Skill. Therefore this file should not claim that any particular phrase, taxonomy or mechanism is a verbatim teaching from either book unless the source is later added and verified.

## Change Log

### v0.1 — 2026-08-30 — Candidate / Cross-thread Trial

- Generalizes the learning mechanism already used in the Algorithm Course.
- Adds cross-domain adaptation rules for software, Linux, Embedded, mathematics/physics and AI/data work.
- Adds engagement design centered on meaningful challenge, curiosity, rapid real feedback and visible capability progress rather than artificial gamification.
- Keeps the procedure subordinate to Charter, Core priorities and Specialist ownership boundaries.
