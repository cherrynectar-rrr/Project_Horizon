# Project Horizon — Project Control → Voyage Room

Last Updated: 2026-08-21
Owner / Sole Writer: Project Horizon main control thread
Readers: Voyage Room and specialist threads
Authority: Control-level decisions and research requests

## Purpose

This is Project Control's formal single-writer channel to the Voyage Room. It records important feedback, adopted or rejected strategic decisions, deferrals, changed constraints and questions requiring further exploration.

The Voyage Room and specialist threads must not edit this file. New Voyage Room analysis returns through `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`.

## Current Control Message

- `VTC-20260821-03 — Refine Overseas MSc Financial Constraint to Total Annual Affordability` is adopted.
- Overseas MSc remains a preferred future option, but no country is privileged by default.
- The current working affordability model is approximately **RMB 100,000 per year in realistic all-in cost** as a planning band, not a precise hard ceiling.
- Future graduate-school comparisons must use total cost of attendance rather than tuition alone and must include tuition/fees, housing, living costs, insurance, transport, visa/proof-of-funds requirements, relocation/flights and a modest emergency buffer.
- Scholarships, waivers and guaranteed funding may reduce net cost; uncertain future part-time income must not be the assumption that makes an otherwise unaffordable route executable.
- High-cost self-funded routes remain non-default. Reliable funding is required before they are treated as financially executable.
- Germany / Europe remains a strong hypothesis but not a mandatory route. TUM remains **Conditional** under current 2026 rules rather than automatically viable.
- This strategic correction does **not** change current execution priority: Python main line; Algorithm active structured line; Linux support; C++ support; Career / Internship Active — Bounded Support.
- Career / Internship remains active bounded support under `CTV-20260821-06`; its technical boundaries remain unchanged.

## Decisions

### CTV-20260821-07 — Adopt Overseas MSc Total-Cost Affordability Constraint

- Date: 2026-08-21
- Responds to: `VTC-20260821-03 — Refine Overseas MSc Financial Constraint to Total Annual Affordability`
- Decision: **Adopt.** Supersede any control-level interpretation that tuition-free / near-zero tuition itself is a hard requirement.
- Rationale:
  - The user explicitly clarified that the real constraint is total affordability rather than literal zero tuition.
  - Total annual cost is a better measure of financial feasibility than tuition alone because living cost, insurance, visa requirements and relocation can dominate the budget.
  - Keeping the country pool open preserves strategic optionality while retaining financial discipline.
  - The Charter requires high-cost self-funded routes and fragile debt assumptions to remain non-default.
- Working financial constraint:
  - approximately **RMB 100,000 per year all-in** as the current planning band;
  - treat this as an order-of-magnitude affordability target, not a precise yuan-level ceiling;
  - reconfirm the acceptable range when the 2028–2029 graduate target pool is built.
- Required cost model for future school comparison:
  - tuition and mandatory fees;
  - housing;
  - food and daily living;
  - health insurance;
  - local transportation;
  - visa / residence / proof-of-funds requirements;
  - initial relocation costs and flights;
  - modest emergency buffer;
  - scholarships, waivers and guaranteed funding as verified offsets.
- Funding rule:
  - uncertain student-work income is only a secondary offset and must not be used to make an otherwise unaffordable route appear viable;
  - expensive self-funded routes require reliable funding before they count as executable options.
- Country / school implication:
  - keep the overseas MSc country pool globally open;
  - Germany / Europe remains a strong hypothesis, not a commitment;
  - compare German and non-German programs on equal terms using total cost, program fit, engineering/research quality, mobility and life fit;
  - TUM remains **Conditional** under current 2026 third-country tuition and Munich living-cost conditions unless a waiver, scholarship or other reliable funding materially changes the net cost.
- Resource or priority implication:
  - none for current execution;
  - no Graduate thread activation is authorized by this decision;
  - no change to Python, Algorithm, Linux, C++, Career / Internship, competition or Embedded priorities.
- Constraints the Voyage Room must use:
  - do not treat zero tuition as a hard requirement;
  - do not assume Germany is mandatory;
  - use realistic all-in annual cost and funding reliability for future graduate-route analysis;
  - verify then-current tuition, living costs, visa rules, scholarships and work rights before high-impact decisions.
- Further research question: None immediately. Revisit when 2028 target-pool construction begins or a materially strong overseas MSc opportunity appears.
- Review trigger:
  - initial 2028 graduate-school target-pool construction;
  - major change in family affordability;
  - reliable scholarship / assistantship that changes the net cost of a high-value route;
  - material policy or cost changes in candidate countries.
- Status: Active strategic constraint

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
