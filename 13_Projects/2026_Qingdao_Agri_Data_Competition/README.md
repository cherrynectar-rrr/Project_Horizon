# 2026 Qingdao Agri Data Competition Project

Status: **Active — Bounded Short-Term Project / Phase 0 Feasibility**

Owner after handoff: **Project Specialist Thread**

Core decision owner: **Horizon Core**

Target competition: **2026 青岛市农业农村领域数据驱动创新应用竞赛**

Working track: **赛道二 — 农业大数据挖掘分析**

Working title: **青岛蛋鸡行情波动风险提示系统**

Fallback topic if egg-price data is insufficient: **青岛蔬菜价格—上市量波动监测**

---

## 1. Why This Project Exists

This is not a new permanent Horizon main line.

It is a short, deadline-bounded experiment intended to answer three questions:

1. Can the user use current Python foundations to solve a small real-world data problem?
2. Can one competition produce stronger project evidence than another isolated tutorial exercise?
3. Is the project feasible without materially displacing Python foundation completion, Algorithm, academic work, or Embedded exploration?

The project is successful even if the final decision is **SKIP**, provided Phase 0 quickly discovers that the data, problem, or workload is not viable.

---

## 2. Competition Constraints

Source: official competition notice issued by Qingdao Municipal Agriculture and Rural Affairs Bureau on 2026-08-18.

Relevant constraints:

- submission deadline: **2026-09-30**;
- individual or team participation is allowed;
- team size: maximum **3 people**;
- current project targets **Track 2: Agricultural Big Data Mining and Analysis**;
- initial submission may be a **PPT or PDF design work**;
- final-round entrants are evaluated on site and the first author presents/answers questions;
- judging emphasizes theme fit, innovation, overall logic, practical usefulness, replicability, and economic/social/ecological value;
- practical usefulness includes real investigation/needs evidence, feasibility, and user acceptance.

The project must not fabricate agricultural data, field research, user interviews, or impact evidence.

---

## 3. Project in Plain Language

The project is a small **egg-price trend and risk assistant**.

Instead of asking farmers or other users to read many historical price tables manually, the project will try to turn public data into simple answers such as:

- What is the latest observed egg price?
- Is the recent trend mainly rising, falling, or stable?
- Has volatility recently increased?
- Are there unusual changes worth paying attention to?
- Can the result be shown clearly through a simple chart/dashboard?

The first version is **not an AI forecasting system**.

The minimum useful pipeline is:

```text
public data
→ Python reads and cleans it
→ simple statistics
→ trend / change / volatility analysis
→ chart
→ simple risk提示
```

Machine learning or forecasting may be considered only after the basic system works and only if it creates clear additional value.

---

## 4. Scope Guardrails

### Authorized

- public-data collection and verification;
- CSV / spreadsheet data cleaning;
- Python data processing;
- basic statistics and trend analysis;
- charts and simple visualizations;
- simple transparent risk rules;
- a lightweight dashboard if useful;
- limited domain research needed to interpret the data;
- contact with a relevant teacher / agricultural-domain teammate if available;
- competition PPT/PDF preparation after the project itself has evidence.

### Not Authorized During Phase 0–1

- creating a new AI/ML curriculum;
- deep learning merely to make the project sound advanced;
- mobile-app development;
- building a generic "smart agriculture platform";
- inventing user research or field-investigation evidence;
- large-scale web infrastructure;
- unrelated feature expansion;
- allowing this project to silently become the new Horizon main line.

---

## 5. Phase 0 — Feasibility Gate

Timebox: **2–3 focused sessions / no more than 3 days before a GO/SKIP decision.**

Phase 0 must answer:

### Data

- Can we obtain a real public time series for Qingdao egg prices or a defensible closely related market series?
- Is the history long and regular enough to analyse?
- Can the source be cited and reproduced?

### Problem

- Can we explain, in plain language, who would care about the information and why?
- Is there official or credible evidence that price volatility / market information is a real agricultural problem?

### Buildability

- Can the first useful version be built mainly with current Python plus small just-in-time additions?
- Can we create a real chart and basic analysis before thinking about advanced prediction?

### Domain Support

Helpful but not mandatory for Phase 0:

- identify a possible agriculture / animal-science / economics teammate;
- identify a teacher or prior competition resource who could sanity-check the agricultural story.

### Phase 0 Exit

**GO** when:

- usable data exists;
- the need can be justified;
- a small MVP is clearly buildable;
- the workload remains bounded.

**PIVOT** to the vegetable-price / market-volume topic when egg data is the main blocker but the general Track-2 project remains viable.

**SKIP** when two or more of the above conditions fail.

No sunk-cost escalation.

---

## 6. Phase 1 — Minimum Viable Project

Only begins after Phase 0 = GO.

Minimum output:

1. one reproducible dataset;
2. Python script/notebook that loads and cleans the data;
3. basic indicators such as latest value, week-to-week change, recent average, and recent volatility;
4. one clear time-series chart;
5. one simple, explainable trend/risk rule;
6. concise README explaining what the program does and what it does **not** claim.

Example output:

```text
Latest price: 5.4
Recent trend: rising
Recent volatility: elevated
Risk提示: pay attention to recent market changes
```

The program must distinguish observed facts from predictions.

---

## 7. Phase 2 — Competition-Useful Version

Possible additions after the MVP works:

- cleaner visual dashboard;
- comparison with feed-cost or seasonal variables if reliable data exists;
- clearer local Qingdao context;
- simple baseline forecast only if justified;
- explanation of likely users and usage scenario;
- feasibility / replication discussion;
- limitations and data-quality section.

The scoring standard should shape presentation, but presentation must not outrun evidence.

---

## 8. Phase 3 — Submission

Before 2026-09-30:

- final project evidence is frozen;
- prepare competition PPT/PDF;
- complete registration materials;
- verify originality and source citations;
- prepare a short explanation of problem → data → method → result → limitations → value;
- if selected for the final round, prepare first-author presentation and Q&A.

---

## 9. Horizon Resource Rule

This project is a **bounded short-term application project**, not a replacement for the current Horizon capability structure.

During Phase 0, it receives only enough time to validate feasibility.

If Phase 0 passes and the project requires a larger temporary allocation, Horizon Core must explicitly decide what is temporarily reduced.

Default non-goal: do not pause Algorithm, Embedded, or academic obligations merely because a competition exists.

Python knowledge should be learned just in time from project needs rather than by opening a second Python curriculum.

---

## 10. First Verifiable Milestone

**Milestone P0.1 — Data heartbeat**

Produce one small, reproducible table of real price observations and one Python-generated line chart from it.

Completion means:

- source is known;
- data is real;
- Python successfully reads it;
- one chart is generated;
- the user can explain what the x-axis and y-axis mean.

Until P0.1 exists, do not spend time on AI models, polished dashboards, logos, or competition slides.

---

## 11. Thread Ownership

After handoff, the dedicated Project Specialist Thread may create and maintain:

- `13_Projects/2026_Qingdao_Agri_Data_Competition/STATUS.md`;
- data / scripts / notebooks / README materials inside this project directory;
- competition-specific evidence and submission artifacts.

It must not modify `MASTER_STATUS.md`, other specialist STATUS files, or cross-thread priorities.

Use:

`Needs Core Decision: Yes`

if the project needs materially more time, changes track/topic substantially, conflicts with the main line, or reaches the Phase 0 GO/SKIP decision with non-obvious trade-offs.
