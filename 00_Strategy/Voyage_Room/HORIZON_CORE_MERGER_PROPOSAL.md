# Project Horizon — Horizon Core Merger Proposal

Last Updated: 2026-08-29
Owner: Voyage Room
Status: Proposal — Awaiting Project Control Decision

## 1. Trigger

The user explicitly requested that Voyage Room and Main Control merge because the separate-room / bridge / Liaison architecture had become too cumbersome.

This is not merely a preference for fewer files. It is evidence that the current separation is imposing visible coordination cost on the user.

The immediate symptom was the attempt to solve cross-chat communication through a Liaison / OUTBOX / INBOX system. That design is technically workable, but it treats the symptom rather than the root cause: Horizon currently has two top-level chats whose responsibilities are tightly coupled and whose asynchronous bridge increasingly creates overhead.

## 2. Recommendation

Merge the current:

- Voyage Room / strategic exploration role; and
- Main Control / decision and coordination role

into a single top-level role:

# Horizon Core / 核心舱

Recommended role summary:

> **Horizon Core = Explore + Decide & Coordinate**  
> **Specialist Threads = Execute**

This reduces the governance model from three operational roles to two layers while preserving the Explore → Decide → Execute → Learn logic.

## 3. Why Merge

The split originally protected strategic independence and prevented exploratory ideas from becoming execution commitments too quickly.

That benefit remains important, but the separate-chat implementation now creates recurring costs:

- the user must notice and relay that one top-level chat has new information;
- the Voyage ↔ Control bridge requires explicit synchronization;
- recommendations and decisions can temporarily diverge across chats;
- Skill trial feedback exposed awkward cross-role evidence routing;
- solving the communication gap with a dedicated Liaison plus OUTBOX/INBOX transport would add another support mechanism and more governance surface area;
- the user explicitly judges this overhead as too high.

The simpler answer is to preserve **cognitive separation** between exploration and decision without preserving **chat separation**.

## 4. Internal Two-Pass Discipline

Merging the chats must not collapse "interesting idea" into "approved route".

Horizon Core should therefore use two internal modes for major decisions:

### Explore mode

- generate alternatives;
- challenge the current route;
- identify uncertainties and conflicting futures;
- research current external facts;
- state what evidence is missing;
- allow "we do not know yet" as a valid result.

Explore mode does not automatically alter execution priority.

### Decide & Coordinate mode

- compare explored options against current constraints and execution evidence;
- make the temporary decision;
- allocate / preserve / defer resources;
- update `MASTER_STATUS.md` when the formal state materially changes;
- state opportunity cost and review triggers.

For important decisions, the Core should be able to distinguish clearly:

- explored options;
- current decision;
- reasons / evidence;
- what is deliberately not being done;
- what future evidence would reopen the decision.

This preserves the original benefit of Voyage independence without requiring two separate chats.

## 5. Proposed Governance Model

### Layer 1 — Horizon Core / 核心舱

Responsibilities:

- long-term strategic exploration;
- route comparison and scenario analysis;
- priority and resource decisions;
- thread activation / pause / bounded-support decisions;
- cross-thread coordination;
- competition / project / research / study-abroad / career decisions;
- maintenance of `MASTER_STATUS.md`;
- maintenance of strategic analyses and durable route documents;
- deciding when Charter amendments are justified.

### Layer 2 — Specialist Threads

Responsibilities remain unchanged:

- execute within approved scope;
- maintain factual evidence and their own STATUS;
- escalate cross-thread conflicts / strategic decisions to Horizon Core;
- do not redefine long-term direction independently.

## 6. Recommended Surviving Chat

Recommend that the existing **Main Control chat becomes Horizon Core** and absorbs Voyage Room behavior.

Reason:

- Main Control already owns `MASTER_STATUS.md` and cross-thread decisions;
- expanding Main Control to include exploration requires less operational authority migration than granting Voyage Room control ownership;
- this minimizes repository write-boundary changes.

The existing Voyage Room chat should become historical / read-only after a clean handoff.

The user's strategic relationship with Voyage does not disappear; the "远航室" personality/function becomes the Explore mode inside Horizon Core.

## 7. Repository Simplification

If adopted:

1. `MASTER_STATUS.md` remains the formal current-state hub.
2. Existing strategic research documents under `00_Strategy/Voyage_Room/` remain preserved as history and references.
3. `VOYAGE_TO_CONTROL.md` and `CONTROL_TO_VOYAGE.md` are frozen as historical bridge records; no new top-level strategic communication should require them.
4. No physical directory migration is required immediately. Avoid cosmetic churn.
5. Future strategy documents may remain in the existing strategy area until a later low-cost cleanup, but their owner becomes Horizon Core under the amended protocol.
6. `THREAD_PROTOCOL.md` must be updated to define Horizon Core ownership and the two-layer model.
7. Because Charter v3.0 explicitly defines a three-layer governance model, the merger requires an explicit Charter amendment / new Charter version rather than a silent protocol-only change.

## 8. Liaison Proposal Consequence

`VTC-20260828-06 — Horizon Liaison` should be **withdrawn / superseded for Voyage ↔ Control communication** if the Core merger is adopted.

Do not create Liaison merely to solve a top-level split that no longer exists.

A future lightweight Specialist → Core message mechanism may still be considered only if real specialist communication friction persists after the merger. It should be designed from actual post-merger evidence, not preemptively.

## 9. HZN-001 Consequence

HZN-001 v0.4 was adopted under the three-role model and is version-pinned.

If the governance merger is adopted:

- adopted v0.4 remains historical evidence of the first Skill;
- its role model becomes partially stale;
- a candidate HZN-001 v0.5 should later simplify roles to `Horizon Core` and `Specialist Thread`;
- v0.5 must not silently replace adopted v0.4; it requires the normal Project Control / Core review path.

Do not block the merger merely to update the Skill first. Governance should drive the Skill, not the reverse.

## 10. Opportunity Cost and Risk

### Main benefit

- one top-level conversation instead of two;
- no Voyage ↔ Control message-passing burden;
- fewer synchronization files;
- less user coordination overhead;
- exploration and decision happen with the same current context.

### Main risk

Strategic exploration could become too biased toward the current execution plan because the same role both explores and decides.

Mitigation:

- preserve explicit Explore mode;
- for high-impact decisions, require at least one serious alternative / counter-case when evidence supports it;
- allow uncertainty and deferred decisions;
- use external evidence and specialist feedback before major commitments;
- preserve strategic documents as a place where competing hypotheses can coexist.

### What should not be built if merger is adopted

- no Liaison thread for Voyage ↔ Control;
- no OUTBOX/INBOX architecture solely for the former top-level split;
- no duplicate strategy + control status systems;
- no cosmetic repository migration unless it reduces real cost.

## 11. Decision Requested

Project Control is asked to decide whether to:

1. adopt the user's requested Voyage Room + Main Control merger;
2. rename / evolve Main Control into **Horizon Core / 核心舱**;
3. replace the three-role operating model with `Horizon Core = Explore + Decide & Coordinate; Specialist Threads = Execute`;
4. draft the required Charter amendment / next Charter version and update `THREAD_PROTOCOL.md`;
5. freeze the two Voyage–Control bridge files as historical records after handoff;
6. withdraw the current Liaison proposal as unnecessary for top-level communication;
7. preserve HZN-001 v0.4 as adopted historical version and later consider a two-role v0.5 candidate;
8. define a clean one-time handoff so the existing Voyage Room chat can retire without losing strategic documents or unresolved decisions.

## 12. Voyage Room Recommendation

**Adopt.**

The user has provided direct usability evidence that the separate top-level chats now cost more coordination than the governance separation is worth.

The correct simplification is not to weaken strategic thinking, but to move the Explore / Decide separation inside one Core role.

Confidence: High on the simplification value; medium-high on the exact repository cleanup details, which should remain minimal and reversible.