# Voyage Room → Project Control

Last Updated: 2026-08-21
Owner / Sole Writer: Voyage Room
Readers: Project Control and specialist threads
Authority: Advisory only

## Purpose

This is the Voyage Room's formal single-writer channel to Project Control. It carries meaningful long-term judgments, route hypotheses, major recommendations, material risk findings and questions requiring control-level judgment.

Project Control and specialist threads must not edit this file. Feedback and decisions return through `00_Project_Control/CONTROL_TO_VOYAGE.md`.

---

## Current Transmission

### VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence

- Date: 2026-08-21
- Type: Strategic recommendation / Specialist-thread operating design
- Trigger: Explicit user request that the dedicated internship branch should not only prepare applications, but repeatedly assess whether a concrete role fits the user and investigate the company deeply enough to support a high-quality APPLY / WATCH / SKIP judgment.
- Decision horizon: Immediate Career-thread setup through first serious internship cycle
- Related Charter principles: Evidence over imagined fit; opportunity cost; external information verification; specialist responsibility boundaries; real feedback loops
- Status: Awaiting Control Response

### Executive summary

Following `CTV-20260821-04`, the Career / Internship thread now exists in **Preheat / on-demand** state. The Voyage Room recommends that Project Control formalize one reusable operating workflow for concrete opportunities so the thread becomes the single place to answer four questions:

1. **What is this role really asking for?**
2. **How well does it fit the user's current verified evidence?**
3. **Is the company / team / internship credible and worth the user's time?**
4. **What should Horizon do with the opportunity: PRIORITY APPLY, APPLY, WATCH, or SKIP?**

This workflow should remain evaluative and execution-facing. It must **not** become a new technical curriculum or authorize the Career thread to redirect Python, C++, Linux, Algorithm, Embedded, AI or other specialist work.

### Verified current state

- `CTV-20260820-03` adopted the bounded First-Internship Readiness Framework.
- `CTV-20260821-04` formally established `09_Career/STATUS.md` in Preheat state.
- Career may already evaluate concrete internship opportunities and report technical gaps to Project Control.
- Career may not independently create technical learning roadmaps or change cross-thread priority.
- User explicitly wants the Career branch to become the place where a posted role can be submitted for fit analysis and lawful public-source company investigation.

### RECOMMENDATION — Standard Opportunity Review Workflow

The Voyage Room recommends that Project Control require the Career thread to use a consistent review sequence for any concrete internship opportunity supplied by the user.

#### Stage 1 — Role Reality Check

Extract and separate:

- job title versus actual daily work;
- core responsibilities;
- hard eligibility filters such as graduation year, degree level, location, on-site requirements, weekly days and minimum duration;
- must-have skills versus preferred / bonus skills;
- likely engineering environment and tools;
- whether the role appears to produce real engineering evidence or mainly administrative / labeling / low-value work;
- whether the stated role aligns with C++ / Linux / embedded / electronics / automation / robotics-adjacent / systems / hardware-software integration or another Horizon-relevant capability.

Do not infer requirements that are not present in the JD or reliable external evidence.

#### Stage 2 — User Fit Analysis

Compare the role against **verified current Horizon evidence**, not optimistic self-description.

Suggested dimensions:

- eligibility fit;
- technical fit;
- project / portfolio fit;
- algorithm / screening readiness;
- Linux / tooling readiness;
- communication / documentation readiness;
- availability and geographic fit;
- learning value;
- long-term option value;
- opportunity cost.

The output should distinguish:

- **Already demonstrated**
- **Partially demonstrated**
- **Missing but learnable on the job**
- **Hard blocker**

A numeric fit score may be used only as a compact summary; the evidence-based explanation is primary.

#### Stage 3 — Company & Team Due Diligence

Use lawful public sources to investigate enough of the company and specific team to make an internship-risk judgment.

Recommended categories:

- legal registration / active operating status;
- founding date, registered capital and ownership where relevant and publicly available;
- financing / investors when material;
- main business, products and whether those products appear real and active;
- known customers, partnerships, university / lab relationships or market position when verifiable;
- office location and whether it matches the recruitment claim;
- company size and hiring footprint;
- technology / engineering evidence such as technical blogs, patents, papers, public repositories, product documentation or engineering job patterns;
- recruitment history and whether the same internship appears permanently reposted;
- public employee / candidate discussions, treated as anecdotal rather than fact unless independently corroborated;
- litigation, administrative penalties, abnormal-operation records, wage-arrears allegations, mass-layoff signals or other material risks when publicly verifiable;
- compensation, internship agreement, accommodation / benefits and any unusual payment or fee request;
- whether the advertised team appears to be a core engineering function or peripheral work.

Source discipline:

- prefer official government / company / university / regulatory sources for factual claims;
- use established recruitment platforms for JD details;
- use forums / social media only as lower-confidence reputation evidence;
- explicitly mark uncertainty and conflicting information;
- never treat absence of negative search results as proof of safety.

#### Stage 4 — Risk / Value Verdict

Each opportunity should end with a concise Horizon verdict, for example:

- **Company legitimacy:** High / Medium / Low confidence
- **Technical-content quality:** Strong / Moderate / Weak
- **Current fit:** Strong / Moderate / Weak
- **Learning value:** High / Medium / Low
- **Long-term alignment:** High / Medium / Low
- **Time / location compatibility:** High / Medium / Low
- **Material risk:** Low / Medium / High

Final action category:

- **PRIORITY APPLY** — unusually strong fit or evidence value; should receive prompt attention, subject to Project Control capacity constraints.
- **APPLY** — worth a low-cost application or interview as an evidence experiment.
- **WATCH** — potentially useful but timing/readiness/uncertainty is not yet favorable.
- **SKIP** — low fit, hard eligibility mismatch, weak technical value, excessive opportunity cost or unacceptable risk.

The Career thread may recommend an action category, but any application requiring meaningful new resource allocation remains subject to Project Control.

#### Stage 5 — Application / Interview Feedback Loop

If the user applies or interviews, Career should capture real market feedback:

- resume screen result;
- interview questions;
- project questions;
- technical failures or strengths;
- employer concerns;
- compensation / duration / location realities;
- final outcome.

Career should classify each gap as either:

1. **Local application gap** — resume wording, project explanation, interview communication, company-specific preparation; Career may handle this within its scope.
2. **Technical capability gap** — e.g. Linux debugging, C++ concurrency, embedded protocol work, algorithm foundation; Career reports this to Project Control rather than starting a curriculum itself.
3. **Structural mismatch** — degree level, duration, geography, graduation year; do not waste technical resources trying to solve a non-technical constraint.

If a technical gap is repeated across multiple high-fit opportunities or materially changes readiness, raise it to Project Control for resource judgment.

### Privacy / ethics boundary

The user's phrase “把公司所有的东西都扒出来” should be operationalized as **lawful public-source due diligence**, not intrusive personal investigation.

Career should not:

- seek private personal data about employees or founders;
- doxx individuals;
- bypass access controls;
- obtain non-public credentials or documents;
- treat rumor as verified fact.

The goal is decision-quality company intelligence, not personal surveillance.

### Opportunity cost / explicit non-goals

Adopting this workflow should **not** mean:

- browsing internships for hours every day;
- treating every JD as a technical syllabus;
- opening new technical study lines because one employer lists a technology;
- replacing Student Manager V2, Algorithm, Linux support work or current competition priorities;
- chasing employer prestige rather than technical content;
- turning Career Preheat into a continuous high-intensity application line before a formal activation trigger.

The desired operating mode is **on-demand deep evaluation of concrete opportunities**.

### Suggested first bounded output

The existing `Internship Readiness Baseline v1` should remain the Career thread's first setup output.

After that baseline, the Voyage Room recommends one reusable **Opportunity Review / Company Due Diligence template** so future JD screenshots or links can be evaluated consistently without redesigning the process each time.

### Decision requested from Project Control

The Voyage Room asks Project Control to:

1. Decide whether this Opportunity Review / Company Due Diligence workflow should become an explicit Career-thread responsibility.
2. If adopted, encode the bounded workflow or its essential rules in `09_Career/STATUS.md` and/or an appropriate Career-owned operating document.
3. Preserve Career as Preheat / on-demand unless a formal activation trigger occurs.
4. Preserve the rule that Career reports technical gaps to Project Control instead of creating technical curricula.
5. Define whether `PRIORITY APPLY / APPLY / WATCH / SKIP` should be the standard action vocabulary for concrete opportunities.

### Confidence

High that a dedicated evaluation workflow will improve decision quality at low execution cost, because the user is already encountering concrete opportunities and repeatedly needs the same role-fit and company-legitimacy analysis.

Confidence is lower on the exact output schema; Project Control may simplify the template if maintaining it becomes bureaucratic.

### Evidence that would change this recommendation

- Career reviews become so rare that a dedicated workflow creates more overhead than value.
- The Opportunity Radar or another system already provides equivalent verified company and role analysis.
- Career Preheat begins consuming enough time to interfere with the active main/support lines.
- Repeated use shows that a lighter template produces equally good decisions.

### Suggested review trigger

After the first 3–5 concrete internship opportunities have been processed through the Career thread, review whether the workflow is producing useful decisions and market evidence without creating excessive overhead.

---

## Prior Transmission

### VTC-20260820-02 — Internship-Aligned Capability Planning Review

- Date: 2026-08-20
- Type: Strategic recommendation / Resource-planning question
- Decision horizon: Sophomore year through first serious internship window in 2027
- Related Charter principles: Evidence over imagined fit; depth before uncontrolled breadth; reversible experiments; opportunity cost; internships as real feedback
- Status: Answered

### Executive summary

The Voyage Room recommended that Project Control use the first technical internship as a bounded evidence objective while protecting GPA, competitions, execution depth and long-term robotics / embedded / systems / AI-deployment optionality.

The proposed first-internship readiness gate included a presentable engineering project, practical C/C++ fluency, verified Linux workflow evidence, baseline algorithm/data-structure competence, technical communication and a credible availability window.

The Voyage Room recommended keeping Python as the current main line, Algorithm structured, C++ as implementation support, Linux as the clearest support-evidence gap, Embedded dormant until a bounded trigger, and Career seasonal / bounded rather than a continuous high-intensity line.

### Disposition

- Answered by `CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework`.
- Project Control adopted the framework without changing the current main technical priority.
- `CTV-20260821-04` subsequently established a dedicated Career / Internship thread in Preheat / on-demand state.
- Status: Answered

---

### VTC-20260816-01 — Establish Long-Term Strategic Research Map

- Date: 2026-08-16
- Type: Strategic research / Route hypothesis
- Decision horizon: Undergraduate years to early career transition
- Related Charter principle: Preserve optionality, improve judgment quality, separate exploration from execution
- Status: Answered

### Executive summary

The Voyage Room created the first long-term strategic map in `LONG_TERM_DIRECTION.md`, preserving multiple international, engineering and research options without requesting execution reallocation.

### Recommendation

- Maintain narrow current execution while preserving broad strategic exploration.
- Treat Germany / Europe, US research, domestic opportunities and other international routes as hypotheses rather than commitments.
- Use projects, internships, competitions and research exposure as evidence-generating experiments.
- Continue building transferable engineering capability before narrow specialization.

### Disposition

- Answered by `CTV-20260816-01 — Acknowledge Long-Term Strategic Research Map`.
- Project Control adopted the map as an advisory reference framework with no execution-resource change.
- Astronomy-related interpretations were later superseded by `CTV-20260816-02`; astronomy remains outside the current strategic route unless explicitly reopened by the user.
- Status: Answered

---

## Transmission Rules

Update this file only when the analysis could materially affect direction, priorities, resource allocation or a major decision. Do not use it for brainstorming fragments, ordinary conversation, execution updates or diary entries.

Keep verified facts separate from assumptions. Recommendations must state uncertainty, opportunity cost and what evidence could change the conclusion.
