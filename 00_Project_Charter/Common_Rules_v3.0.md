# Project Horizon Common Rules

**Version 3.0 — Charter v4.0 Companion**  
**Effective date:** 2026-08-30

这是 Project Horizon 的长期个人发展与工程能力建设项目。

最高依据：`00_Project_Charter/Project_Horizon_Charter_v4.0.md`。

GitHub 仓库 `cherrynectar-rrr/Project_Horizon` 是当前动态状态的共享事实源。聊天上下文只作辅助；若与 GitHub 最新正式状态冲突，以 GitHub 为准。

## 两层治理

- **Horizon Core / 核心舱 = Explore + Decide & Coordinate**：负责长期探索、阶段决策、优先级、资源配置、线程启停、跨线程协调以及 `MASTER_STATUS.md`。
- **Specialist Threads / 专业线程 = Execute**：负责自己领域内的学习、项目、调试和证据生产。

原 Voyage Room / 远航室 与 Main Control / 主控 已合并。远航室原有战略探索能力保留为 Horizon Core 的 Explore mode，但不再存在独立 Voyage ↔ Control 消息桥。

重大问题默认采用：

`Explore → Decide & Coordinate → Specialist Execute → Real Feedback → Re-explore`

Explore 应认真保留备选路线、反例、不确定性和缺失证据；Decide & Coordinate 应明确阶段决定、资源影响、机会成本和复盘 Gate。

## 专业线程共同规则

1. 每个专业线程原则上只有一个主要职责、一个当前目标和一个可验证输出。
2. 专业线程只执行自己获批的范围，不擅自改变长期路线、跨线程优先级或另一线程的工作。
3. Specialist 只维护自己的 `STATUS.md` 和明确授权的工作区；不得修改 `MASTER_STATUS.md` 或其他 Specialist 状态。
4. 需要跨线程或战略判断时提出 `Needs Core Decision`。
5. STATUS / MASTER_STATUS 只在 meaningful change 时更新，例如重要里程碑、重要 blocker、路线实质变化、正式结果、下一 Gate 实质变化或 Core 决策依赖。
6. 不得把计划写成完成，不为了普通聊天、小练习、改名或整理制造状态 churn。
7. 优先产生可运行、可解释、可维护、可复现、可提交或可展示的真实成果。
8. 不以课程数量、刷题数量、证书数量、GitHub 提交数量或短期热度衡量进步。
9. 学校培养方案是学校提供的课程和要求，不等于用户个人成长路线。
10. 机器人、具身智能、AI 部署、Embedded 等是当前探索区域，不是已经确定的人生终点。
11. 涉及会变化的留学、funding、学校政策、比赛、签证、就业、技术生态、导师、实验室或软件版本时，必须核实最新可靠来源。
12. 控制并行执行容量。任何新增任务都必须回答：**“做这件事意味着暂时不做什么？”**
13. Horizon 的结构只在它降低协调成本、提高判断或执行质量时才有价值。不要为了 Horizon 本身制造 Horizon 工作。

## Horizon Learning Rules

对于以学习和能力建设为主要内容的 Specialist Thread，默认采用项目驱动、先尝试后讲解、理论与实践结合的方式。

当前跨线程试运行的学习机制见：

`00_Strategy/Voyage_Room/skills/horizon-learning-loop/SKILL.md`

其核心不是统一所有课程的页面格式，而是统一底层学习机制：

`Capability Target`
`→ First Attempt / Pretest`
`→ Expose the Gap`
`→ Minimum Necessary Theory`
`→ Guided Discovery / Small Model`
`→ Independent Construction`
`→ Run / Test / Observe`
`→ Debug / Explain / Trade-offs`
`→ Closed-book Retrieval`
`→ Spaced Revisit`
`→ Interleaving after basic mastery`
`→ Transfer / Teach-back`

共同原则：

- 主动回忆优先于默认重复阅读；
- 生成和预测优先于直接复制；
- 先尝试，再根据暴露出的真实缺口讲解；
- 真实运行、测试、调试、测量或推导提供反馈；
- 理解以后再进行间隔重访和适度交错；
- 能迁移到邻近问题、能解释给初学者，是重要掌握检验；
- 真实能力增长和可见反馈优先于积分、连续打卡或机械游戏化；
- 学习机制应减少摩擦，而不是变成新的表格、打卡和仪式负担。

不同领域应保留自己的教学形态。例如 Algorithm 强调手推与复杂度，Embedded 强调 Build / Flash / Debug 与真实硬件反馈，Linux 强调真实工作流，Python / C++ 强调运行、测试、调试和小项目。

该 Learning Loop 当前是 **Candidate — Cross-thread Trial**，不因“听起来合理”直接宣布完全验证。普通真实学习过程就是试验场，不额外制造测试任务。

## Skills

- `HZN-001 — horizon-context-sync v0.5`：Adopted — Active。
- `HZN-002 — status-update v0.1`：Candidate — Trial。
- `horizon-learning-loop v0.1`：Candidate — Cross-thread Trial。

Skill 是“如何执行一种重复工作”的可复用过程，不是新的治理层，也不授予额外权限。

## 最终原则

Project Horizon 的核心循环仍然是：

**Explore → Decide → Execute → Obtain Real Feedback → Re-explore**

目标不是尽可能多做，而是持续提高长期能力、研究能力、判断质量、真实证据和未来选择权。

详细启动读取、写入权限、冲突处理和状态更新规则，以 `00_Project_Control/THREAD_PROTOCOL.md` 为准。
