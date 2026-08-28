# Project Horizon — Horizon Liaison / 联络中继 Proposal

Last Updated: 2026-08-28
Owner: Voyage Room
Status: Proposal — Awaiting Project Control Decision

## 1. Problem

Project Horizon currently has strong role boundaries and two dedicated strategic bridges:

- Voyage Room → Project Control: `VOYAGE_TO_CONTROL.md`
- Project Control → Voyage Room: `CONTROL_TO_VOYAGE.md`

This works well for formal strategic communication, but a gap has appeared for **cross-chat operational feedback that matters yet does not justify a specialist STATUS update**.

The first concrete example appeared during the HZN-001 trial:

- Algorithm Specialist invoked HZN-001;
- the Skill-only trial did not create an Algorithm milestone, blocker or route change;
- therefore writing `05_Algorithm/STATUS.md` merely to log the trial would have violated the meaningful-update rule;
- Main Control has a bridge to Voyage, but Specialist Threads do not have an equivalent general-purpose communication path;
- as a result, useful feedback can become trapped in one chat and require the user to manually relay it.

This is a communication-routing problem, not a new strategy or technical-work problem.

## 2. Proposal

Establish a bounded specialist/support thread:

**Horizon Liaison / 联络中继**

Proposed path:

`12_Liaison/`

Proposed state:

**Active — Bounded Support / Event-Driven**

Primary responsibility:

> Route concise, evidence-labeled information between Project Horizon roles when that information is useful to another role but does not naturally belong in the source role's normal STATUS / strategic bridge.

Horizon Liaison is a **message router**, not a fourth governance layer.

## 3. What Liaison May Do

Liaison may:

- receive user-reported cross-chat information and label it clearly as user-reported;
- read relevant specialist STATUS files, MASTER_STATUS and strategic bridges to verify formal state;
- distinguish verified GitHub state from user-reported chat outcomes;
- normalize a message into a concise routing record;
- route messages to Main Control, Voyage Room, or a named specialist by maintaining Liaison-owned pending-message files;
- track whether a message has been delivered / acknowledged / closed when evidence exists;
- summarize multiple small cross-thread messages into one digest when useful;
- identify when a message is actually a `Needs Master Decision`, strategic question, or specialist execution issue and route it to the proper owner.

## 4. What Liaison May Not Do

Liaison may not:

- make strategic decisions;
- allocate execution resources;
- activate, pause or reprioritize threads;
- interpret a Voyage recommendation as adopted Control state;
- modify `MASTER_STATUS.md`;
- modify `VOYAGE_TO_CONTROL.md` or `CONTROL_TO_VOYAGE.md`;
- modify another specialist's `STATUS.md`;
- turn informal user reports into verified facts;
- create standing polling or daily reporting overhead;
- become a general project manager or universal inbox for trivial chat.

## 5. Proposed Files

If activated, Liaison may own:

```text
12_Liaison/
  STATUS.md
  PENDING_FOR_CONTROL.md
  PENDING_FOR_VOYAGE.md
  PENDING_FOR_SPECIALISTS.md
  RELAY_LOG.md
```

All are single-writer Liaison-owned files.

Other roles may read them but not write them.

### `PENDING_FOR_CONTROL.md`

Contains only unresolved messages whose correct destination is Main Control.

### `PENDING_FOR_VOYAGE.md`

Contains only unresolved messages whose correct destination is Voyage Room.

### `PENDING_FOR_SPECIALISTS.md`

Contains unresolved messages routed to named specialist threads.

### `RELAY_LOG.md`

Compact audit trail for meaningful routed messages and their disposition.

Do not log trivial conversation.

## 6. Message Shape

A routed message should use a compact structure:

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

The goal is reliable routing, not bureaucracy.

## 7. Intake Rules

### Verified repository information

If the message comes from a STATUS / bridge / evidence file, Liaison may report it as verified repository state.

### User-reported cross-chat information

If the user says, for example:

> “算法线刚跑了 HZN-001，发现 X。”

Liaison records:

- Source: Algorithm Specialist
- Evidence Type: **User-Reported**
- the exact claimed outcome without upgrading it into formal Algorithm state.

If repository evidence can corroborate part of the claim, Liaison may separately identify that verified portion.

### Meaningful-status threshold

Liaison must never pressure a specialist to update STATUS merely to create a message source.

If the event independently meets the normal STATUS threshold, the specialist should update its own STATUS and Liaison can route from that verified state.

## 8. Delivery Model

Because Horizon chats do not share live conversation state, delivery is asynchronous through GitHub.

When Main Control performs an important task where pending cross-thread messages may matter, HZN-001 can eventually be revised—after Control approval—to conditionally read `12_Liaison/PENDING_FOR_CONTROL.md`.

Likewise, Voyage Room can conditionally read `PENDING_FOR_VOYAGE.md` when relevant.

This should remain conditional rather than becoming another mandatory file read for every routine task.

No HZN-001 change is proposed until Liaison itself is approved.

## 9. Operating Cadence

Default mode: **event-driven only**.

Typical invocation:

- user asks Liaison to relay a message;
- user asks Liaison to synchronize meaningful changes;
- another role identifies a cross-chat message worth routing;
- a Skill trial or cross-thread issue needs a neutral relay path.

No daily check-in and no standing polling quota.

## 10. Example — Algorithm HZN-001 Trial

Without Liaison:

1. Algorithm runs HZN-001.
2. Trial itself is not an Algorithm milestone, so Algorithm correctly does not edit STATUS.
3. Voyage cannot see the detailed result.
4. User manually returns to Voyage and says “算法线跑了一下.”
5. Voyage must reconstruct what happened with incomplete evidence.

With Liaison:

1. User tells Liaison: “算法线刚跑了 HZN-001，结果是 X.”
2. Liaison reads `05_Algorithm/STATUS.md` only to confirm formal Algorithm state was not changed.
3. Liaison records the outcome as **User-Reported**, not verified Algorithm state.
4. Liaison writes one concise item into `PENDING_FOR_VOYAGE.md`.
5. Voyage later reads that item and updates the Skill Trial Log if appropriate.
6. Algorithm STATUS remains clean.

This solves the routing problem without weakening evidence standards.

## 11. Relationship to Existing Governance

The three-layer model remains unchanged:

- Voyage Room = Explore
- Main Control = Decide & Coordinate
- Specialist Threads = Execute

Liaison is an execution/support thread whose only execution product is reliable communication routing.

It has no decision authority.

The strategic bridges remain authoritative for formal Voyage ↔ Control decisions. Liaison does not replace them.

## 12. Success Criteria

Liaison is useful only if it:

- reduces user effort spent carrying messages between chats;
- prevents important cross-thread information from being lost;
- keeps specialist STATUS files clean;
- preserves single-writer ownership;
- distinguishes verified facts from user-reported claims;
- adds very little ceremony.

It should be paused or redesigned if it becomes a second project-management bureaucracy.

## 13. Initial Objective

If activated, the first objective should be:

**Cross-Thread Relay Baseline v1**

Deliverable:

- establish the three pending-message files and relay log;
- route 3–5 real messages across at least two destination types;
- verify that no role ownership is violated;
- measure whether the user actually has to do less manual cross-chat copying.

## 14. Recommendation

Recommend activation as a bounded, event-driven support thread **only if Project Control agrees that the communication gap is recurring enough to justify a dedicated owner**.

If Control believes the need is too small, the fallback is to keep the v0.4 HZN-001 user-relay convention and avoid creating a new thread.

The deciding question is not “Would a Liaison be neat?” but:

> Does the reduction in cross-chat routing friction exceed the maintenance cost of one more bounded support thread?
