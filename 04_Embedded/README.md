# 04_Embedded

## Embedded Exploration Sprint v1

Status: **Core-authorized bounded exploration**  
Authorized: 2026-08-29  
Decision owner: Horizon Core

## Purpose

Use a small, project-first STM32 sprint to test whether embedded systems deserves a larger long-term role in Project Horizon.

This is **not** a new main technical line. Python remains the main technical line and Algorithm remains the active structured line. Embedded may not materially displace either without a separate Horizon Core decision.

## Sprint Question

Does real MCU / hardware-software work produce enough sustained interest and engineering value to justify a formal Embedded Specialist route?

The sprint should collect evidence from actual building and debugging rather than from tutorials alone.

## Platform Decision

First MCU board: **STMicroelectronics NUCLEO-G071RB**.

Why this board:

- current STM32 Nucleo-64 platform with integrated ST-LINK debugger/programmer;
- sufficient peripherals for the first sprint;
- directly matches ST's current STM32CubeIDE basics training path;
- supports GPIO, EXTI, timer/PWM, ADC, DMA and USART exercises needed by the initial route.

Primary toolchain: **STM32CubeIDE** using the current official ST release available at setup time.

Do not add ESP32, 51, FPGA, FreeRTOS, Embedded Linux, CAN or ROS 2 during Sprint v1 unless Horizon Core explicitly expands the scope.

## Sprint Scope

### Phase 0 — Toolchain and board bring-up

- install / verify STM32CubeIDE;
- connect NUCLEO-G071RB through ST-LINK;
- create, build, flash and debug one minimal project;
- verify onboard LED control.

### Phase 1 — Essential MCU interaction

- GPIO output;
- button / GPIO input;
- external interrupt (EXTI);
- timer;
- PWM;
- UART.

Embedded-C concepts are patched only when the current hardware task requires them, especially pointers, bit operations, `const`, `volatile`, memory and compilation/linking basics.

### Phase 2 — First integrated project

**STM32 Interactive Controller v1**

Minimum project evidence:

- button input;
- interrupt handling;
- timer / PWM output;
- UART command or telemetry path;
- simple state-machine behavior;
- runnable source;
- concise README;
- wiring / board-pin explanation;
- demo evidence;
- meaningful Git commit history.

## Sprint Exit Gate

After the first integrated project, Horizon Core reviews:

1. **Interest:** Is hardware debugging / MCU work genuinely engaging after real friction appears?
2. **Capability:** Can the user explain the system rather than only reproduce tutorial steps?
3. **Opportunity cost:** Did Embedded materially disrupt Python / Algorithm or academic priorities?
4. **Evidence quality:** Is there a reproducible project artifact worth keeping in a future portfolio?

Possible decisions:

- **Promote** — establish a formal Embedded Specialist route and continue into sensors / peripheral drivers.
- **Continue bounded exploration** — run one more narrowly scoped project.
- **Pause** — preserve the evidence and return capacity to higher-value lines.

## Portfolio Direction

Sprint v1 is the start of a possible embedded project evidence chain, not a portfolio by itself.

A future portfolio should prefer a few progressively stronger projects over many trivial demos, for example:

1. Multi-Sensor Hub;
2. Reliable Embedded Controller;
3. RTOS Robot Node.

These later projects are **not active work yet**.

## Governance / Ownership

- Horizon Core owns activation, capacity limits, promotion / pause decisions and cross-thread priority.
- A future Embedded Specialist Thread owns `04_Embedded/STATUS.md` and Embedded execution evidence.
- Horizon Core must not write that Specialist STATUS on its behalf.
- The first Embedded Specialist session should create `04_Embedded/STATUS.md` using `THREAD_PROTOCOL.md` and adopted `HZN-001 horizon-context-sync v0.5`.

## Immediate Next Step

Open the Embedded Specialist Thread and begin **Phase 0 — Toolchain and board bring-up**.

Do not begin Phase 1 until the board, toolchain, build, flash and debug loop are verified.
