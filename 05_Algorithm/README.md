# Project Horizon Algorithm Course

> 一套沿现有 Horizon Algorithm 路线持续生长的算法课程：用于第一次学习、以后复习，也逐渐沉淀成能够帮助初学者理解算法的材料。

Last Updated: 2026-08-29

## 1. 课程定位

这不是第二套算法路线。

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
7. 以后能用清楚、低门槛的方式解释给初学者。

---

## 2. 长期课程路线

| Block | 课程主题 | 正式范围 | 当前状态 |
| --- | --- | --- | --- |
| **Block 01 — Foundation** | 基础 | Complexity, arrays, strings, sorting, binary search, two pointers, prefix sums, basic algorithmic thinking | **Active** |
| **Block 02 — Linear Structures** | 线性结构 | Linked lists, stacks, queues, deques, hash tables | Not started |
| **Block 03 — Search** | 搜索 | Recursion, enumeration, DFS, BFS, backtracking, basic pruning | Not started |
| **Block 04 — Trees & Priority Structures** | 树与优先结构 | Binary trees, traversals, BST concepts, heap / `priority_queue`, disjoint set union | Not started |
| **Block 05 — Graphs** | 图 | Representation, DFS/BFS, connectivity, topological sort, shortest paths, minimum spanning trees | Not started |
| **Block 06 — Greedy** | 贪心 | Sorting-based greedy, intervals, proof intuition, common patterns | Not started |
| **Block 07 — Dynamic Programming** | 动态规划 | State design, transitions, initialization, iteration order, 1D/2D DP, knapsack, sequence DP | Not started |
| **Block 08 — Toolbox** | 常用工具箱 | Bits, basic number theory, GCD, primes, fast power, monotonic stack/queue, Trie, KMP, recurring tools | Not started |

Advanced 内容（如 Fenwick tree、segment tree、更难图论、进阶 DP / 字符串算法）只在真实需要和 Horizon 状态允许时按需进入，不提前扩展主线。

---

## 3. 当前 Block 01

Block 01 当前顺序：

1. [Time Complexity](./Block01/01_time_complexity/) — completed
2. [Space Complexity](./Block01/02_space_complexity/) — completed
3. [Arrays](./Block01/03_arrays/) — completed
4. [Strings](./Block01/04_strings/) — completed
5. [Sorting](./Block01/05_sorting/) — foundation completed
6. [Binary Search](./Block01/06_binary_search/) — completed
7. [Two Pointers](./Block01/07_two_pointers/) — completed
8. **Prefix Sums — current topic**
9. Basic Algorithmic Thinking — upcoming within Block 01

当前下一里程碑：完成第一个可验证的 Prefix Sums 小练习，并形成正确复杂度分析、简洁课程笔记和有意义的 Git commit。

> 不预先创建空 Block / 空题库来制造“进度”。主题在真实学习推进时再生成代码和章节证据。

---

## 4. 每个主题的统一课程结构

以后每个主题 README 都尽量使用同一套结构：

### 1. 直觉 / Intuition

先回答：这个算法为什么会出现？它解决了什么原始痛点？先用人能直观看懂的小例子建立感觉，不先背模板。

### 2. 核心思想 / Core Idea

用尽量少的概念说清算法真正依赖的规律、条件、不变量或拆分方式。

### 3. 手推 / Hand Simulation

使用小数据逐步执行。第一次学习时优先让学习者自己判断下一步，再补充解释。

### 4. 实现 / Implementation

先写可读版本，再逐渐认识竞赛模板或更紧凑写法。C++ 是算法实现工具，不在这里另开 C++ 主线。

### 5. 复杂度 / Complexity

说明时间复杂度与辅助空间复杂度，并解释为什么，而不是只记录结论。

### 6. 常见错误 / Common Mistakes

记录真实踩过的坑：边界、下标、循环条件、递归终止、越界、复杂度误判等。

### 7. 精选例题 / Selected Problems

只沉淀有代表性的题。题目的价值在于展示方法、边界或典型错误，不以数量衡量进度。

### 8. 快速复习 / Quick Review

让未来的自己能在几分钟内重新抓住：什么时候用、核心步骤、复杂度、最容易错在哪里。

### 章节模板

```markdown
# <Topic>

## 1. 直觉 / Intuition

## 2. 核心思想 / Core Idea

## 3. 手推 / Hand Simulation

## 4. 实现 / Implementation

## 5. 复杂度 / Complexity

## 6. 常见错误 / Common Mistakes

## 7. 精选例题 / Selected Problems

## 8. 快速复习 / Quick Review
```

现有章节不要求为了形式一次性重写；以后复习、补充例题或完成主题 milestone 时逐步迁移到统一结构，避免文档工程反过来干扰学习主线。

---

## 5. 例题辅导协议

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
7. **选择性沉淀**：只有能代表一个方法、边界或常见错误的典型题，才进入对应主题的 `精选例题`。

如果用户明确要求完整题解，可以直接提供；否则默认保留思考空间。

---

## 6. 三种使用方式

### 第一次学习

`直觉 → 核心思想 → 小数据手推 → 自己实现 → 调试 → 复杂度 → 精选例题 → README`

重点是先做后讲、逐步提示和真实运行。

### 以后复习

优先看：

`快速复习 → 手推 → 常见错误 → 自己重新写核心实现`

如果无法独立解释，再回到核心思想和完整章节。

### 帮助初学者

优先从直觉和一个小例子开始，不默认对方理解模板、递归、下标技巧或竞赛缩写。先问再讲，让对方自己说出关键步骤。

---

## 7. 可验证学习证据

一个主题的 milestone 通常应尽量留下：

- `main.cpp`：可运行的核心实现 / 小练习；
- `README.md`：课程化解释与快速复习材料；
- 运行结果或可复现样例；
- 正确的时间 / 空间复杂度说明；
- 有意义的 Git commit。

不要为了 GitHub 图、题量或目录数量制造空成果。

Git 提交时只添加本主题确实需要的文件，例如：

```bash
git add 05_Algorithm/Block01/<topic>/main.cpp
git add 05_Algorithm/Block01/<topic>/README.md
git commit -m "algorithm: add <topic> foundation"
```

不要默认使用 `git add .`。

---

## 8. 维护规则

- `05_Algorithm/README.md`：课程首页、长期路线和统一教学约定。
- `05_Algorithm/STATUS.md`：当前真实执行状态，不承担完整课程内容。
- 各主题 `README.md`：具体课程章节。
- 各主题代码 / 运行证据：能力验证。
- 路线发生正式变化时由 Horizon Core 决定；Algorithm Specialist 不自行添加第二套 roadmap。
- 普通小练习不触发 STATUS 更新；只有有意义 milestone、blocker、路线实质变化或 Core 依赖变化时更新。

---

## 9. 当前继续位置

**Block 01 — Prefix Sums / 前缀和**

下一步继续采用课程方式：先从“为什么重复区间求和会浪费时间”建立直觉，再手推第一份前缀和数组，最后实现第一个可验证 milestone。
