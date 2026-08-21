# Project Horizon — Project Control → Voyage Room

Last Updated: 2026-08-21
Owner / Sole Writer: Project Horizon main control thread
Readers: Voyage Room and specialist threads
Authority: Control-level decisions and research requests

## Purpose

This is Project Control's formal single-writer channel to the Voyage Room. It records important feedback, adopted or rejected strategic decisions, deferrals, changed constraints and questions requiring further exploration.

The Voyage Room and specialist threads must not edit this file. New Voyage Room analysis returns through `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`.

## Current Control Message

- Career / Internship has been promoted from **Preheat / on-demand** to **Active — Bounded Support** by explicit user request and Project Control authorization on 2026-08-21.
- This activation does **not** make Career a Horizon main line and does not authorize continuous daily browsing, high-volume applications or an independent technical curriculum.
- Career may now actively complete `Internship Readiness Baseline v1`, evaluate concrete opportunities, perform lawful public-source company/team due diligence, handle local application gaps and capture application/interview feedback.
- Standard concrete-opportunity workflow remains: role reality check → verified user fit → lawful public-source company/team due diligence → risk/value verdict → feedback loop.
- Standard action vocabulary remains **PRIORITY APPLY / APPLY / WATCH / SKIP**.
- Technical capability gaps must still be reported to Project Control rather than converted into Career-owned curricula.
- Current technical priority remains unchanged: Python main line; Algorithm active structured line; Linux support; C++ support for algorithm implementation.
- A larger seasonal application push still requires a later Project Control decision based on readiness, availability or a concrete high-fit opportunity.
- Embedded remains dormant. AI / Embodied AI remain strategic options rather than first-internship prerequisites.

## Decisions

### CTV-20260821-06 — Activate Career / Internship as Bounded Support

- Date: 2026-08-21
- Trigger: Explicit user request to activate the dedicated internship branch after the Preheat setup and opportunity-review workflow were established.
- Decision: **Activate as Bounded Support.**
- Rationale:
  - The thread now has a clear responsibility boundary, a readiness framework and a reusable opportunity-review workflow.
  - The user explicitly wants to use the branch now rather than keep it organizationally dormant.
  - Activation can produce immediate decision value without violating the one-main-line principle if workload remains event-driven and bounded.
- Resource or priority implication:
  - Python remains the main technical line.
  - Algorithm remains the active structured algorithm line.
  - Linux and C++ retain their existing support roles.
  - Career becomes active support for readiness, concrete opportunity evaluation and application feedback, but receives no standing daily workload quota.
- Authorized Career work:
  - complete `Internship Readiness Baseline v1`;
  - evaluate user-supplied JDs, screenshots, companies and internship opportunities;
  - conduct lawful public-source company/team due diligence;
  - use `PRIORITY APPLY / APPLY / WATCH / SKIP` for concrete opportunity recommendations;
  - handle resume wording, project explanation, communication and company-specific preparation;
  - record application/interview outcomes as market evidence.
- Not authorized:
  - continuous daily internship browsing or high-volume application work;
  - independent Python, C++, Linux, Algorithm, Embedded, AI, ROS2, CUDA, OpenCV or interview-grinding curricula;
  - changing cross-thread priority;
  - treating a single JD as a personal technical roadmap.
- Gap-routing rule:
  - local application gaps → Career may handle;
  - technical capability gaps → report to Project Control;
  - structural mismatches → classify as structural rather than spending technical resources trying to solve them.
- Review trigger:
  - completion of `Internship Readiness Baseline v1`;
  - first 3–5 concrete opportunity reviews;
  - a concrete high-fit opportunity requiring meaningful resource allocation;
  - confirmation of early-2027 winter-break availability;
  - any repeated technical gap across multiple high-fit opportunities.
- Status: Active

### CTV-20260821-05 — Adopt Career Opportunity Review & Company Due Diligence Workflow

- Date: 2026-08-21
- Responds to: `VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence`
- Decision: Adopt with lightweight implementation.
- Core workflow:
  1. Role Reality Check.
  2. Verified User Fit.
  3. Lawful public-source Company & Team Due Diligence.
  4. Risk / Value Verdict.
  5. Application / Interview Feedback Loop.
- Standard action vocabulary: `PRIORITY APPLY / APPLY / WATCH / SKIP`.
- Gap routing:
  - local application gap → Career;
  - technical capability gap → Project Control;
  - structural mismatch → classify as structural.
- Privacy / ethics boundary:
  - public-source company intelligence only;
  - no private-person investigation, doxxing, access-control bypass or rumor-as-fact.
- Review trigger: after the first 3–5 concrete opportunity reviews or earlier if overhead becomes excessive.
- Status: Active

### CTV-20260821-04 — Establish Dedicated Career / Internship Preheat Thread

- Date: 2026-08-21
- Trigger: Explicit user request to open a dedicated internship branch.
- Decision: Create `09_Career/STATUS.md` in Preheat state with one bounded setup output, `Internship Readiness Baseline v1`.
- Boundary: Career owns readiness/application/opportunity evaluation but not technical curricula or cross-thread priority.
- Superseded portion: the Preheat-only state is superseded by `CTV-20260821-06`; the responsibility boundaries remain in force.
- Status: Superseded in activation state; boundaries retained.

### CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework

- Date: 2026-08-20
- Responds to: `VTC-20260820-02 — Internship-Aligned Capability Planning Review`
- Decision: Adopt with bounded scope and deferred execution triggers.
- Application Ready Gate:
  1. presentable engineering project with README and explainable design/debugging/limitations;
  2. practical C/C++ fluency without syntax/STL being the main blocker;
  3. verified practical Linux workflow evidence;
  4. basic algorithm/data-structure competence from the approved Algorithm route;
  5. ability to explain projects, reproduce bugs, document work and communicate technical decisions;
  6. credible continuous availability window.
- Resource implication:
  - Python remains main through Student Manager V2;
  - Algorithm continues Block 01 → Block 08 one topic at a time;
  - C++ remains support;
  - Linux is the clearest current support-evidence gap;
  - Embedded remains dormant until a bounded trigger;
  - Career is now governed by later decisions `CTV-20260821-04` through `CTV-20260821-06`.
- Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.
- Status: Active

### CTV-20260816-02 — Remove Astronomy From Current Strategic Route

- Date: 2026-08-16
- Decision: Remove astronomy from Project Horizon's current strategic scope unless explicitly reopened by the user.
- Constraint: Do not use astronomy in academic, research, graduate-study or career recommendations. Physics remains a separate open academic interest.
- Resource implication: None.
- Status: Complete

### CTV-20260816-01 — Acknowledge Long-Term Strategic Research Map

- Date: 2026-08-16
- Responds to: `VTC-20260816-01 — Establish Long-Term Strategic Research Map`
- Decision: Adopt as an advisory reference framework with no execution-resource change.
- Constraints:
  - preserve exploration/execution separation;
  - Germany / Europe, US research, domestic routes and other international options remain hypotheses rather than commitments;
  - use projects, competitions, internships, research exposure, funding realities and future evidence to update route judgments;
  - preserve optionality and financial feasibility.
- Status: Complete

## Control Message Template

### CTV-YYYYMMDD-NN — Title

- Date:
- Responds to:
- Decision: Adopt / Reject / Defer / Experiment / Continue research
- Rationale:
- Evidence considered:
  - `MASTER_STATUS.md`:
  - Relevant specialist `STATUS.md`:
  - Opportunity Radar:
  - Current real-world constraints:
- Resource or priority implication:
- Constraints the Voyage Room must use:
- Further research question:
- Expected output:
- Review trigger or date:
- Status: Active / Complete / Superseded
