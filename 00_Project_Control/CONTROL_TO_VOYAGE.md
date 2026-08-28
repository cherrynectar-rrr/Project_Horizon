# Project Horizon — Historical Control → Voyage Bridge

Last Updated: 2026-08-29
Status: **Frozen Historical Record**
Former Owner / Sole Writer: Project Control
Authority: Historical after Horizon Core merger

## Purpose

This file was the formal Project Control → Voyage Room bridge under Charter v3.0.

On 2026-08-29, Project Horizon adopted Charter v4.0 and merged Voyage Room + Main Control into **Horizon Core / 核心舱**.

The former bridge is now frozen. No new top-level communication should be routed through this file.

Current top-level state lives in:

- `00_Project_Charter/Project_Horizon_Charter_v4.0.md`
- `00_Project_Control/THREAD_PROTOCOL.md`
- `00_Project_Control/MASTER_STATUS.md`

Preserved strategic research remains under `00_Strategy/Voyage_Room/`.

---

## Final Handoff Decision

### CTV-20260829-01 — Merge Voyage Room and Main Control into Horizon Core

- Date: 2026-08-29
- Responds to: `VTC-20260829-01 — Merge Voyage Room and Main Control into Horizon Core`
- Decision: **Adopt.**
- User authorization: explicit request to merge the two top-level chats because repeated message relay and proposed Liaison machinery had become too cumbersome.
- New operating model:
  - **Horizon Core / 核心舱 = Explore + Decide & Coordinate**
  - **Specialist Threads = Execute**
- Surviving top-level chat:
  - the existing Main Control chat evolves into Horizon Core;
  - the former Voyage Room chat becomes historical / retired after handoff.
- Strategic safeguard:
  - merger does not remove strategic dissent;
  - major Core decisions preserve an internal two-pass discipline: Explore first, then Decide & Coordinate;
  - Explore may maintain alternatives, challenge the current route and conclude that evidence is insufficient;
  - Explore output does not automatically change execution priority.
- Governance implementation:
  - `Project_Horizon_Charter_v4.0.md` created and becomes the current highest formal Charter;
  - `THREAD_PROTOCOL.md` updated to v2.0 Horizon Core Edition;
  - `MASTER_STATUS.md` transitioned to Horizon Core authority and inherited the unresolved Voyage strategic backlog;
  - Charter README and Starter Pack updated for the new two-layer model.
- Historical bridge rule:
  - `VOYAGE_TO_CONTROL.md` preserves the former Voyage Room's final state;
  - this `CONTROL_TO_VOYAGE.md` records the final adoption and is now frozen;
  - future Core work does not send messages between these files.
- Liaison consequence:
  - `VTC-20260828-06 — Horizon Liaison` is withdrawn / superseded as a solution for Voyage ↔ Control communication;
  - do not build OUTBOX / INBOX machinery merely to recreate the retired top-level split;
  - Specialist → Core relay infrastructure may be reconsidered only from real post-merger evidence.
- HZN-001 consequence:
  - adopted `HZN-001 horizon-context-sync v0.4` remains version-pinned historical evidence;
  - Charter v4.0 / THREAD_PROTOCOL v2.0 override stale three-role labels;
  - a later candidate v0.5 may adapt to Core + Specialist roles through normal review.
- Execution priority implication: **none**.
  - Python remains main technical line;
  - Algorithm remains active structured line;
  - Linux/C++ remain support;
  - Career, Finance and Academic Operations retain bounded-support roles.
- Opportunity-cost answer:
  - intentionally do not build a Voyage↔Control Liaison;
  - do not maintain duplicate top-level strategy/control communication systems;
  - do not perform cosmetic repository migration unless it reduces real cost.
- Review trigger:
  - material evidence that the merger creates strategic tunnel vision;
  - persistent Specialist → Core communication friction after real use;
  - a future governance revision that again changes the top-level model.
- Status: **Adopted / Active**

---

## Strategic Handoff to Horizon Core

The following unresolved former Voyage items are inherited directly by Horizon Core and no longer require relay:

1. `VTC-20260828-03` — preserve Germany and Japan through a formal strategic gate rather than choosing prematurely.
2. `VTC-20260828-02` — Japan as a high-potential 2029 MSc candidate; Science Tokyo IGP(C) as current benchmark; do not activate Japanese yet.
3. `VTC-20260825-01` — 2029 MSc Application Exams & Gates Master Map.
4. `VTC-20260822-04` — affordable robotics/control/intelligent-systems MSc target-pool framework.
5. `VTC-20260822-01` — TUM RCI control-engineering prerequisite evidence audit.
6. `VTC-20260821-04` — durable strategic-input / life-route ledger proposal.

These are **pending Core decisions**, not automatically adopted by the merger.

---

## Prior Control Decision Index

The following important pre-merger decisions remain valid unless superseded by later Core decisions:

- `CTV-20260828-04` — Adopt `HZN-001 horizon-context-sync v0.4` as first shared Horizon Skill; version-pinned; HZN-002–005 remain frozen.
- `CTV-20260828-03` — Main Control cross-role HZN-001 trial feedback; incorporated into later v0.3/v0.4 routing rules.
- `CTV-20260828-02` — Authorize bounded shared Skills Trial and HZN-001 trial use.
- `CTV-20260828-01` — Activate Academic Operations & Evidence as Active — Bounded Support / Maintenance.
- `CTV-20260824-01` — Adopt Financial Freedom / Capital Formation as a first-order strategic pillar and activate Personal Finance & Capital as bounded maintenance.
- `CTV-20260821-07` — Adopt approximately RMB 100,000/year realistic all-in overseas MSc affordability planning band; zero tuition not mandatory; country pool open.
- `CTV-20260821-06` — Activate Career / Internship as Bounded Support.
- `CTV-20260821-05` — Adopt Career opportunity review and lawful company/team due-diligence workflow.
- `CTV-20260820-03` — Adopt bounded first-internship readiness framework.
- `CTV-20260816-02` — Remove astronomy from current strategic route unless explicitly reopened; Physics remains separate open interest.
- `CTV-20260816-01` — Adopt long-term strategic research map as advisory reference without execution-resource change.

Git history preserves the full pre-merger versions and detailed decision text.

---

## Bridge Closure

**Voyage Room = retired as a separate top-level role.**  
**Main Control = evolved into Horizon Core.**  
**The strategic function of the Voyage Room survives inside Core Explore mode.**

From this point forward:

> **Horizon Core = Explore + Decide & Coordinate**  
> **Specialist Threads = Execute**

This file is closed.
