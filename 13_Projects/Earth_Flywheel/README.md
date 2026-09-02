# Project Earth Flywheel / 地球飞轮

Status: Research Seed — Sprint v0
Authorized by: Horizon Core
Start date: 2026-09-02

## Long-term Research Question

How can embodied agents safely explore unfamiliar physical situations, turn local experience into transferable knowledge, and share validated experience across heterogeneous robot fleets?

This is a research hypothesis, not a declared permanent career identity.

## Sprint v0 — Toy Physical World

### Purpose

Build the smallest executable experiment that captures the Earth Flywheel mechanism without requiring real robot hardware, ROS, reinforcement learning, or deep learning.

The experiment should test one narrow hypothesis:

> Shared experience should allow later agents facing similar unfamiliar objects to make fewer unsafe or wasteful attempts than agents that learn only from their own local experience.

### Core Loop

`unknown object -> cautious probe -> observation -> local experience -> shared memory -> next agent retrieves similar experience -> safer/better action`

### Environment

Create a small simulated physical world in Python.

Each object has:
- observable features, such as size / surface type / shape class;
- hidden physical properties, such as required grip force / slip tendency / fragility threshold;
- an outcome model that maps an attempted action to success, slip, no-move, or damage.

The agent does not initially know the hidden properties.

### Required Experimental Conditions

Compare at least three modes:

1. **No Memory** — every encounter starts from the same prior rule.
2. **Local Memory** — one agent may reuse only its own previous experience.
3. **Shared Fleet Memory** — agents may retrieve validated experience from other agents when the new object is sufficiently similar.

### Minimum Metrics

Measure and plot at least:
- task success rate;
- damaging / unsafe attempts;
- number of probe attempts before success;
- cumulative performance over repeated encounters.

### Minimum Deliverables

- runnable Python code;
- deterministic or seed-controlled experiments;
- one README explaining the model and assumptions;
- plots comparing the three conditions;
- a short result section answering whether the toy experiment supports or weakens the hypothesis;
- explicit limitations explaining why this does **not** yet prove the idea works on real robots.

### Forbidden Scope in Sprint v0

Do not add these unless a later Core decision expands scope:
- ROS 2;
- real robot hardware;
- MuJoCo / Isaac Sim;
- deep learning;
- VLA models;
- reinforcement learning;
- cloud fleet infrastructure;
- humanoid-specific design;
- complex 3D simulation.

The point is to test the learning-loop idea, not to impress with stack complexity.

## Learning Mode

Use Horizon Learning Loop v0.2 — Self-Study + Assessment.

Learn missing Python / probability / experimental concepts just in time. Horizon may provide resources and assessment gates, but the learner owns implementation and debugging.

## Sprint v0 Gate

Sprint v0 passes only if:

1. all three conditions run reproducibly;
2. the experiment produces interpretable quantitative results;
3. the learner can explain why shared memory helps, fails, or creates negative transfer;
4. at least one counterexample is tested where shared experience is misleading;
5. the result is documented without claiming more than the toy model supports.

### Exit Decisions

After Sprint v0, Horizon Core may choose:
- **Continue** — run a stronger simulation / learning experiment;
- **Promote** — Earth Flywheel earns a larger bounded research role;
- **Hold** — preserve the seed but return resources to other lines;
- **Stop** — evidence or interest is insufficient.
