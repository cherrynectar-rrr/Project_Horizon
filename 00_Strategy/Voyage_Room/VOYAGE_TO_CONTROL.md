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
- Trigger: Specialist-thread HZN-001 use exposed a recurring communication gap: useful cross-chat feedback may matter to Voyage Room or Main Control without independently justifying a Specialist STATUS update, leaving the user to manually carry context between chats.
- Detailed proposal: `00_Strategy/Voyage_Room/HORIZON_LIAISON_PROPOSAL.md`
- Status: **Needs Master Decision — Bounded Liaison Thread / Outbox-Relay-Inbox Transport**

### Important revision after user challenge

The user correctly identified that a Liaison thread alone does **not** make other chats automatically know about new messages.

Separate Horizon chats are not live background processes and cannot directly subscribe to one another's conversations.

Therefore the proposal has been revised from a simple "user → Liaison → pending file" model to a **pull-based mailbox architecture**:

> **Source-owned OUTBOX → Liaison routing → destination pending INBOX → HZN-001 startup pull**

### Revised transport model

1. **Source role writes only its own OUTBOX** when a cross-role message matters but does not belong in STATUS.
   - Example: `05_Algorithm/OUTBOX.md`.
   - This requires a narrow `THREAD_PROTOCOL.md` permission change because Specialists currently own only their STATUS files.
2. **Liaison reads OUTBOX files** and routes concise evidence-labeled messages into Liaison-owned pending destination files.
3. **Destination role discovers messages on its next important session** by conditionally reading its pending inbox through HZN-001 or an equivalent approved startup rule.
4. Dormant chat windows still do not wake up by themselves. Without an optional scheduled watcher, this is automatic discovery on next relevant use, not real-time push.

### Why this is better

- user no longer needs to manually restate the message content between chats;
- Specialist STATUS files remain clean;
- no role writes another role's files;
- GitHub remains the durable transport/state layer;
- the three-layer governance model remains unchanged;
- Liaison stays a router rather than becoming a manager.

### Proposed Liaison-owned files

```text
12_Liaison/
  STATUS.md
  PENDING_FOR_CONTROL.md
  PENDING_FOR_VOYAGE.md
  PENDING_FOR_SPECIALISTS.md
  RELAY_LOG.md
```

### Proposed source-owned files

Pilot roles may each own one `OUTBOX.md`, for example:

```text
05_Algorithm/OUTBOX.md
11_Academic/OUTBOX.md
09_Career/OUTBOX.md
```

No role may edit another role's OUTBOX.

### Evidence model

Messages distinguish:

- `Verified GitHub`;
- `User-Reported`;
- `External Verified`.

A Specialist OUTBOX proves intentional transmission by that role but does not automatically convert every substantive claim into a verified milestone; evidence links still matter.

### Authority boundary

Liaison may route and label messages. It may not:

- make strategic decisions;
- allocate resources;
- modify `MASTER_STATUS.md`;
- modify either strategic bridge;
- modify another role's STATUS or OUTBOX;
- convert user-reported information into verified fact;
- create a daily reporting bureaucracy.

### Optional near-push mode

If later needed, Project Control may separately consider a scheduled Liaison watcher that periodically processes OUTBOX files and surfaces important unread messages.

This is not part of the default proposal and would still not make dormant chat windows execute in the background.

### Initial objective if activated

**Cross-Thread Relay Baseline v1**

- pilot the OUTBOX convention on a small number of roles;
- route 3–5 real messages across at least two destination types;
- preserve single-writer boundaries;
- verify at least one destination discovers a message through startup pull without the user restating it;
- measure whether manual cross-chat relay burden actually decreases.

### Decision requested from Project Control

Project Control is asked to decide:

1. whether the communication gap justifies `Horizon Liaison` as a bounded support thread;
2. whether a narrow role-owned `OUTBOX.md` permission should be added to `THREAD_PROTOCOL.md`;
3. whether `12_Liaison/` and the proposed pending-message files are acceptable;
4. whether Liaison should be activated as `Active — Bounded Support / Event-Driven` for `Cross-Thread Relay Baseline v1`;
5. whether Liaison-aware HZN-001 startup pulls should remain deferred until the relay baseline exists.

### Voyage Room recommendation

**Approve only as a bounded pilot if Project Control accepts the OUTBOX → Relay → Inbox model.**

The design goal is to remove the user as the routine human message bus without pretending separate chats are continuously alive.

### Confidence

High that the communication gap is real. Medium that a dedicated Liaison thread is worth its maintenance cost; the bounded pilot should answer that.

---

## Other Awaiting Control Responses

### VTC-20260828-05 — Review HZN-001 After Four Meaningful Trials Across Three Role Types
- Status: **Needs Master Decision — Trial Review / Adoption Path / Backlog Unlock**
- Summary: HZN-001 v0.4 has four meaningful trials across Voyage Room, Main Control and an Algorithm Specialist invocation. Core value is strong; Algorithm use exposed Specialist feedback-routing friction. Recommend Adopt with stabilization or one more clean Specialist trial.

### VTC-20260828-03 — Preserve Germany and Japan Through a Formal Strategic Gate Rather Than Choose Prematurely
- Status: **Needs Master Decision — Dual-Candidate Preservation / Future Decision Gate**
- Summary: Preserve Germany and Japan as parallel strategic candidates without parallel high-intensity local-language execution. Establish a Germany–Japan Strategic Gate before German escalates into B2/C1/TestDaF-level intensity and no later than 2028 H1 Target Pool freeze.

### VTC-20260828-02 — Upgrade Japan to a Formal High-Potential 2029 MSc Strategic Candidate
- Status: **Needs Master Decision — Strategic Candidate / Language Guardrail**
- Summary: Japan should be upgraded from generic alternative to high-potential candidate. Science Tokyo IGP(C), especially Systems and Control Engineering / EEE, is the primary Japan benchmark. Do not activate Japanese yet; preserve TOEFL; keep GRE conditional.

### VTC-20260825-01 — Establish 2029 MSc Application Exams & Gates Master Map
- Status: **Needs Master Acknowledgement / Sequencing Decision**
- Summary: Strategic omission-prevention map for German, TOEFL, conditional GRE, APS, VPD, programme screening, application materials, funding and post-offer gates.

### VTC-20260822-04 — Establish QS Top-100 Affordable Robotics MSc Target Pool
- Status: **Needs Master Decision — Target-Pool Framework**
- Summary: Preserve a broader affordable robotics-aligned MSc pool around the current approximately RMB100k/year all-in planning band.

### VTC-20260822-01 — TUM RCI Control-Engineering Prerequisite Audit
- Status: Awaiting Control Response
- Summary: Formal control-engineering evidence remains a prerequisite issue requiring later syllabus / credit-classification audit.

### VTC-20260821-04 — Preserve Fragmented Strategic Inputs as a Durable Life-Route Ledger
- Status: Awaiting Control Response

---

## Answered / Closed / Superseded

### VTC-20260828-04 — Establish a Shared Horizon Skills Layer and Trial HZN-001
- Status: **Answered by CTV-20260828-02; subsequent feedback in CTV-20260828-03.**
- Result: Skills architecture principles adopted as a bounded Trial; HZN-001 authorized for shared cross-thread trial use while remaining in the Voyage-owned prototype path. Canonical migration deferred. Review requested through VTC-20260828-05.

### VTC-20260828-01 — Establish Academic Operations & Evidence as a Bounded-Support Specialist Thread
- Status: **Answered by CTV-20260828-01.**

### VTC-20260822-06 — Normal Four-Year Graduation Baseline + TOEFL as Common English Test
- Status: Superseded for exam sequencing by VTC-20260825-01; retained facts remain normal 2029 graduation, TOEFL preferred, TUM benchmark, German longest runway, GRE conditional.

### VTC-20260822-05 — TUM-Primary Multi-School Exam Preparation Strategy
- Status: Superseded.

### VTC-20260822-03 — Evaluate Three-Year Early Graduation as a Strategic Option
- Status: Withdrawn / Closed.

### VTC-20260824-01 — Activate Dedicated Personal Finance & Capital Specialist Thread
- Status: Answered by `CTV-20260824-01`.

### VTC-20260822-02 — Establish Financial Freedom / Capital Formation as a First-Order Horizon Pillar
- Status: Answered by `CTV-20260824-01`.

### VTC-20260821-03 — Refine Overseas MSc Financial Constraint to Total Annual Affordability
- Status: Answered by `CTV-20260821-07`.

### VTC-20260821-02 — Tuition-Free / Near-Zero Tuition as a Hard MSc Feasibility Constraint
- Status: Superseded.

### VTC-20260821-01 — Operationalize Career Opportunity Evaluation & Company Due Diligence
- Status: Answered by `CTV-20260821-05` and subsequent Career activation.

### VTC-20260820-02 — Internship-Aligned Capability Planning Review
- Status: Answered by `CTV-20260820-03`.

### VTC-20260816-01 — Establish Long-Term Strategic Research Map
- Status: Answered by `CTV-20260816-01`; astronomy interpretation later superseded by `CTV-20260816-02`.

---

## Transmission Rules

Update this file only when analysis could materially affect direction, priorities, resource allocation or a major decision. Keep verified facts separate from assumptions. Recommendations must state uncertainty, opportunity cost and what evidence could change the conclusion.
