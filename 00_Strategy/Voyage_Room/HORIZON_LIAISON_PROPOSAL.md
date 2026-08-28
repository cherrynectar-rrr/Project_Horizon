# Project Horizon — Horizon Liaison / 联络中继 Proposal

Last Updated: 2026-08-28
Owner: Voyage Room
Status: Proposal — Awaiting Project Control Decision

## 1. Problem

Project Horizon has strong role boundaries and formal Voyage ↔ Control bridges, but Specialist Threads lack a lightweight way to send useful cross-chat information that does not independently justify a `STATUS.md` update.

The HZN-001 Algorithm trial exposed two different gaps:

1. **source → relay gap:** a Specialist may have a useful message but cannot write Liaison-owned files and should not pollute its `STATUS.md` just to transmit it;
2. **relay → destination gap:** even after a message exists in GitHub, another chat does not know it exists until that role next reads the relevant shared state.

Therefore a Liaison thread alone is insufficient unless the transport model is explicit.

This is a communication-routing problem, not a new governance layer or technical-work problem.

## 2. Proposal

Establish a bounded support thread:

**Horizon Liaison / 联络中继**

Proposed path:

`12_Liaison/`

Proposed state:

**Active — Bounded Support / Event-Driven**

Primary responsibility:

> Route concise, evidence-labeled information between Horizon roles when that information matters to another role but does not naturally belong in the source role's normal STATUS or strategic bridge.

Liaison is a message router, not a fourth governance layer.

## 3. Transport Model — Outbox → Relay → Inbox

To reduce manual user relaying, use a **pull-based mailbox model**.

### 3.1 Source-owned OUTBOX

Each participating role may have one role-owned `OUTBOX.md`, for example:

```text
05_Algorithm/OUTBOX.md
11_Academic/OUTBOX.md
09_Career/OUTBOX.md
00_Strategy/Voyage_Room/OUTBOX.md
00_Project_Control/OUTBOX.md
```

A role may write only its own OUTBOX.

The OUTBOX is for concise cross-role messages that:

- are worth communicating;
- do not belong in normal STATUS state;
- do not justify changing execution priority by themselves.

**Important:** this requires explicit Project Control / THREAD_PROTOCOL authorization because current Specialist write rules allow only each thread's `STATUS.md`.

### 3.2 Liaison relay

Liaison reads role-owned OUTBOX files when invoked, verifies evidence labels, and routes messages into Liaison-owned destination inboxes:

```text
12_Liaison/
  STATUS.md
  PENDING_FOR_CONTROL.md
  PENDING_FOR_VOYAGE.md
  PENDING_FOR_SPECIALISTS.md
  RELAY_LOG.md
```

All Liaison files remain single-writer Liaison-owned.

### 3.3 Destination pull

Chats are not live background processes and do not receive push events from each other.

Therefore, on the next **important** session for a role, HZN-001 may—after separate Control approval—conditionally read that role's Liaison pending inbox.

Examples:

- Main Control important session → conditionally read `12_Liaison/PENDING_FOR_CONTROL.md`;
- Voyage Room important session → conditionally read `12_Liaison/PENDING_FOR_VOYAGE.md`;
- Algorithm important session → conditionally inspect messages addressed to Algorithm in `PENDING_FOR_SPECIALISTS.md`.

This is a **pull** model. It means the destination learns the message automatically when that role next starts relevant work, without the user needing to restate the content.

It does **not** mean a dormant chat wakes up by itself.

## 4. Optional Near-Push Mode

If the user later wants near-real-time delivery, Project Control may separately consider a scheduled Liaison watcher that periodically processes OUTBOX files and notifies the user of important unread messages.

That would still not make dormant chat windows execute in the background; it would only keep GitHub mailboxes fresh and surface notifications.

No standing polling is part of this proposal by default.

## 5. What Liaison May Do

Liaison may:

- read authorized role-owned OUTBOX files;
- receive user-reported cross-chat information and label it `User-Reported`;
- distinguish verified GitHub state, user reports, and external verified facts;
- normalize a message into a compact routing record;
- place it in the correct Liaison-owned pending inbox;
- track delivered / acknowledged / closed status when evidence exists;
- identify whether an item belongs to Main Control, Voyage Room, or a Specialist.

## 6. What Liaison May Not Do

Liaison may not:

- make strategic decisions;
- allocate resources;
- activate, pause, or reprioritize threads;
- modify `MASTER_STATUS.md`;
- modify `VOYAGE_TO_CONTROL.md` or `CONTROL_TO_VOYAGE.md`;
- modify another thread's `STATUS.md` or `OUTBOX.md`;
- convert user-reported information into verified thread state;
- create daily reporting rituals or a project-management bureaucracy.

## 7. Message Shape

```markdown
### MSG-YYYYMMDD-NN — Short Title

Source: Algorithm / Academic / Voyage / Control / User
Destination: Voyage / Control / <Specialist>
Evidence Type: Verified GitHub / User-Reported / External Verified
Priority: Normal / Important / Urgent
Status: Pending / Delivered / Acknowledged / Closed

Summary:
- ...

Action Requested:
- ...

Evidence:
- repository path / bridge entry / user report / source
```

## 8. Evidence Rules

### Verified GitHub

Use only when the content is supported by formal repository state or verifiable artifact.

### User-Reported

Use when the user relays an outcome from another chat. Preserve the claim without silently upgrading it into verified execution state.

### Specialist OUTBOX

A message written by a Specialist into its authorized OUTBOX proves that the Specialist intentionally transmitted the message, but it does not automatically make every substantive claim inside the message a verified milestone. Evidence links still matter.

## 9. STATUS Boundary

OUTBOX exists specifically so Specialist Threads do **not** need to pollute `STATUS.md` with communication-only events.

Normal STATUS rules remain unchanged:

- milestones;
- blockers;
- route changes;
- meaningful next-milestone changes;
- `Needs Master Decision` when appropriate.

If an event independently meets the normal STATUS threshold, the Specialist should still update its own STATUS.

## 10. Example — Algorithm Sends Skill Feedback Without User Relay

1. Algorithm invokes HZN-001 during a normal technical session.
2. The Skill test is not an Algorithm milestone, so `05_Algorithm/STATUS.md` stays unchanged.
3. Algorithm writes a concise message to its own authorized `05_Algorithm/OUTBOX.md` addressed to Voyage Room.
4. Liaison, when next invoked or processed by an optional scheduled watcher, reads the OUTBOX and places the item into `12_Liaison/PENDING_FOR_VOYAGE.md`.
5. The next important Voyage Room session runs HZN-001, sees the pending inbox item, and incorporates the feedback.
6. The user never has to say “算法线刚刚跟你说了什么”.

This is the desired end state.

## 11. Important Limitation

Without a scheduled watcher, Liaison itself is also not a background process.

Therefore the system provides **automatic discovery on next relevant session**, not instantaneous chat-to-chat push.

That distinction should remain explicit so Horizon does not pretend separate chat windows can read each other's live conversation state.

## 12. Governance Change Required

If Project Control adopts the Outbox model, `THREAD_PROTOCOL.md` should be amended narrowly to authorize:

- each participating Specialist to write its own `OUTBOX.md` in addition to its own `STATUS.md`;
- Voyage / Control to write only their own OUTBOX files if used;
- Liaison to read OUTBOX files and write only Liaison-owned inbox/log files;
- no role may edit another role's OUTBOX.

This is a transport permission, not new decision authority.

## 13. Initial Objective

If activated:

**Cross-Thread Relay Baseline v1**

Deliverable:

- establish source-owned OUTBOX convention for a small pilot set of roles;
- establish Liaison pending inboxes and relay log;
- route 3–5 real messages across at least two destination types;
- verify single-writer boundaries;
- verify at least one destination discovers a message through startup pull without manual user restatement;
- measure whether user relay burden actually decreases.

## 14. Recommendation

Recommend a bounded pilot only if Project Control agrees the communication gap is structural enough to justify it.

The preferred design is now:

> **Source-owned OUTBOX → Liaison routing → destination-owned startup pull**

not merely "user tells Liaison, Liaison stores it".

If the maintenance cost is too high, retain the simpler HZN-001 user-relay fallback.
