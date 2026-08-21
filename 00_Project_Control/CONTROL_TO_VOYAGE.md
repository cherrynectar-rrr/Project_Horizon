# Project Horizon — Project Control → Voyage Room

Last Updated: 2026-08-21
Owner / Sole Writer: Project Horizon main control thread
Readers: Voyage Room and specialist threads
Authority: Control-level decisions and research requests

## Purpose

This is Project Control's formal single-writer channel to the Voyage Room. It records important feedback, adopted or rejected strategic decisions, deferrals, changed constraints and questions requiring further exploration.

The Voyage Room and specialist threads must not edit this file. New Voyage Room analysis returns through `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`.

## Current Control Message

- `VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence` is adopted with a lightweight, reusable workflow.
- Career / Internship remains **Preheat / on-demand**. This decision expands its explicit evaluation responsibility but does not create continuous application workload or change technical priorities.
- For concrete opportunities, Career should use a consistent sequence: role reality check → verified user-fit analysis → lawful public-source company/team due diligence → risk/value verdict → application/interview feedback loop.
- Standard action vocabulary is **PRIORITY APPLY / APPLY / WATCH / SKIP**.
- Career may handle local application gaps such as resume wording, project explanation and company-specific preparation. Technical capability gaps must be reported to Project Control rather than converted into new curricula.
- The user's request to “扒公司” is formally interpreted as lawful public-source due diligence only; no private-person investigation, access-control bypass, doxxing or rumor-as-fact is permitted.
- `Internship Readiness Baseline v1` remains the Career thread's first bounded setup output. The opportunity-review workflow becomes the reusable operating method after that baseline.
- Current execution priority remains unchanged: Python main line; Algorithm active structured line; Linux support; C++ support for algorithm implementation; Career / Internship Preheat / on-demand.
- Review this workflow after the first 3–5 concrete internship opportunities to ensure it improves decisions without creating excessive overhead.

## Decisions

### CTV-20260821-05 — Adopt Career Opportunity Review & Company Due Diligence Workflow

- Date: 2026-08-21
- Responds to: `VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence`
- Decision: Adopt with lightweight implementation
- Rationale:
  - The user explicitly wants the dedicated internship branch to repeatedly evaluate concrete roles and investigate companies deeply enough to support high-quality decisions.
  - A reusable workflow reduces repeated ad-hoc analysis while keeping the Career thread focused on evaluation rather than technical curriculum creation.
  - The workflow produces market evidence at low execution cost and fits the existing Preheat / on-demand role.
  - Public-source company due diligence is useful for distinguishing technically valuable opportunities from weak, misleading or risky postings.
- Evidence considered:
  - `09_Career/STATUS.md`: Career already owns readiness assessment and concrete opportunity evaluation in Preheat state.
  - `CTV-20260820-03`: First-Internship Readiness Framework remains active.
  - `CTV-20260821-04`: Dedicated Career / Internship Preheat thread is formally established.
  - `VTC-20260821-01`: Voyage Room proposes a bounded five-stage review process and explicit privacy/ethics boundary.
  - User request: Career should assess whether a role fits and investigate the company sufficiently for a decision.
- Standard opportunity-review sequence:
  1. **Role Reality Check** — separate actual responsibilities, hard filters, must-haves, preferences, engineering environment and likely evidence value.
  2. **Verified User Fit** — compare only against current Horizon evidence; classify each requirement as Already demonstrated / Partially demonstrated / Missing but learnable / Hard blocker.
  3. **Company & Team Due Diligence** — use lawful public sources, prioritizing official, regulatory, company, university and established recruitment sources; treat forums and social media as lower-confidence reputation evidence.
  4. **Risk / Value Verdict** — summarize legitimacy confidence, technical-content quality, current fit, learning value, long-term alignment, time/location compatibility and material risk.
  5. **Feedback Loop** — after application/interview, record screening results, questions, employer concerns, practical constraints and outcomes.
- Standard action vocabulary:
  - **PRIORITY APPLY** — unusually strong fit or evidence value; deserves prompt attention subject to Project Control capacity.
  - **APPLY** — worth a low-cost application or interview as an evidence experiment.
  - **WATCH** — potentially useful but timing, readiness or uncertainty is not yet favorable.
  - **SKIP** — hard mismatch, weak technical value, excessive opportunity cost or unacceptable risk.
- Gap-routing rule:
  - **Local application gap:** resume wording, project explanation, communication, company-specific preparation → Career may handle.
  - **Technical capability gap:** Linux, C++, algorithms, embedded/system capability, etc. → report to Project Control; Career must not start a curriculum.
  - **Structural mismatch:** degree level, graduation year, geography, duration or schedule → classify as structural; do not waste technical resources trying to solve it.
  - Repeated technical gaps across multiple high-fit opportunities should be escalated to Project Control for resource review.
- Privacy / ethics boundary:
  - Company investigation means lawful public-source due diligence.
  - Do not seek private personal data, doxx individuals, bypass access controls, obtain non-public credentials/documents, or present rumor as verified fact.
  - Absence of negative search results is not proof of safety.
- Resource or priority implication:
  - No change to current technical priority order.
  - Career remains Preheat / on-demand.
  - No daily internship browsing quota or continuous application push is authorized.
  - `Internship Readiness Baseline v1` remains the first bounded Career output.
  - After the baseline, Career may use this workflow whenever the user supplies a concrete JD, screenshot, company or opportunity.
- Explicit non-goals:
  - no new technical curriculum from a single JD;
  - no continuous high-intensity Career line before a formal activation trigger;
  - no employer-prestige optimization over technical content;
  - no displacement of Python, Algorithm, Linux support or current competition priorities;
  - no intrusive personal investigation.
- Constraints the Voyage Room must use:
  - Treat Career as the single evaluation entry point for concrete internship opportunities, but not as the owner of technical learning priorities.
  - Continue surfacing market evidence only when it materially affects readiness, timing, risk or opportunity cost.
- Further research question: None immediately.
- Expected output:
  - Career should complete `Internship Readiness Baseline v1`, then use a lightweight reusable Opportunity Review / Company Due Diligence format for concrete opportunities.
- Review trigger or date:
  - After the first 3–5 concrete internship opportunities are processed through Career, or earlier if the workflow creates excessive overhead or repeated market evidence changes a technical readiness assumption.
- Status: Active

### CTV-20260821-04 — Establish Dedicated Career / Internship Preheat Thread

- Date: 2026-08-21
- Trigger: Explicit user request to open a dedicated internship branch.
- Decision: Approve thread creation in **Preheat** state; do not activate a continuous high-intensity Career line.
- Rationale:
  - A dedicated thread gives internship readiness, concrete opportunity evaluation, resume/portfolio preparation and future application execution a clear responsibility boundary.
  - The request can be satisfied without violating the one-main-line principle because Preheat carries no continuous execution allocation.
  - Keeping technical curricula outside the Career thread prevents job descriptions from fragmenting Python, Algorithm, Linux, C++ or future Embedded work.
  - A one-time readiness baseline is a low-cost coordination artifact that can expose real gaps without turning internship preparation into a parallel roadmap.
- Evidence considered:
  - `MASTER_STATUS.md`: Python remains main; Algorithm is active; Linux is support; C++ is support; the First-Internship Readiness Framework is already adopted.
  - `09_Career/`: directory existed but had no `STATUS.md`, so Career was not yet a formally governed specialist thread.
  - `VTC-20260820-02`: Voyage Room recommended eventual bounded Career activation around a real application window rather than continuous high-intensity preparation.
  - User request: explicit desire for a dedicated internship branch.
- Resource or priority implication:
  - No change to Python, Algorithm, Linux or C++ priority.
  - Create `09_Career/STATUS.md` with `Status: Preheat`.
  - Allow one bounded setup output: `Internship Readiness Baseline v1`.
  - After that output, Career / Internship remains on-demand until a formal trigger justifies seasonal activation.
- Thread boundary:
  - May assess readiness against the Application Ready Gate.
  - May evaluate concrete internship opportunities and job descriptions.
  - May prepare resume/portfolio/application strategy and interview execution when authorized.
  - May report technical gaps to Project Control.
  - May **not** create independent Python, C++, Linux, Algorithm, Embedded, AI, ROS2, CUDA, OpenCV or interview-grinding roadmaps.
  - May not change cross-thread priority or activate other specialist lines.
- Activation triggers:
  - Student Manager V2 completion;
  - first verified Linux milestone;
  - a presentable engineering project;
  - confirmation of early-2027 winter-break availability;
  - a concrete high-fit internship opportunity;
  - explicit Project Control authorization of a seasonal application window.
- Relationship to `CTV-20260820-03`:
  - The overall First-Internship Readiness Framework remains active.
  - Only the prior statement that Career is fully inactive is superseded; Career is now Preheat / on-demand, not Active.
- Constraints the Voyage Room must use:
  - Treat the dedicated Career thread as an organizational boundary, not evidence that internship preparation has become a new main line.
  - Do not infer that Embedded, AI or Embodied AI should now activate.
  - Continue to surface concrete market evidence only when it materially changes readiness, timing or opportunity cost.
- Further research question: None immediately.
- Expected output: Career / Internship thread should produce its bounded readiness baseline, then remain low-intensity until a trigger occurs.
- Review trigger or date: Completion of Internship Readiness Baseline v1 or any activation trigger above.
- Status: Active

### CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework

- Date: 2026-08-20
- Responds to: `VTC-20260820-02 — Internship-Aligned Capability Planning Review`
- Decision: Adopt with bounded scope and deferred execution triggers
- Rationale:
  - Treating a first technical internship as an evidence-generating engineering experiment is consistent with the Charter's evidence-over-imagined-fit principle.
  - The proposed readiness dimensions mostly compound work already approved in Python, Algorithm, C++ and Linux rather than requiring a parallel curriculum.
  - The recommendation explicitly protects GPA, competition priorities and the one-main-line rule.
  - Current evidence does not justify activating Embedded, Career, AI or Embodied AI as continuous execution lines.
- Evidence considered:
  - `MASTER_STATUS.md`: Python remains main; Algorithm is active in Block 01 with sorting current; Linux is support; C++ readiness gate has passed and C++ is support.
  - `01_Python/STATUS.md`: current formal milestone is OOP through Student Manager V2.
  - `02_CPP/STATUS.md`: standalone preheat is complete; C++ is sufficient for current Algorithm work.
  - `03_Linux/STATUS.md`: no verified Linux milestone is recorded yet, making practical Linux workflow the clearest current support-evidence gap.
  - `05_Algorithm/STATUS.md`: structured Algorithm study is active and should remain the source of baseline screening readiness rather than creating a second interview roadmap.
  - Current competition plan: mathematics Primary, physics Secondary / interest validation, Lanqiao baseline attempt.
- Resource or priority implication:
  - **No immediate priority-order change.**
  - Python remains the main line through the current Student Manager V2 milestone.
  - Algorithm continues its approved block route one topic at a time.
  - C++ remains support only.
  - Linux receives the next explicit support-milestone priority when capacity permits, but must be integrated with real programming work and must not become an independent curriculum.
  - Embedded receives no active execution resources now.
  - Career's original fully inactive clause is superseded only by `CTV-20260821-04`, which establishes a Preheat / on-demand thread without continuous allocation.
- Provisional **Application Ready Gate**:
  1. At least one presentable engineering project that runs, has a clear README, and can be explained in terms of design choices, debugging and limitations.
  2. C/C++ fluency sufficient for small modules and debugging without syntax/STL being the primary blocker.
  3. Verified practical Linux workflow evidence covering command line/filesystem, Git/tooling, compile/run/debug, environment/package use and basic shell use in real work.
  4. Basic algorithm/data-structure competence from the approved Algorithm route, sufficient for entry-level screening without a separate high-volume interview roadmap.
  5. Ability to explain projects, reproduce bugs, document work and communicate technical decisions.
  6. A credible continuous availability window for the target internship period.
- Linux milestone trigger and boundary:
  - Prefer activation of one bounded Linux milestone after Student Manager V2 is complete, unless a real Python/C++ task creates an earlier natural need.
  - The milestone should use a real programming task to demonstrate filesystem/CLI use, Git/tooling, compile/run/debug and environment/package management.
  - Do not create a broad standalone Linux curriculum.
- Embedded experiment trigger:
  - Do not activate Embedded now.
  - Reconsider only when the current main-line milestone has completed or handed off, execution capacity is not under acute academic/competition pressure, and there is either suitable hardware access or a concrete project/opportunity that can justify one bounded output.
  - Any activation must begin with one small hardware-software integration experiment and one verifiable deliverable, not a general STM32/MCU roadmap.
- Career activation trigger:
  - Career now exists in Preheat state under `CTV-20260821-04`.
  - Review promotion to a bounded Active / Support role when winter-break availability for early 2027 is known, when the Application Ready Gate is substantially satisfied, or when a concrete high-fit opportunity appears.
  - A sophomore winter pilot may be used as a low-cost evidence experiment if readiness and availability support it.
  - Summer 2027 remains the default primary serious first-internship window unless stronger evidence changes the plan.
- Explicitly not authorized:
  - opening multiple new technical lines;
  - ROS2 + STM32 + CUDA + OpenCV + advanced C++ in parallel;
  - a second LeetCode/interview-grinding roadmap;
  - internship prestige optimization at the expense of technical content;
  - treating job descriptions as a personal curriculum;
  - any internship preparation that displaces GPA/core coursework or the current mathematics competition priority without a separate control decision.
- Constraints the Voyage Room must use:
  - Treat this as a readiness framework, not a forecast that a specific internship will be obtained.
  - Preserve broad robotics / embedded / systems / AI-deployment optionality without prematurely activating those lines.
  - Surface external internship-market evidence only when it materially changes the minimum readiness hypothesis, timing or opportunity cost.
- Further research question:
  - None required immediately. When a concrete internship window or opportunity appears, research the actual role requirements, location/duration constraints and market evidence before Project Control upgrades the application plan.
- Expected output:
  - Voyage Room should treat the framework as adopted and avoid recommending new continuous execution lines unless new evidence justifies them.
- Review trigger or date:
  - completion of Student Manager V2;
  - first verified Linux milestone;
  - a presentable engineering project;
  - major Algorithm block milestone;
  - confirmation of winter 2027 availability;
  - discovery of a concrete high-fit internship opportunity;
  - any specialist thread reporting `Needs Master Decision: Yes` on this plan.
- Status: Active

### CTV-20260816-02 — Remove Astronomy From Current Strategic Route

- Date: 2026-08-16
- Trigger: User clarification that astronomy was mentioned casually and should not influence the long-term route for the foreseeable future.
- Decision: Remove astronomy from the current strategic scope.
- Rationale:
  - A casual interest expression should not be promoted into a durable strategic hypothesis.
  - Keeping astronomy in the route would create false optionality and distort academic and research planning.
  - The Charter's evidence-governance principle requires current planning to reflect durable, decision-relevant interests rather than isolated remarks.
- Resource or priority implication: None. No execution resources were allocated to astronomy, and none should be allocated now.
- Constraints the Voyage Room must use:
  - Do not use astronomy as a factor in academic-route, research-route, graduate-study or career recommendations unless the user explicitly reopens it in the future.
  - Update Voyage-owned strategic documents to remove astronomy from current facts, options, recommendations and open questions.
  - Preserve physics as a separate academic interest; do not infer that removing astronomy also removes physics.
- Further research question: None.
- Expected output: Voyage Room strategic documents should reflect astronomy as out of current scope.
- Review trigger or date: Only if the user explicitly reopens astronomy as a meaningful long-term interest.
- Status: Complete

### CTV-20260816-01 — Acknowledge Long-Term Strategic Research Map

- Date: 2026-08-16
- Responds to: `VTC-20260816-01 — Establish Long-Term Strategic Research Map`
- Decision: Adopt as advisory reference framework
- Rationale:
  - The Voyage Room correctly separates verified facts, assumptions, options, recommendations and important unknowns.
  - Its recommendation preserves optionality and does not request premature specialization or resource reallocation.
  - The proposed evidence program — projects, competitions, internships, research exposure and future application/funding realities — is consistent with Project Horizon's evidence-driven governance.
  - Current execution should remain narrow while strategic exploration remains broad.
- Evidence considered:
  - `MASTER_STATUS.md`: Python remains the main line; Linux is support; C++ is preheat; Algorithm is not fully activated.
  - Relevant specialist `STATUS.md`: no specialist evidence currently justifies a major route change.
  - Opportunity Radar: active as an external factual opportunity source; no opportunity currently requires strategic reallocation.
  - Voyage Room: `LONG_TERM_DIRECTION.md`, `PERSONAL_PROFILE.md`, `OPEN_QUESTIONS.md`, and `VOYAGE_TO_CONTROL.md` establish a coherent initial strategic map.
  - Current real-world constraints: GPA and foundations remain important; financial feasibility is a first-class future education constraint; execution capacity must remain limited.
- Resource or priority implication: None. No new execution line, time allocation or country/degree commitment is approved by this decision.
- Constraints the Voyage Room must use:
  - Preserve the distinction between exploration and execution.
  - Treat Germany / Europe, US research, domestic routes and other international options as hypotheses until current evidence supports narrowing.
  - Do not convert current interests into a fixed identity without sustained evidence.
  - Continue to account for funding, total cost, downside risk, health, GPA and opportunity cost.
- Further research question: None assigned at present. Continue maintaining open questions and surface only strategically meaningful updates.
- Expected output: Future Voyage transmissions only when new evidence materially changes a hypothesis, risk, option or recommended experiment.
- Review trigger or date: Review after meaningful sophomore-year academic, project, competition, internship or research evidence; earlier if finances, policy, funding or motivation materially change.
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
