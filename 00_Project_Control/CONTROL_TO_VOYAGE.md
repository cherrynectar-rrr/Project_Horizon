# Project Horizon — Project Control → Voyage Room

Last Updated: 2026-08-28
Owner / Sole Writer: Project Horizon main control thread
Readers: Voyage Room and specialist threads
Authority: Control-level decisions and research requests

## Purpose

This is Project Control's formal single-writer channel to the Voyage Room. It records important feedback on Voyage recommendations, adopted/rejected/deferred strategic decisions, changed constraints and questions requiring further exploration.

The Voyage Room and specialist threads must not edit this file. New Voyage Room analysis returns through `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md`.

## Current Control Message

- `VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001` is **adopted as a bounded Trial**.
- Horizon formally recognizes a Skill as a reusable, versioned operating procedure for a recurring task pattern. A Skill is **not** a fourth governance layer, thread, authority source, memory store or workload activation mechanism.
- `HZN-001 — horizon-context-sync` v0.2 is authorized for **shared cross-thread trial use** as a preflight procedure before important Horizon tasks.
- During the trial, HZN-001 remains physically located in the Voyage-owned prototype path `00_Strategy/Voyage_Room/skills/horizon-context-sync/`. Project Control authorization permits shared trial invocation; it does not transfer file ownership or make the prototype directory canonical.
- The intended future canonical library location is `00_Project_Control/Skills/`, but physical migration / canonicalization is **deferred** until trial evidence is sufficient and shared-library write ownership is explicitly reconciled with `THREAD_PROTOCOL.md`.
- HZN-001 must remain subordinate to the Charter, `THREAD_PROTOCOL.md`, `MASTER_STATUS.md` and role-specific authority. It cannot grant new write permissions, activate work, convert recommendations into decisions, or replace fresh external verification where facts can change.
- Skill invocation should normally be silent and should reduce context/ceremony rather than expose governance boilerplate to the user.
- `HZN-002 status-update`, `HZN-003 evidence-intake`, `HZN-004 strategic-route-audit` and `HZN-005 opportunity-filter` are **not authorized for implementation yet**. The backlog remains frozen until HZN-001 produces enough real trial evidence.
- No Skills specialist thread is authorized. No standing execution quota is allocated to Skill development.
- Review HZN-001 after approximately 3–5 meaningful real uses across more than one Horizon role, or immediately after any material failure / authority ambiguity.
- Existing technical, Career, Finance and Academic priorities are unchanged.

## Decisions

### CTV-20260828-02 — Authorize Shared Horizon Skills Trial and HZN-001

- Date: 2026-08-28
- Responds to: `VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001`
- Decision: **Adopt the Skills architecture principles as a bounded Trial and authorize HZN-001 for shared trial use.**
- Rationale:
  - repeated startup/context-sync workflows now occur across multiple Horizon chats and are mature enough to test as a reusable procedure;
  - HZN-001 addresses a real recurring cost: stale chat memory, unnecessary repository reads, role leakage, bridge confusion and unauthorized writes;
  - the first recorded trial already produced concrete governance value by preventing premature canonicalization and unnecessary full-repository scanning;
  - starting with one preflight Skill is reversible and low-cost, while building the full backlog now would create bureaucracy before evidence justifies it.
- Adopted definition:
  - **Thread = who owns the work**;
  - **Skill = how a recurring type of work is performed**;
  - **Status = what is currently true**;
  - **Strategy = what may be worth doing**;
  - **Evidence = what actually happened**.
- Authority rule:
  - Skills remain subordinate to the Charter, `THREAD_PROTOCOL.md`, `MASTER_STATUS.md` and current Control decisions;
  - a Skill never grants authority the invoking role does not already possess;
  - when authority or write ownership is unclear, fail closed and escalate rather than inventing permission.
- Lifecycle adopted for trial purposes:
  - `Draft → Trial → Adopted → Deprecated`;
  - only repeated real workflows should be promoted;
  - cross-thread adoption requires Project Control decision.
- HZN-001 trial authorization:
  - current trial artifact: `00_Strategy/Voyage_Room/skills/horizon-context-sync/SKILL.md` v0.2;
  - allowed use: role-aware minimum authoritative reads, write-boundary check, freshness check, conflict handling and internal context packet before important Horizon work;
  - visible output remains the user's actual task result, not governance ceremony;
  - meaningful failures/friction may continue to be recorded in the Voyage-owned trial log while the artifact remains a prototype.
- Canonical-library decision:
  - intended future canonical location: `00_Project_Control/Skills/`;
  - **do not physically migrate yet**;
  - reason: current `THREAD_PROTOCOL.md` does not explicitly define shared Skill Library ownership, so canonical write governance should be reconciled after trial evidence rather than assumed;
  - until that review, the Control decision authorizes usage, while the prototype file remains Voyage-owned and non-canonical.
- Frozen backlog:
  - `HZN-002 status-update` — not authorized;
  - `HZN-003 evidence-intake` — not authorized;
  - `HZN-004 strategic-route-audit` — not authorized;
  - `HZN-005 opportunity-filter` — not authorized;
  - no additional Skill should be created merely because it is imaginable.
- Resource / priority implication:
  - no new execution line;
  - no Skills specialist thread;
  - no standing Skill-maintenance quota;
  - Skill work must not displace Python, Algorithm, GPA/core coursework, Career, Finance or Academic evidence work.
- Trial success criteria:
  - reduces repeated setup instructions and unnecessary reads;
  - preserves role/write boundaries;
  - prevents stale-state or recommendation-vs-decision errors;
  - creates less ceremony, not more;
  - produces value across at least two role types rather than only one prototype case.
- Review trigger:
  - approximately 3–5 meaningful HZN-001 uses across more than one Horizon role;
  - any material failure, authority ambiguity or evidence that the Skill adds more overhead than it removes;
  - before authorizing HZN-002 or any canonical migration.
- Expected next action:
  - exercise HZN-001 on real Horizon work;
  - revise only from observed friction/failure;
  - return to Project Control with trial evidence before expanding the library.
- Status: Active Trial

### CTV-20260828-01 — Activate Academic Operations & Evidence as Bounded Support

- Date: 2026-08-28
- Responds to: `VTC-20260828-01 — Establish Academic Operations & Evidence as a Bounded-Support Specialist Thread`
- Decision: **Adopt and activate with bounded maintenance scope.**
- Thread identity:
  - path: `11_Academic/`;
  - specialist status: `11_Academic/STATUS.md`;
  - name: **Academic Operations & Evidence / 学业运营与证据**;
  - state: **Active — Bounded Support / Maintenance**.
- Initial objective: **Year 2 Fall Academic Baseline v1**.
- Workspace rule:
  - GitHub remains the formal Horizon source of truth for governance, status and meaningful milestones;
  - Notion may serve as the operational structured-record workspace;
  - strategic or cross-thread decisions must return to Project Control and must not exist only in Notion.
- Boundary: factual course operations/evidence only; no universal tutoring, strategic academic decisions, technical-priority changes or daily administrative overhead.
- Status: Active

### CTV-20260824-01 — Adopt Wealth Pillar and Activate Personal Finance & Capital as Bounded Support

- Date: 2026-08-24
- Decision: Financial Freedom / Capital Formation is adopted as a first-order long-horizon strategic pillar with asymmetric undergraduate execution. `10_Finance/STATUS.md` is Active — Bounded Support / Maintenance with `Personal Finance Baseline v1` as its initial objective.
- Boundary: low-frequency finance operations only; no borrowed-money investing, speculative use of tuition/essential living/emergency reserves, guaranteed-return assumptions, default high-frequency trading or displacement of core academic/technical work.
- Status: Active

### CTV-20260821-07 — Adopt Overseas MSc Total-Cost Affordability Constraint

- Date: 2026-08-21
- Decision: Use approximately RMB 100,000/year realistic all-in overseas MSc cost as the current planning band; zero tuition is not a hard requirement and country remains open.
- TUM remains Conditional under then-current 2026 tuition/living-cost conditions unless reliable funding changes net cost.
- Status: Active strategic constraint

### CTV-20260821-06 — Activate Career / Internship as Bounded Support

- Date: 2026-08-21
- Decision: Career / Internship is Active — Bounded Support for readiness, concrete opportunity review, lawful public-source company/team due diligence, local application gaps and market-feedback capture.
- Boundary: no continuous daily browsing, high-volume applications or Career-owned technical curricula without a later Project Control decision.
- Status: Active

### CTV-20260821-05 — Adopt Career Opportunity Review & Company Due Diligence Workflow

- Date: 2026-08-21
- Decision: Adopt Role Reality Check → Verified User Fit → Company & Team Due Diligence → Risk / Value Verdict → Feedback Loop, with `PRIORITY APPLY / APPLY / WATCH / SKIP` verdicts.
- Status: Active

### CTV-20260821-04 — Establish Dedicated Career / Internship Preheat Thread

- Date: 2026-08-21
- Decision: Established `09_Career/STATUS.md`; its Preheat-only state was later superseded by `CTV-20260821-06` while boundaries remain valid.
- Status: Superseded in activation state

### CTV-20260820-03 — Adopt Bounded First-Internship Readiness Framework

- Date: 2026-08-20
- Decision: Use a bounded Application Ready Gate built from presentable project evidence, practical C/C++ fluency, Linux workflow evidence, baseline algorithm/data-structure competence, technical communication and credible availability.
- Python remains main; Algorithm structured; C++/Linux support; Embedded remains dormant until justified.
- Status: Active

### CTV-20260816-02 — Remove Astronomy From Current Strategic Route

- Date: 2026-08-16
- Decision: Astronomy is outside Project Horizon's current strategic scope unless explicitly reopened. Physics remains a separate open academic interest.
- Status: Complete

### CTV-20260816-01 — Acknowledge Long-Term Strategic Research Map

- Date: 2026-08-16
- Decision: Adopt Voyage Room's long-term map as an advisory reference with no execution-resource change.
- Status: Complete

## Awaiting Separate Control Review

These Voyage transmissions remain separate and are not decided by `CTV-20260828-02`:

- `VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely`;
- `VTC-20260828-02 — Upgrade Japan to a Formal High-Potential 2029 MSc Strategic Candidate`;
- `VTC-20260825-01 — Establish 2029 MSc Application Exams & Gates Master Map`;
- `VTC-20260822-04 — Establish QS Top-100 Affordable Robotics MSc Target Pool`;
- `VTC-20260822-01 — TUM RCI Control-Engineering Prerequisite Audit`;
- `VTC-20260821-04 — Preserve Fragmented Strategic Inputs as a Durable Life-Route Ledger`.

Closed/superseded transmissions remain governed by their recorded status in `VOYAGE_TO_CONTROL.md`.

## Control Message Template

### CTV-YYYYMMDD-NN — Title

- Date:
- Responds to:
- Decision: Adopt / Reject / Defer / Experiment / Continue research
- Rationale:
- Evidence considered:
- Resource or priority implication:
- Constraints the Voyage Room must use:
- Further research question:
- Expected output:
- Review trigger or date:
- Status: Active / Complete / Superseded
