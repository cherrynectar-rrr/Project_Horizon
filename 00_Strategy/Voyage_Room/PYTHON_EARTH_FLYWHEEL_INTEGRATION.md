# Python × Earth Flywheel Integration

Last Updated: 2026-09-02
Owner: Horizon Core
Status: Adopted Strategic Integration

## Purpose

Integrate the current Python main capability line with Project Horizon's robotics / embodied-intelligence exploration without turning Python into a premature robotics curriculum or disrupting the existing foundation sequence.

The integration principle is:

> Python remains a general engineering and research language first; increasingly, its projects and assessments should use robotics / physical-AI problems when those problems provide stronger and more transferable evidence.

This document does **not** replace `01_Python/STATUS.md`. The Python Specialist remains the owner of its own execution state and may translate this Core-level integration into future Python milestones when appropriate.

## 1. Current Python State — Preserve, Do Not Skip

The current Python milestone remains:

`OOP -> Student Manager V2`

Student Manager V2 is retained because it provides foundational capabilities that later robotics software will require:

- classes and objects;
- stateful software design;
- CRUD / data manipulation;
- file persistence;
- exception handling;
- modular project structure;
- debugging and refactoring.

Do not replace this milestone merely to make the curriculum look robotics-themed.

## 2. Python's Long-Term Role in Earth Flywheel

Python should become the primary high-level language for:

- experiment orchestration;
- sensor / actuator data logging from external controllers;
- CSV / JSON / structured experience storage;
- numerical analysis;
- plotting and visualization;
- experiment automation;
- simulation and prototyping;
- evaluation and comparison of hypotheses;
- machine-learning baselines;
- local / fleet experience-memory experiments;
- research tooling and reproducible experiment pipelines;
- later robotics frameworks when a real project requires them.

Python should **not** be treated as the default millisecond-scale safety controller for a physical actuator.

Low-level deterministic control, drivers and immediate hardware safety should remain with the appropriate embedded / C / C++ layer.

A future physical system may therefore look like:

`Python research / experiment layer -> MCU / embedded controller -> actuator / sensor loop -> Python logging / analysis / learning`

## 3. Capability Progression

### P0 — General Python Engineering Foundation — Current

Capability target:

- write understandable multi-file Python programs;
- model state with classes;
- persist data;
- handle failures cleanly;
- debug independently.

Current evidence gate:

- Unit 04 assessment;
- Student Manager V2 project gate or equivalent evidence.

### P1 — Experiment Data Layer

After the general foundation is secure, shift part of the project context toward physical-system experiments.

Target capabilities:

- structured records;
- CSV / JSON;
- basic NumPy / pandas when needed;
- matplotlib plotting;
- timestamps and experiment IDs;
- basic summary statistics;
- separating raw observations from derived metrics.

Preferred project context:

**Robot Experiment Logger v0**

The first version may use simulated or manually entered sensor / grasp data. Real hardware is not required yet.

Example record:

`trial_id + object + command + sensor_value + outcome + timestamp + notes`

### P2 — Hardware Data Bridge

When the Embedded line has a working board / serial interface, use Python as the PC-side experiment tool.

Target capabilities:

- read serial telemetry;
- send bounded high-level commands;
- parse messages;
- timestamp and store runs;
- recover from malformed / missing data;
- plot recorded signals.

Preferred integrated evidence:

**STM32 -> UART / serial -> Python logger -> plot / analysis**

Python does not replace local hardware safety logic.

### P3 — Research Software

Target capabilities:

- experiment configuration;
- reproducible runs;
- clean project structure;
- automated analysis;
- metrics and comparisons;
- tests for data-processing code;
- clear README / limitations;
- hypothesis-driven experiment scripts.

Preferred Earth Flywheel use:

compare conditions such as:

- no memory;
- local memory;
- shared memory;
- different probing policies;
- different force thresholds.

### P4 — Learning from Experience

Only after reliable data and deterministic baselines exist.

Target capabilities may include:

- scikit-learn baselines;
- simple regression / classification;
- train / validation separation;
- metrics;
- avoiding data leakage;
- error analysis;
- model-vs-rule comparison.

Preferred Earth Flywheel question:

> Can recorded grasp / contact experience improve a later decision compared with a deterministic baseline?

Deep learning, reinforcement learning or large robot models are **not** prerequisites for this stage.

### P5 — Robotics / Simulation Research Tooling

Add only when a real research question requires it:

- MuJoCo or another simulator;
- ROS 2 Python tooling;
- robotics datasets;
- more advanced ML / DL;
- fleet-memory experiments;
- cross-embodiment evaluation.

Do not add these technologies for architecture prestige or roadmap completeness.

## 4. Learning and Assessment Mode

Use Horizon Learning Loop v0.2:

`capability target -> curated resources -> independent study -> exam / practical / project gate -> grading / gap diagnosis -> targeted remediation -> retest / transfer`

Not every Python exercise needs a robotics skin. Use robotics contexts when they improve transfer, motivation or evidence quality.

For true zero-baseline concepts, introduce the vocabulary and minimum conceptual model before asking the learner to design independently.

## 5. Near-Term Integration Decision

### Now

Keep the current sequence:

1. OOP fundamentals;
2. file persistence;
3. exception handling;
4. modular project structure;
5. Unit 04 assessment;
6. Student Manager V2.

### First Robotics-Aligned Python Gate

After Student Manager V2 passes, the next strong transfer task should preferably ask the learner to build a small experiment-data program using concepts such as:

- `Experiment` / `Trial` objects;
- structured save / load;
- basic result summaries;
- simple plotting;
- clean separation between raw data and analysis.

This becomes the bridge from generic Python engineering into Earth Flywheel research software.

## 6. Capacity and Timing Guardrails

As of 2026-09-02:

- Python remains the main technical capability line;
- the Qingdao Agri Data Competition remains an active bounded project through 2026-09-30 and may legitimately consume Python application time;
- GPA-sensitive academic obligations remain higher priority than optional project expansion;
- Earth Flywheel remains a Research Seed — Sprint v0, not a new unrestricted permanent main line.

Therefore, Earth Flywheel integration should shape the **direction of future Python evidence**, not create immediate parallel overload.

## 7. Success Test

This integration is working if Python gradually becomes the tool with which the learner can:

1. represent a physical experiment in software;
2. collect and preserve data;
3. inspect and visualize what happened;
4. compare hypotheses;
5. automate repeated tests;
6. later train and evaluate simple learning systems;
7. support real robot research without hiding weak programming foundations.

The goal is not to become a person who 'knows Python syntax'.

The goal is to make Python part of the engineering and research machinery used to understand physical intelligence.

## References

- `01_Python/STATUS.md`
- `01_Python/README.md`
- `13_Projects/Earth_Flywheel/README.md`
- `00_Project_Control/MASTER_STATUS.md`
- `00_Project_Control/THREAD_PROTOCOL.md`
