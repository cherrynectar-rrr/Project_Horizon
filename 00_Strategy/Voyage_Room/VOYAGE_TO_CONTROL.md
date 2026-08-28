# Voyage Room → Project Control

Last Updated: 2026-08-28
Owner / Sole Writer: Voyage Room
Readers: Project Control and specialist threads
Authority: Advisory only

## Purpose

This is Project Control's formal single-writer counterpart to the Voyage Room bridge. Voyage Room uses this file to transmit meaningful strategic judgments, route hypotheses, major recommendations, material risks and questions requiring Project Control judgment.

Project Control and specialist threads must not edit this file. Feedback and decisions return through `00_Project_Control/CONTROL_TO_VOYAGE.md`.

---

## Current Transmission

### VTC-20260828-06 — Establish Horizon Liaison as a Bounded Cross-Thread Relay

- Date: 2026-08-28
- Type: Governance / cross-chat communication / support-thread architecture
- Trigger: The first Specialist-thread HZN-001 trial exposed a recurring communication gap: useful cross-chat feedback may matter to Voyage Room or Main Control without independently justifying a Specialist STATUS update, leaving the user to manually carry context between chats.
- Detailed proposal: `00_Strategy/Voyage_Room/HORIZON_LIAISON_PROPOSAL.md`
- Status: **Needs Master Decision — Bounded Liaison Thread / Relay Mechanism**

### Problem

The current governance model has strong single-writer bridges for formal Voyage ↔ Control communication, but Specialist Threads do not have a general-purpose channel for small but meaningful cross-role feedback that does not meet the normal STATUS update threshold.

The Algorithm HZN-001 trial demonstrated the gap:

- Algorithm correctly did not pollute `05_Algorithm/STATUS.md` merely to log a Skill test;
- Voyage could not independently reconstruct the detailed trial outcome from GitHub;
- the user had to manually report that the Algorithm line had run the Skill;
- HZN-001 v0.4 added a temporary user-relay convention, but that is a workaround rather than a durable communication mechanism.

### Proposal

Create a bounded execution/support thread:

**Horizon Liaison / 联络中继**

Proposed path:

`12_Liaison/`

Proposed state:

**Active — Bounded Support / Event-Driven**

Its only primary responsibility would be:

> route concise, evidence-labeled information between Horizon roles when the information is useful to another role but does not naturally belong in the source role's normal STATUS or strategic bridge.

### Proposed Liaison-owned files

```text
12_Liaison/
  STATUS.md
  PENDING_FOR_CONTROL.md
  PENDING_FOR_VOYAGE.md
  PENDING_FOR_SPECIALISTS.md
  RELAY_LOG.md
```

All remain single-writer Liaison-owned. Other roles may read them but not edit them.

### Authority boundary

Liaison may route and label messages. It may not:

- make strategic decisions;
- allocate resources;
- modify `MASTER_STATUS.md`;
- modify either strategic bridge;
- modify another specialist STATUS;
- convert user-reported chat information into verified fact;
- create standing polling or daily reporting overhead.

The three-layer governance model remains unchanged. Liaison is not a fourth layer.

### Evidence model

Messages should distinguish:

- **Verified GitHub** — sourced from formal repository state;
- **User-Reported** — user relays an outcome from another chat;
- **External Verified** — verified current external source.

A message should never be promoted from user-reported to verified thread state without evidence.

### HZN-001 relationship

If Liaison is adopted and proves useful, HZN-001 may later be revised so Main Control and Voyage Room conditionally read their Liaison pending files when relevant.

This should not become another unconditional startup read.

No HZN-001 change should occur until Liaison itself is approved.

### Initial objective if activated

**Cross-Thread Relay Baseline v1**

- route 3–5 real messages;
- cover at least two destination types;
- preserve all single-writer boundaries;
- measure whether manual user copy-pasting between chats actually decreases.

### Opportunity cost

If adopted:

- Liaison must remain event-driven;
- no daily synchronization ritual;
- no project-management empire;
- no new technical curriculum;
- no displacement of Python, Algorithm, GPA/core coursework or other approved work.

If the communication volume does not justify a dedicated owner, reject the thread and retain the simpler HZN-001 v0.4 user-relay fallback.

### Decision requested from Project Control

Project Control is asked to decide:

1. whether the observed cross-chat communication gap is recurring enough to justify `Horizon Liaison`;
2. whether `12_Liaison/` and the proposed single-writer pending-message files are acceptable;
3. whether Liaison should be activated as `Active — Bounded Support / Event-Driven` with `Cross-Thread Relay Baseline v1` as its first objective;
4. whether any Liaison-aware HZN-001 revision should wait until the relay baseline produces real evidence.

### Voyage Room recommendation

**Approve a bounded trial if Project Control agrees the gap is structural rather than Skill-test-specific.**

The design is intentionally narrow: Liaison should behave like a network switch, not another manager.

### Confidence

High that the communication gap is real. Medium that a dedicated thread is the best long-term solution because one more support thread itself has maintenance cost; this is why the proposed activation is bounded and reversible.

---

## Other Awaiting Control Responses

### VTC-20260828-05 — Review HZN-001 After Four Meaningful Trials Across Three Role Types
- Status: **Needs Master Decision — Trial Review / Adoption Path / Backlog Unlock**
- Summary: HZN-001 v0.4 has four meaningful trials across Voyage Room, Main Control and an Algorithm Specialist invocation. Core value is strong; Algorithm use exposed Specialist feedback-routing friction. Recommend Adopt with stabilization or one more clean Specialist trial. Trial evidence: `00_Strategy/Voyage_Room/skills/horizon-context-sync/TRIAL_LOG.md`.

### VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely
- Status: **Needs Master Decision — Dual-Candidate Preservation / Future Decision Gate**
- Summary: Preserve Germany and Japan as parallel strategic candidates without parallel high-intensity local-language execution. Establish a Germany–Japan Strategic Gate before German escalates into B2/C1/TestDaF-level intensity and no later than 2028 H1 Target Pool freeze. Detailed comparison: `GERMANY_JAPAN_MSC_ROUTE_COMPARISON.md`.

### VTC-20260828-02 — Upgrade Japan to a Formal High-Potential 2029 MSc Strategic Candidate
- Status: **Needs Master Decision — Strategic Candidate / Language Guardrail**
- Summary: Japan should be upgraded from generic alternative to high-potential candidate. Science Tokyo IGP(C), especially Systems and Control Engineering / EEE, is the primary Japan benchmark. Do not activate Japanese yet; preserve TOEFL; keep GRE conditional. Detailed audit: `JAPAN_MSC_FEASIBILITY_AUDIT.md`.

### VTC-20260825-01 — Establish 2029 MSc Application Exams & Gates Master Map
- Status: **Needs Master Acknowledgement / Sequencing Decision**
- Summary: `MSC_APPLICATION_GATES_MASTER_MAP.md` is the strategic omission-prevention map for the 2029 MSc cycle. It separates being listed from being active; includes German, TOEFL, conditional GRE, APS, VPD, programme screenings, application calendar, transcript/course evidence, application materials, funding and post-offer gates; recommends sequencing by deadline/validity/lead time and no simultaneous high-intensity German + TOEFL + GRE.

### VTC-20260822-04 — Establish QS Top-100 Affordable Robotics MSc Target Pool
- Status: **Needs Master Decision — Target-Pool Framework**
- Summary: Preserve the QS Top-100, approximately RMB100k/year all-in robotics-aligned pool. TUM remains the primary Germany benchmark while the broader pool stays open. Detailed pool: `QS_TOP100_AFFORDABLE_ROBOTICS_MSC_TARGET_POOL.md`.

### VTC-20260822-01 — TUM RCI Control-Engineering Prerequisite Audit
- Status: Awaiting Control Response
- Summary: Current TUM RCI rules require formal control-engineering evidence. `Computer Control Technology` is a plausible candidate but requires later syllabus / credit-classification audit; do not open a full minor solely for this before lower-cost options are checked.

### VTC-20260821-04 — Preserve Fragmented Strategic Inputs as a Durable Life-Route Ledger
- Status: Awaiting Control Response
- Summary: `STRATEGIC_INPUTS.md` preserves durable user-confirmed fragments without automatically changing execution priority.

---

## Answered / Closed / Superseded

### VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001
- Status: **Answered by CTV-20260828-02; subsequent feedback in CTV-20260828-03.**
- Result: Skills architecture principles adopted as a bounded Trial; HZN-001 authorized for shared cross-thread trial use while remaining in the Voyage-owned prototype path. Canonical migration deferred. Review is now requested through VTC-20260828-05.

### VTC-20260828-01 — Establish Academic Operations & Evidence as a Bounded-Support Specialist Thread
- Status: **Answered by CTV-20260828-01.**
- Result: `11_Academic/STATUS.md` activated as Active — Bounded Support / Maintenance; Notion `University Course Evidence` authorized as operational workspace; GitHub remains formal source of truth.

### VTC-20260822-06 — Normal Four-Year Graduation Baseline + TOEFL as Common English Test
- Status: Superseded for exam sequencing by VTC-20260825-01; retained facts remain: normal 2029 graduation, no early graduation, TOEFL preferred, TUM benchmark, German longest runway, GRE conditional.

### VTC-20260822-05 — TUM-Primary Multi-School Exam Preparation Strategy
- Status: Superseded by later exam-map work.

### VTC-20260822-03 — Evaluate Three-Year Early Graduation as a Strategic Option
- Status: Withdrawn / Closed by explicit user decision.

### VTC-20260824-01 — Activate Dedicated Personal Finance & Capital Specialist Thread
- Status: Answered by `CTV-20260824-01`.

### VTC-20260822-02 — Establish Financial Freedom / Capital Formation as a First-Order Horizon Pillar
- Status: Answered by `CTV-20260824-01`.

### VTC-20260821-03 — Refine Overseas MSc Financial Constraint to Total Annual Affordability
- Status: Answered by `CTV-20260821-07`; approximately RMB100,000/year realistic all-in remains the current planning band.

### VTC-20260821-02 — Tuition-Free / Near-Zero Tuition as a Hard MSc Feasibility Constraint
- Status: Superseded by VTC-20260821-03.

### VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence
- Status: Answered by `CTV-20260821-05` and subsequent Career activation.

### VTC-20260820-02 — Internship-Aligned Capability Planning Review
- Status: Answered by `CTV-20260820-03`.

### VTC-20260816-01 — Establish Long-Term Strategic Research Map
- Status: Answered by `CTV-20260816-01`; astronomy interpretation later superseded by `CTV-20260816-02`.

---

## Transmission Rules

Update this file only when analysis could materially affect direction, priorities, resource allocation or a major decision. Keep verified facts separate from assumptions. Recommendations must state uncertainty, opportunity cost and what evidence could change the conclusion.
