# Horizon AI Execution & Memory — Core Decision Record

Date: 2026-09-05
Owner: Horizon Core
Status: Active decision record

## Context

A Life Operations conversation surfaced several broader Horizon ideas: ChatGPT Work as an execution capability, AI use across daily life, AI + IoT / intelligent physical systems as a future integration direction, a laboratory as a possible validation environment, and external long-term memory for recovering valuable old discussions.

These are evaluated here as Horizon Core candidates. This record does not create new technical main lines, repositories or authority layers.

## Decision 1 — ChatGPT Work Pilot v0: APPROVED AS A BOUNDED CAPABILITY TRIAL

Horizon will **not migrate into Work** and will not create a new Work authority layer.

Work may be used when a task is:

- long-running or multi-step;
- bounded by a clear objective and deliverable;
- research / synthesis / document-production heavy;
- able to proceed for a meaningful period without continuous user feedback;
- safer and more efficient when the user does not have to repeatedly type `continue`.

Likely natural pilots include:

- graduate-program / policy synthesis;
- competition data-source investigation;
- literature / technical-source investigation;
- large bounded comparison or report tasks.

Work is **not the default** for:

- interactive learning where learner performance must steer the next step;
- hardware debugging that depends on real-time physical observations;
- open-ended Horizon strategy decisions that require Core judgment throughout.

### Work Pilot guardrails

1. GitHub remains canonical state.
2. Work receives only the minimum task-relevant Horizon context.
3. Work does not gain Specialist or Core authority merely by executing a task.
4. If connected GitHub / files are available, Work should read the relevant canonical state before execution; otherwise the necessary state must be explicitly supplied. Do not assume automatic repository awareness.
5. Outputs are evidence / draft artifacts until reviewed by the correct owner.
6. Formal STATUS / MASTER changes still follow Horizon ownership and meaningful-change rules.
7. Do not create Work-specific mirrors of Horizon files.

Review after several natural real uses, or immediately after a material boundary / reliability failure. The question is whether Work reduces coordination cost and improves evidence quality, not whether it looks more autonomous.

## Decision 2 — AI Life Stack: USE AS A TOOL-SELECTION HEURISTIC, NOT A NEW ARCHITECTURE

The useful principle is retained:

> AI should reduce low-value cognitive labor — repeated search, coordination, reminders, routine monitoring and mechanical organization — while leaving important judgment, learning, creation and real-world verification with the user.

Chat, Projects, Work, web research, scheduled tasks, connected apps, voice, vision and finance tooling are **capabilities to choose from**, not a new Horizon hierarchy or project line.

No `AI Life Stack` repository, dashboard or independent roadmap is authorized.

## Decision 3 — AI + IoT / Intelligent Physical Systems: RETAIN AS A STRATEGIC EXPLORATION HYPOTHESIS

The chain

`MCU / sensors → communications → Linux / edge gateway → data → Python / AI → decision → physical control`

is a plausible future integration surface because it can connect Embedded, Linux, Python, networking / IoT and AI in a real physical system.

`Dorm Intelligence` is retained as an **example integration-project candidate**, not an active project.

No current scope change is authorized:

- Embedded remains on the approved NUCLEO-G071RB Phase 0 bring-up;
- no ESP32, Raspberry Pi, Home Assistant, MQTT or new AIoT stack is added now merely because the integration idea is attractive;
- no new main technical line is created.

A future activation should occur only when current foundations and capacity justify a small real experiment.

`Intelligent Physical Systems / 智能物理系统` may be used as a broad exploratory concept, but it is not a declared career identity or final direction.

## Decision 4 — Laboratory as a Validation Environment: ACCEPT THE FRAMING, NOT THE CONCLUSION

A laboratory may be valuable as a place to obtain real engineering / research feedback and test fit across Embedded, IoT, Linux / edge, AI / data and system integration.

It must not be treated as proof that the user's long-term direction is AIoT or robotics.

Before any consequential decision involving a specific lab, advisor, project opportunity or current research direction, verify the latest real-world information rather than relying on old chat memory.

## Decision 5 — Horizon External Memory: REAL PAIN POINT ACKNOWLEDGED; FULL INFRASTRUCTURE DEFERRED

The observed problem is valid:

> Valuable earlier discussion that never became canonical state may be difficult to recover reliably from ordinary chat context / memory.

The conceptual separation is useful:

- **Raw memory** — original conversations / source records;
- **Semantic memory** — searchable people, ideas, events and discussion signals;
- **Canonical memory** — formal Horizon facts and decisions in GitHub.

However, this is **not yet an authorization** for PostgreSQL, pgvector, Qdrant, embeddings, MCP, agent orchestration, dashboards or a new memory repository.

### Memory Recall Phase 0 — approved now

- GitHub remains canonical state.
- When a discussion produces a strategically useful summary that already exists naturally, Core may preserve a concise strategy / decision note rather than rely on chat recall.
- Do not archive ordinary chat or create a parallel complete history system.
- Treat old conversation content as historical evidence / signals, not automatically as current fact.

### Trigger for a Phase 1 pilot

Only escalate when **material recall failure becomes recurrent enough to waste real time or lose decision-quality context**, and when Horizon has a practical source of conversation records to search.

If Phase 1 becomes justified, start with the smallest useful implementation:

`exported conversations → plain Markdown / JSON → ordinary text / metadata search`

Only add embeddings / vector search if real corpus size and search failures show that keyword / metadata search is insufficient.

## Non-Decisions

The following are intentionally **not** approved now:

- a new Agent layer;
- an autonomous Horizon operating system;
- a separate AI Life project;
- an AIoT technical main line;
- a dedicated External Memory repository;
- vector-database infrastructure;
- automatic conversion of casual interest statements into strategic facts.

## Core Principle

> Use AI to compress friction and expand execution capacity, while keeping canonical truth, strategic authority and real-world verification explicit.

For every new layer, ask:

> What recurring real cost does this remove, and what would we stop doing to pay for it?
