# Voyage Room → Project Control

Last Updated: 2026-08-28
Owner / Sole Writer: Voyage Room
Readers: Project Control and specialist threads
Authority: Advisory only

## Purpose

This is the Voyage Room's formal single-writer channel to Project Control. It carries meaningful long-term judgments, route hypotheses, major recommendations, material risk findings and questions requiring control-level judgment.

Project Control and specialist threads must not edit this file. Feedback and decisions return through `00_Project_Control/CONTROL_TO_VOYAGE.md`.

---

## Current Transmission

### VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001

- Date: 2026-08-28
- Type: Governance / reusable operating infrastructure / context-cost reduction
- Trigger: The user explicitly proposed beginning to create reusable Skills as Horizon now contains multiple threads, recurring GitHub/Notion workflows and stable operating patterns that are repeatedly reconstructed in chat.
- Architecture prototype: `00_Strategy/Voyage_Room/HORIZON_SKILLS_ARCHITECTURE.md`
- First Skill prototype: `00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md`
- Status: **Needs Master Decision — Shared Skills Architecture / Canonical Location / Trial Adoption**

### Problem

Horizon has reached a point where repeated workflows are mature enough to standardize, including:

- role-aware startup and authoritative state reads;
- evidence-safe status updates;
- evidence intake from user files/screenshots/artifacts;
- strategic route audits;
- opportunity filtering.

Without a reusable Skill layer, each chat reconstructs these procedures from context. This increases context cost, inconsistency and role leakage.

At the same time, Skills must not become a fourth governance layer or a disguised way to activate new work.

### Proposed definition

A Horizon Skill is a **reusable, versioned operating procedure for a recurring task pattern**.

Key distinction:

- Thread = who owns the work;
- Skill = how a recurring type of work is performed;
- Status = what is currently true;
- Strategy = what may be worth doing;
- Evidence = what actually happened.

A Skill never grants authority the invoking role does not already possess.

### Proposed governance

1. Skills remain subordinate to the Charter, THREAD_PROTOCOL and MASTER_STATUS.
2. Cross-thread Skills require Project Control adoption.
3. Role-owned prototypes may be drafted inside the role's writable area before adoption.
4. Skills should have explicit triggers, required reads, write boundaries, procedure, output contract, verification and stop/escalation conditions.
5. Skills should be versioned and move through `Draft → Trial → Adopted → Deprecated`.
6. Skill use should usually be silent; it should reduce ceremony rather than create new bureaucracy.
7. Do not create Skills merely because a workflow is imaginable. Promote only repeated real workflows.

### Proposed canonical library

Recommended after adoption:

`00_Project_Control/Skills/`

Reason: shared Skills are operating infrastructure, not another execution thread. Project Control is the natural curator for cross-thread adoption and write-boundary governance.

Final location is explicitly left to Project Control because THREAD_PROTOCOL does not currently define shared Skill ownership.

### First Skill trial — HZN-001 horizon-context-sync

Purpose: before an important Horizon task, determine the **minimum authoritative context** that must be read and produce an internal role-safe context packet.

HZN-001 encodes:

- authority hierarchy;
- role-specific required reads;
- write boundaries;
- minimum-read rather than full-repository logic;
- current-external-fact freshness checks;
- conflict handling;
- escalation conditions.

It is intentionally a preflight Skill, not a deliverable. The user should still receive the actual answer/task result rather than governance ceremony.

### Initial backlog — not yet authorized for implementation

Recommended order after HZN-001 trial:

1. `HZN-002 status-update` — evidence-safe, role-safe GitHub status/bridge update workflow;
2. `HZN-003 evidence-intake` — user files/screenshots/artifacts → verified structured evidence without fabrication;
3. `HZN-004 strategic-route-audit` — current-source route/country/degree/career comparison;
4. `HZN-005 opportunity-filter` — apply Charter decision framework and explicit opportunity-cost test.

Do **not** build the backlog all at once.

### Decision requested from Project Control

Project Control is asked to:

1. decide whether Horizon should formally adopt a shared Skills layer;
2. approve or modify the Skill definition and lifecycle in `HORIZON_SKILLS_ARCHITECTURE.md`;
3. choose the canonical library location and write ownership;
4. authorize `HZN-001 horizon-context-sync` for a real-world trial;
5. preserve the rule that Skills do not override role authority or activate new workload;
6. defer HZN-002+ until HZN-001 has been exercised enough to expose design failures.

### Voyage Room recommendation

**Adopt the architecture as a bounded trial and trial HZN-001 first.**

The Skills layer can meaningfully lower context and coordination cost, but it will become harmful if Horizon starts maintaining a large library for its own sake. The correct design target is a very small number of high-leverage procedures.

### Opportunity-cost answer

If this is adopted, what should temporarily not be done:

- do not build a large Skill catalog;
- do not create a new Skills specialist thread;
- do not automate unstable workflows;
- do not spend execution time polishing Skill files instead of producing real evidence.

### Confidence

High that repeated workflows now justify a reusable procedure layer. Medium on the final canonical location and ownership because THREAD_PROTOCOL has not yet defined this infrastructure.

---

## Other Awaiting Control Responses

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

### VTC-20260828-01 — Establish Academic Operations & Evidence as a Bounded-Support Specialist Thread
- Status: **Answered by CTV-20260828-01.**
- Result: `11_Academic/STATUS.md` activated as Active — Bounded Support / Maintenance; Notion `University Course Evidence` authorized as operational workspace; GitHub remains formal source of truth.

### VTC-20260822-06 — Normal Four-Year Graduation Baseline + TOEFL as Common English Test
- Status: Superseded for exam sequencing by VTC-20260825-01; retained facts remain: normal 2029 graduation, no early graduation route, TOEFL preferred, TUM benchmark, German longest runway, GRE conditional.

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
