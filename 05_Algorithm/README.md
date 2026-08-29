# Project Horizon Algorithm Course

> 一套沿现有 Horizon Algorithm 路线持续生长的算法课程：用于第一次学习、以后复习，也逐渐沉淀成能够帮助初学者理解算法的材料。

Last Updated: 2026-08-29

## 1. 课程定位

这不是第二套算法路线，也不是一份按算法名字堆出来的百科全书。

本课程直接课程化 Project Horizon 已批准的 Algorithm Block 01–Block 08：

- 路线与优先级以 `00_Project_Control/MASTER_STATUS.md` 为准；
- 当前真实学习状态以 `05_Algorithm/STATUS.md` 为准；
- 本目录中的代码、README、运行结果与 Git 历史作为学习证据；
- AcWing、洛谷、LeetCode 等外部题目只服务当前主题，不自行形成第二条刷题路线。

课程目标不是背模板或堆题量，而是逐步建立：

1. 对算法的直觉；
2. 能手推执行过程；
3. 能独立实现；
4. 能判断时间 / 空间复杂度；
5. 能定位常见错误；
6. 能把方法迁移到新题；
7. 过一段时间仍能重新提取关键知识；
8. 最终能用清楚、低门槛的方式解释给初学者。

---

## 2. 这套课程有什么特点？

### 从基础开始，而不是一上来堆高难度算法

课程先建立复杂度、数组、字符串等基础，再逐渐进入排序、二分、双指针、前缀和等算法思想。

高级内容不会消失，只会在具备足够基础、真实学习进度和 Horizon 状态允许时再进入。

### 一条连续路线，而不是零散知识清单

每个 Block 都有明确阶段目标，每节课尽量建立在已经掌握的知识上。

学习时不需要每天重新决定“下一步到底学什么”。

### 先理解为什么，再写代码

课程不默认先给模板。

新的算法通常从：

```text
已有方法
→ 暴露问题
→ 找到可利用的结构
→ 小数据手推
→ 写成程序
```

自然出现。

### 真实代码是课程的一部分

每节课尽量保留真实写过、运行过、调试过的 `main.cpp`。

README 负责解释：

> 为什么要这样做？代码每一步在表达什么思想？复杂度为什么是这个结论？

### 题目服务于知识，不服务于数量

AcWing、洛谷、LeetCode 等平台是题目来源，不是新的 roadmap。

只有能展示重要方法、边界、错误或迁移模式的题，才值得进入课程的精选例题。

### 学习和复习使用不同路径

第一次学习强调引导发现和自己实现。

以后复习优先闭卷回忆、手推和重新实现，而不是默认重新阅读整篇 README。

---

## 3. 长期课程路线

| Block | 课程主题 | 正式范围 | 当前状态 |
| --- | --- | --- | --- |
| [**Block 01 — Foundation**](./Block01/) | 基础 | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking | **Active** |
| **Block 02 — Linear Structures** | 线性结构 | Linked lists, stacks, queues, deques, hash tables | Not started |
| **Block 03 — Search** | 搜索 | Recursion, enumeration, DFS, BFS, backtracking, basic pruning | Not started |
| **Block 04 — Trees & Priority Structures** | 树与优先结构 | Binary trees, traversals, BST concepts, heap / `priority_queue`, disjoint set union | Not started |
| **Block 05 — Graphs** | 图 | Representation, DFS/BFS, connectivity, topological sort, shortest paths, minimum spanning trees | Not started |
| **Block 06 — Greedy** | 贪心 | Sorting-based greedy, intervals, proof intuition, common patterns | Not started |
| **Block 07 — Dynamic Programming** | 动态规划 | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP | Not started |
| **Block 08 — Toolbox** | 常用工具箱 | Bits, basic number theory, GCD, primes, fast power, monotonic stack/queue, Trie, KMP, recurring tools | Not started |

Advanced 内容（如 Fenwick tree、segment tree、更难图论、进阶 DP / 字符串算法）只在真实需要和 Horizon 状态允许时按需进入，不提前扩展主线。

> 不预先创建未学习 Block 的空目录或空课程来制造“进度”。页面在真实学习推进时再建立。

---

## 4. 当前 Block 01

进入：[**Block 01 — Foundation Course Home**](./Block01/)

当前课程顺序：

1. [Time Complexity — 时间复杂度](./Block01/01_time_complexity/) — completed
2. [Space Complexity — 空间复杂度](./Block01/02_space_complexity/) — completed
3. [Arrays — 数组](./Block01/03_arrays/) — completed
4. [Strings — 字符串](./Block01/04_strings/) — completed
5. [Sorting — 排序基础](./Block01/05_sorting/) — completed
6. [Binary Search — 二分查找](./Block01/06_binary_search/) — completed
7. [Two Pointers — 双指针](./Block01/07_two_pointers/) — completed
8. **Prefix Sums — 前缀和 — current topic**
9. Basic Algorithmic Thinking — upcoming within Block 01

01–07 已基于真实学习代码与原始笔记完成第一轮课程化整理。Prefix Sums 不提前代写完整课程，而是在真实教学过程中继续生长。

---

## 5. 每个主题的统一课程结构

页面尽量保持清楚、稳定：

```text
1. 本课概览
2. 直觉 / Intuition
3. 核心思想 / Core Idea
4. 手推 / Hand Simulation
5. 实现 / Implementation
6. 复杂度 / Complexity
7. 常见错误 / Common Mistakes
8. 精选例题 / Selected Problems
9. 快速复习 / Quick Review
10. Knowledge Connections
```

### 本课概览

先回答：

- 这一课在整套课程哪里？
- 前面已经会什么？
- 这一课会解决什么问题？
- 学完的判断标准是什么？

### 直觉

新算法尽量不直接从名字和公式开始。

先用已有知识尝试，再让旧方法的局限自然暴露。

### 核心思想

把手推过程中发现的规律整理成明确规则、条件、不变量或公式。

### 手推

使用小数据逐步执行。第一次学习时优先让学习者自己判断下一步。

### 实现

把刚才已经理解的步骤逐渐翻译成代码，最终完成可运行的 `main.cpp`。

### 复杂度

解释时间 / 辅助空间为什么得到这个结论，同时理解必要的 trade-off。

### 常见错误

优先记录真实学习中踩过的边界、下标、循环、复杂度和推理错误。

### 精选例题

只收录有教学价值的题，不按平台或数量制造题库。

### 快速复习

先给提取问题，让未来复习时先尝试从记忆中重建知识，再查看答案。

### Knowledge Connections

简短说明这一课与前置知识、后续知识之间的连接，帮助课程逐渐从一条路线长成一张知识网络。

---

## 6. 底层教学逻辑

虽然页面表面保持简洁，但实际教学默认采用：

```text
先尝试 / Pretest
→ 朴素方法
→ 暴露问题
→ Guided Discovery
→ 小数据手推
→ 自己实现
→ Test & Debug
→ Complexity & Trade-offs
→ Closed-book Retrieval
→ Spaced Review
→ Interleaving
→ Teach It
```

这里吸收主动回忆、生成、间隔学习、交错练习等学习原则，但不把学习方法本身变成额外的形式负担。

课程的最终检验不是“看起来熟悉”，而是能否：

> 理解、手推、实现、分析、识别、重新提取、解释。

---

## 7. 例题辅导协议

以后用户发送 AcWing、洛谷、LeetCode 或其他例题时，默认采用以下方式，而不是直接倾倒完整答案：

1. **定位题目**：先判断它与当前主题的关系；外部题目不能自动改变 Algorithm 路线。
2. **定位卡点**：确认真正卡住的是题意、思路、某一步手推、边界、代码实现还是复杂度。
3. **小数据手推**：优先用最小可理解样例观察算法发生了什么。
4. **提问优先**：一次推进一个关键问题，让学习者先判断下一步。
5. **逐级提示**：
   - 第一级：方向性问题或关键观察；
   - 第二级：指出条件 / 不变量 / 应移动或更新的对象；
   - 第三级：给伪代码或代码骨架；
   - 第四级：针对用户代码做局部修正；
   - 第五级：只有确有需要时才给完整代码。
6. **解释错误**：说明为什么错、程序实际如何执行、怎样自己排查，而不只给正确写法。
7. **选择性沉淀**：只有能代表一个方法、边界或常见错误的典型题，才进入对应主题的精选例题。

如果用户明确要求完整题解，可以直接提供；否则默认保留思考空间。

---

## 8. 三种使用方式

### 第一次学习

```text
本课概览
→ 直觉
→ 引导发现
→ 手推
→ 自己实现
→ 调试
→ 复杂度
→ 精选例题
```

### 以后复习

优先：

```text
Quick Review 闭卷问题
→ 自己手推
→ 尝试重新写核心实现
→ 再查看 README 检查遗漏
```

如果无法独立解释，再回到核心思想和完整章节。

### 帮助初学者

优先从直觉和一个小例子开始，不默认对方理解模板、递归、下标技巧或竞赛缩写。

目标不是最快把题讲完，而是找到对方真正断掉的那一级台阶。

---

## 9. 可验证学习证据

一个主题的 milestone 通常应尽量留下：

- `main.cpp`：可运行的核心实现 / 小练习；
- `README.md`：课程化解释与快速复习材料；
- 运行结果或可复现样例；
- 正确的时间 / 空间复杂度说明；
- 有意义的 Git commit。

不要为了 GitHub 图、题量或目录数量制造空成果。

Git 提交时只添加本主题确实需要的文件，不默认使用 `git add .`。

---

## 10. 维护规则

- `05_Algorithm/README.md`：Course Home、长期路线和统一教学约定。
- `05_Algorithm/BlockXX/README.md`：Block Home，解释阶段目标、顺序和课程目录。
- `05_Algorithm/STATUS.md`：当前真实执行状态，不承担完整课程内容。
- 各主题 `README.md`：真正的单节课程。
- 各主题 `main.cpp` / 运行证据：能力验证。
- 路线发生正式变化时由 Horizon Core 决定；Algorithm Specialist 不自行添加第二套 roadmap。
- 普通小练习不触发 STATUS 更新；只有有意义 milestone、blocker、路线实质变化或 Core 依赖变化时更新。
- 已完成主题可以在以后复习、加入典型题或发现更好解释时继续改进，不要求一次写成“最终版”。

---

## 11. 当前继续位置

**Block 01 — Prefix Sums / 前缀和**

下一步继续采用真实教学方式：先从“为什么重复区间求和会浪费时间”建立问题，再由学习者参与推出预处理思想、手推前缀数组，最终形成新的 `main.cpp` 和课程章节。
