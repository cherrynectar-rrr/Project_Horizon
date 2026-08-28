# HZN-001 — horizon-context-sync

Version: 0.2
Status: Trial Prototype
Owner: Voyage Room prototype; canonical ownership pending Project Control
Last Updated: 2026-08-28

## Purpose

Establish the minimum authoritative Project Horizon context required before an important task, while preserving role boundaries and avoiding unnecessary repository reads.

This Skill exists to prevent:

- planning from stale chat memory;
- role leakage;
- reading the wrong strategic bridge;
- treating recommendations as adopted decisions;
- writing to files the current role does not own;
- unnecessary full-repository scans.

## Triggers

Use this Skill before:

- an important Horizon planning or decision task;
- a cross-thread question;
- a route / priority / competition / research / study-abroad / career decision;
- a task that may modify GitHub state;
- a specialist session where current execution state matters;
- any task where chat memory may be stale or conflicting.

## Do Not Trigger When

Do not run a full sync for:

- casual conversation;
- a tiny isolated exercise whose answer does not depend on Horizon state;
- simple explanations unrelated to current project priorities;
- a task already operating from freshly fetched authoritative state in the same conversation, unless a material update may have occurred.

## Inputs

Required:

- current role: `Voyage Room`, `Main Control`, or named Specialist Thread;
- task summary;
- known affected threads / strategic domains, if any.

Optional:

- user-supplied files or evidence;
- external entities whose current facts may have changed.

## Authority Order

Resolve conflicts in this order:

1. `00_Project_Charter/Project_Horizon_Charter_v3.0.md`
2. `00_Project_Control/THREAD_PROTOCOL.md`
3. `00_Project_Control/MASTER_STATUS.md`
4. role-specific strategic/control documents
5. relevant specialist `STATUS.md`
6. evidence / artifacts
7. chat memory as supporting context only

A lower layer must not silently override a higher layer.

## Required Reads by Role

### Voyage Room

For important strategic work, read:

1. `00_Project_Control/MASTER_STATUS.md`
2. `00_Project_Control/CONTROL_TO_VOYAGE.md`
3. relevant specialist `STATUS.md` files when execution reality matters
4. relevant Voyage Room strategic documents
5. `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` when continuity with prior transmissions matters

Read the Charter and THREAD_PROTOCOL when:

- governance boundaries are relevant;
- role authority is uncertain;
- designing/changing shared operating architecture;
- a possible conflict with current rules exists.

If the task concerns a previously proposed cross-thread standard, shared infrastructure or activation request, always check the latest `CONTROL_TO_VOYAGE.md` before treating it as adopted.

Write boundary:

- Voyage Room documents;
- `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` only.

Never write:

- `MASTER_STATUS.md`;
- `CONTROL_TO_VOYAGE.md`;
- specialist `STATUS.md` files.

Voyage Room may create **draft / trial prototypes inside its own writable area**. That does not make them canonical, adopted or binding on other threads. Cross-thread canonicalization requires Project Control adoption.

### Main Control

For important control work, read:

1. `00_Project_Control/MASTER_STATUS.md`
2. `00_Strategy/Voyage_Room/VOYAGE_TO_CONTROL.md` for relevant strategic decisions
3. relevant specialist `STATUS.md` files
4. `00_Project_Control/CONTROL_TO_VOYAGE.md` when previous Control decisions / requests matter
5. external facts when the decision depends on changing real-world conditions

Read Charter / THREAD_PROTOCOL when governance or authority is material.

Write boundary:

- `MASTER_STATUS.md`;
- `CONTROL_TO_VOYAGE.md`;
- other explicitly Control-owned files.

Never write Voyage-owned bridge content or specialist STATUS files.

### Specialist Thread

Always begin important execution work by reading:

1. that specialist's own `STATUS.md`

Also read `MASTER_STATUS.md` when the task involves:

- priority;
- another thread;
- capacity/resource conflict;
- competition/project route;
- activation state;
- Main Control dependencies.

Read Voyage strategic material only when the task explicitly involves long-term direction, study-abroad, career, research direction, strategic electives or another issue where the current approved execution scope may depend on strategic context.

Write boundary:

- the specialist's own `STATUS.md` only, unless another explicit workspace/tool is authorized for operational evidence.

## External Freshness Check

After repository sync, ask:

> Does the answer depend on information that can change?

Examples:

- admissions rules;
- APS / visa / immigration procedures;
- scholarships;
- programme fees;
- competition dates;
- software versions;
- named labs / professors;
- job openings;
- salaries / employment policy;
- market conditions.

If yes, verify current reliable external sources before presenting the fact as current.

Do not let old strategic documents substitute for fresh real-world verification.

## Procedure

### Step 1 — Classify the task

Classify as one or more of:

- routine execution;
- cross-thread coordination;
- strategic exploration;
- control decision;
- evidence intake;
- external-current-fact question;
- repository write.

### Step 2 — Determine role authority

State internally:

- current role;
- allowed decision scope;
- allowed write scope;
- whether the task requires escalation.

If role or write authority is unclear, stop before writing and consult Charter / THREAD_PROTOCOL.

Distinguish explicitly between:

- **role-owned prototype / draft work**, which may be allowed inside that role's writable area; and
- **canonical cross-thread adoption**, which requires the authority defined by Project Control.

### Step 3 — Fetch minimum authoritative state

Use the role rules above.

Do not read every STATUS file by default. Read only what can materially affect the task.

### Step 4 — Resolve state conflicts

If chat memory, user recollection and GitHub disagree:

- preserve the user's new evidence as evidence;
- do not silently rewrite official state;
- use the latest formal GitHub state for current Horizon governance;
- route meaningful discrepancies through the proper owner.

### Step 5 — Determine freshness requirement

If current external facts matter, verify them now.

### Step 6 — Build Context Packet

Internally produce:

```text
Role:
Task Type:
Authoritative State:
Relevant Active Priorities:
Relevant Constraints:
Affected Threads:
Allowed Writes:
Prototype Work Allowed: Yes/No
Canonical Adoption Authority:
External Freshness Needed: Yes/No
Escalation Needed: Yes/No
Unknowns That Matter:
```

This packet normally does not need to be shown to the user.

### Step 7 — Execute the user's actual task

The Skill is a preflight, not the deliverable.

Do not burden the user with governance ceremony unless it materially helps explain a limitation or decision.

## Output Contract

Success means the invoking workflow now has:

- a fresh, role-correct Horizon state;
- the relevant priority/constraint context;
- a clear write boundary;
- a distinction between allowed prototype work and canonical adoption;
- identified external facts requiring verification;
- identified unresolved conflicts or escalation needs.

The visible user response should answer the user's actual task, not merely report that sync occurred.

## Verification Checklist

Before proceeding, verify:

- [ ] Correct current role identified
- [ ] Correct authoritative files read
- [ ] No unnecessary full-repo scan
- [ ] Recommendations not mistaken for adopted state
- [ ] Prototype permission not mistaken for canonical adoption
- [ ] Write ownership respected
- [ ] Changing external facts marked for verification
- [ ] Material conflicts surfaced rather than overwritten

## Stop / Escalation Conditions

Stop or escalate when:

- requested write would violate ownership;
- user asks a specialist to change long-term route;
- Voyage Room would need to activate/deactivate a thread;
- a prototype would need to become a binding cross-thread standard without Control adoption;
- specialist state conflicts materially with MASTER_STATUS;
- current evidence is insufficient for a high-impact decision;
- external rules are time-sensitive but cannot be verified;
- required repository/tool access fails and the missing state is essential.

## Trial Evidence

Meaningful real uses are recorded in `TRIAL_LOG.md` in this Skill directory.

Trial evidence should record only cases that reveal value, friction, failure modes or needed revisions.

## Anti-patterns

Do not:

- recite the whole Charter every time;
- treat memory as source of truth;
- read all threads "just in case";
- write a status update because a conversation happened;
- treat a Voyage recommendation as Control adoption;
- treat prototype existence as cross-thread adoption;
- treat a school curriculum as Horizon's personal route;
- fabricate missing state to keep the workflow moving.

## Change Log

### v0.2 — 2026-08-28

- Entered Trial Prototype state after first real governance use.
- Added explicit distinction between role-owned prototypes and canonical cross-thread adoption.
- Added mandatory Control-bridge check for previously proposed shared standards.
- Added Trial Evidence convention and expanded Context Packet.

### v0.1 — 2026-08-28

- First prototype.
- Encodes role-based startup, authority hierarchy, minimum-read logic, freshness check and internal Context Packet.
