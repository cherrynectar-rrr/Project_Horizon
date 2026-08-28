# Voyage Room → Project Control

Last Updated: 2026-08-29
Owner / Sole Writer: Voyage Room
Readers: Project Control and specialist threads
Authority: Advisory only under current Charter v3.0 until governance is amended

## Purpose

This is the current Voyage Room → Project Control bridge under the existing three-layer model. If the proposed Horizon Core merger is adopted, this bridge should be frozen as a historical record after handoff.

---

## Current Transmission

### VTC-20260829-01 — Merge Voyage Room and Main Control into Horizon Core

- Date: 2026-08-29
- Type: Governance simplification / top-level role merger
- Trigger: The user explicitly requested that Voyage Room and Main Control "directly merge" after the Liaison / OUTBOX / INBOX discussion became too cumbersome.
- Detailed proposal: `00_Strategy/Voyage_Room/HORIZON_CORE_MERGER_PROPOSAL.md`
- Status: **Needs Master Decision — Charter / Protocol / Top-Level Operating Model**

### Core judgment

The communication problem is now better interpreted as a **top-level architecture problem**, not a missing-message-bus problem.

The current Voyage Room ↔ Main Control separation originally protected the distinction between exploration and operational decision. That distinction remains valuable, but implementing it as two separate chats increasingly creates user-visible coordination cost.

Recommended simplification:

> **Horizon Core / 核心舱 = Explore + Decide & Coordinate**  
> **Specialist Threads = Execute**

Preserve the Explore → Decide → Execute → Learn logic, but move Explore and Decide into two explicit modes inside one top-level Core role rather than two separate chats.

### Recommended surviving chat

Recommend evolving the existing **Main Control chat** into `Horizon Core / 核心舱` because it already owns `MASTER_STATUS.md` and cross-thread authority. Voyage Room's strategic freedom becomes the Core's internal **Explore mode**.

The current Voyage Room chat becomes historical / retired after a clean handoff.

### Required governance changes if adopted

1. Charter v3.0 explicitly defines a three-layer model, so the merger requires a formal Charter amendment / new Charter version.
2. `THREAD_PROTOCOL.md` must be revised for a two-layer operating model and Core write ownership.
3. `MASTER_STATUS.md` remains the formal current-state hub.
4. Existing Voyage strategy documents remain preserved; avoid cosmetic directory migration.
5. `VOYAGE_TO_CONTROL.md` and `CONTROL_TO_VOYAGE.md` become frozen historical bridge records after handoff.
6. Major Core decisions should preserve an internal two-pass discipline:
   - Explore mode: alternatives, uncertainty, counter-cases, external evidence;
   - Decide & Coordinate mode: temporary decision, resource implications, opportunity cost, review trigger.
7. Specialist responsibilities and evidence rules remain unchanged.

### Liaison consequence

`VTC-20260828-06 — Establish Horizon Liaison as a Bounded Cross-Thread Relay` is **withdrawn / superseded as the solution for Voyage ↔ Control communication**.

Do not build Liaison, OUTBOX or INBOX infrastructure merely to preserve a top-level split the user no longer wants.

A future Specialist → Core communication mechanism should only be reconsidered if real post-merger evidence shows a remaining problem.

### HZN-001 consequence

`HZN-001 — horizon-context-sync v0.4` has been adopted by `CTV-20260828-04` as Horizon's first shared Skill.

The merger should not be blocked by that Skill's current three-role assumptions. If the Core merger is adopted, v0.4 remains the pinned adopted historical version and a later candidate v0.5 should simplify the role model to `Horizon Core` + `Specialist Thread` under normal version review.

### Opportunity-cost answer

If the merger is adopted, intentionally do **not** build:

- a Liaison thread for Voyage ↔ Control;
- top-level OUTBOX/INBOX transport;
- duplicate strategy/control status systems;
- cosmetic repository migrations with no user benefit.

### Decision requested

Project Control is asked to:

1. adopt or reject the user-requested merger;
2. if adopted, evolve Main Control into **Horizon Core / 核心舱**;
3. prepare the required Charter and THREAD_PROTOCOL changes;
4. preserve Explore as an explicit internal decision stage rather than removing strategic dissent;
5. define a one-time handoff for unresolved Voyage strategic items;
6. freeze the old two-way bridge after handoff;
7. cancel the Liaison proposal as unnecessary for the former top-level split;
8. later review HZN-001 for a two-role candidate version.

### Voyage Room recommendation

**Adopt.**

The user's direct usability feedback is decision-relevant evidence: Horizon should become simpler when governance machinery starts imposing visible coordination cost.

Confidence: High on the merger's simplification value. Medium-high on exact file cleanup details; keep those minimal and reversible.

---

## Other Awaiting Control Responses

### VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely
- Status: **Needs Master Decision — Dual-Candidate Preservation / Future Decision Gate**
- Summary: Preserve Germany and Japan as parallel strategic candidates without parallel high-intensity local-language execution; create a Germany–Japan Strategic Gate before German B2/C1/TestDaF escalation and no later than 2028 H1 Target Pool freeze.

### VTC-20260828-02 — Upgrade Japan to a Formal High-Potential 2029 MSc Strategic Candidate
- Status: **Needs Master Decision — Strategic Candidate / Language Guardrail**
- Summary: Japan is a high-potential candidate; Science Tokyo IGP(C), especially Systems and Control Engineering / EEE, is the current Japan benchmark. Do not activate Japanese yet; preserve English/TOEFL; keep GRE conditional.

### VTC-20260825-01 — Establish 2029 MSc Application Exams & Gates Master Map
- Status: **Needs Master Acknowledgement / Sequencing Decision**
- Summary: Strategic omission-prevention map covering German, TOEFL, conditional GRE, APS, VPD, programme screenings, application materials, funding and post-offer gates.

### VTC-20260822-04 — Establish QS Top-100 Affordable Robotics MSc Target Pool
- Status: **Needs Master Decision — Target-Pool Framework**
- Summary: Preserve a broader affordable robotics/control/intelligent-systems MSc pool around the approximately RMB100k/year all-in planning band.

### VTC-20260822-01 — TUM RCI Control-Engineering Prerequisite Audit
- Status: Awaiting Control Response
- Summary: Formal control-engineering evidence remains a prerequisite issue requiring later syllabus / credit-classification audit.

### VTC-20260821-04 — Preserve Fragmented Strategic Inputs as a Durable Life-Route Ledger
- Status: Awaiting Control Response

---

## Answered / Closed / Superseded

### VTC-20260828-06 — Establish Horizon Liaison as a Bounded Cross-Thread Relay
- Status: **Withdrawn / superseded by VTC-20260829-01 for the top-level communication problem.**
- Reason: the user's preferred solution is to remove the Voyage ↔ Control split rather than add a communication subsystem around it.

### VTC-20260828-05 — Review HZN-001 After Four Meaningful Trials Across Three Role Types
- Status: **Answered by CTV-20260828-04.**
- Result: `HZN-001 horizon-context-sync v0.4` adopted as Horizon's first shared Skill; adoption is version-pinned; canonical migration remains deferred.

### VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001
- Status: Answered by CTV-20260828-02 and superseded in HZN-001 trial-state implication by CTV-20260828-04.

### VTC-20260828-01 — Establish Academic Operations & Evidence as a Bounded-Support Specialist Thread
- Status: Answered by CTV-20260828-01.

### VTC-20260822-06 — Normal Four-Year Graduation Baseline + TOEFL as Common English Test
- Status: Superseded for exam sequencing by VTC-20260825-01; retained facts remain normal 2029 graduation, TOEFL preferred, TUM benchmark, German longest runway, GRE conditional.

### VTC-20260822-05 — TUM-Primary Multi-School Exam Preparation Strategy
- Status: Superseded.

### VTC-20260822-03 — Evaluate Three-Year Early Graduation as a Strategic Option
- Status: Withdrawn / Closed.

### VTC-20260824-01 — Activate Dedicated Personal Finance & Capital Specialist Thread
- Status: Answered by CTV-20260824-01.

### VTC-20260822-02 — Establish Financial Freedom / Capital Formation as a First-Order Horizon Pillar
- Status: Answered by CTV-20260824-01.

### VTC-20260821-03 — Refine Overseas MSc Financial Constraint to Total Annual Affordability
- Status: Answered by CTV-20260821-07.

### VTC-20260821-02 — Tuition-Free / Near-Zero Tuition as a Hard MSc Feasibility Constraint
- Status: Superseded.

### VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence
- Status: Answered by CTV-20260821-05 and subsequent Career activation.

### VTC-20260820-02 — Internship-Aligned Capability Planning Review
- Status: Answered by CTV-20260820-03.

### VTC-20260816-01 — Establish Long-Term Strategic Research Map
- Status: Answered by CTV-20260816-01; astronomy interpretation later superseded by CTV-20260816-02.

---

## Transmission Rules

Under current Charter v3.0, update this file only for meaningful strategic judgments or questions requiring Project Control. If VTC-20260829-01 is adopted and the bridge is frozen, future top-level strategy and decisions should be handled inside Horizon Core without this two-chat relay.