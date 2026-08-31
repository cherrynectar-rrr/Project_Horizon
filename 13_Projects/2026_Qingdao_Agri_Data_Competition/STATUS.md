# 2026 Qingdao Agri Data Competition Project Status

Last Updated: 2026-08-31
Status: Active — Bounded Short-Term Project / Phase 0 Exit Gate

## Current Goal
Obtain Horizon Core GO / PIVOT / SKIP decision before any Phase 1 expansion.

## Current Stage
Phase 0 feasibility validation is complete enough for an exit recommendation. Specialist recommendation: **GO with the egg-price topic**, while keeping the vegetable price-volume topic as fallback.

## Completed
- P0.1 Data Heartbeat completed locally: real Qingdao egg-price observations were stored in CSV, read successfully with pandas, and plotted with matplotlib.
- User correctly interpreted date on the x-axis, egg average price on the y-axis, and an increasing trend across the four July observations.
- Data continuity check found Qingdao official `粮油副食品价格监测情况周报` pages with egg-price observations across 2026 (including January, February and July) and earlier years, supporting a reproducible official historical series rather than a one-off July source.
- Problem evidence is strong: 2026 Qingdao official/agricultural reporting identifies cyclical egg-price volatility, weak small-producer ability to respond to market changes, existing market-warning activity, and income-insurance protection against price/income decline.
- Buildability is demonstrated at MVP level using current Python plus bounded just-in-time additions (`pandas`, `matplotlib`); no ML is required for the first useful version.
- Phase 0 domain support remains unconfirmed, but the project README treats teacher/agriculture-domain support as helpful rather than mandatory for Phase 0.

## In Progress
- Await Horizon Core decision on whether this bounded competition project may enter Phase 1.
- Reconcile the 2026-07-18 to 2026-07-24 observation before treating that row as clean final evidence.

## Next Milestone
If Core = GO: begin Phase 1 by building a reproducible historical dataset and the minimum indicators/chart/risk rule defined in the project README.

## Evidence
- Local project files observed during specialist session: `data/egg_price_sample.csv`, `scripts/read_egg_price.py`.
- Local execution successfully printed the four-row dataset and displayed a line chart.
- Working sample values: 4.75, 4.92, 5.15, 5.26 yuan per 500 g for weekly endpoints 2026-07-10, 2026-07-17, 2026-07-24 and 2026-07-31; the 5.15 row remains pending source reconciliation.
- Qingdao official weekly-report examples: 2026-01-03–01-09 (egg 3.58), 2026-02-21–02-27 (3.83), 2026-07-04–07-10 (4.75), 2026-07-25–07-31 (5.26).
- Qingdao 2026 egg-industry reporting describes long-running price cycles, 46 intelligent monitoring points and market-warning pushes to producers.
- Qingdao agricultural reporting on 2026-07-14 documents prolonged losses and use of egg-layer income insurance to cover income shortfalls caused by weak prices.
- Local files are not yet recorded here as a Git commit; this STATUS records verified session evidence only.

## Blockers
- One sample point (2026-07-24 endpoint, 5.15) needs source reconciliation because it does not exactly match the next week's published week-over-week percentage change.
- Phase 1 may not begin until Core resolves the Phase 0 exit gate.

## Needs Core Decision
Yes — Phase 0 exit gate: GO / PIVOT / SKIP. Specialist recommendation: **GO**.
