# Embedded Status

Last Updated: 2026-08-29
Status: Active — Bounded Exploration

## Current Goal
Complete Embedded Exploration Sprint v1 and collect real evidence about MCU / hardware-software engineering fit without displacing the current Horizon main and structured lines.

## Current Stage
Phase 0 — Toolchain and board bring-up.

Target development loop:
`STM32CubeIDE → Build → Flash → Debug → onboard LED`

Platform:
- Board: STMicroelectronics NUCLEO-G071RB
- Toolchain: STM32CubeIDE

## Completed
- Embedded Exploration Sprint v1 authorized by Horizon Core.
- NUCLEO-G071RB selected as the first MCU board.
- STM32CubeIDE selected as the primary toolchain.
- Embedded Specialist Thread initialized under HZN-001 v0.5.

## In Progress
- Verify host toolchain and physical board bring-up prerequisites.
- Establish the first minimal STM32 project and complete the build / flash / debug / onboard-LED loop.

## Next Milestone
- Phase 0 complete: one minimal NUCLEO-G071RB project successfully builds, flashes, enters a debugger session, and controls the onboard LED on real hardware.

## Evidence
- `04_Embedded/README.md` — Core-authorized Embedded Exploration Sprint v1 scope and platform decision.
- `00_Project_Control/MASTER_STATUS.md` — Embedded marked Active — Bounded Exploration.
- Phase 0 hardware/project evidence: pending.

## Blockers
None confirmed. Toolchain installation state, USB/ST-LINK connectivity and real-board behavior remain to be verified during Phase 0.

## Needs Core Decision
No
