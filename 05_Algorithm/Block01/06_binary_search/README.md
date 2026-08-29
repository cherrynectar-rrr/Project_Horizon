# Binary Search — 二分查找

[← 返回 Block 01](../README.md)

## 1. 本课概览

前面我们已经知道：按值线性查找最坏需要从头看到尾，也就是 `O(n)`。

这一课第一次真正利用一个额外条件：

> **数组已经按升序排列。**

有序以后，我们不再需要每个元素都检查。

每次比较中间位置 `mid`，都可以直接排除当前搜索区间的一半。

本课真实练习实现的是一个迭代二分查找：

- 找到目标时返回下标；
- 找不到时返回 `-1`；
- 最好时间复杂度 `O(1)`；
- 最坏时间复杂度 `O(log n)`；
- 辅助空间 `O(1)`。

---

## 2. 直觉 / Intuition

假设升序数组是：

```text
[1, 3, 5, 7, 9, 11, 13]
```

目标是：

```text
11
```

如果线性查找，可以从 `1` 开始一个一个检查。

但因为数组有序，我们可以先看中间的 `7`。

现在知道：

```text
11 > 7
```

于是 `7` 左边那些更小的数全部不可能是 `11`。

它们甚至不需要再看。

这就是二分最重要的能力：

> **一次比较不仅告诉我们 mid 对不对，还能证明一整块区域不可能包含答案。**

---

## 3. 核心思想 / Core Idea

维护当前仍然可能包含目标的区间：

```text
[left, right]
```

每轮计算：

```cpp
mid = (left + right) / 2;
```

然后分三种情况。

### `nums[mid] == target`

已经找到，直接返回 `mid`。

### `target > nums[mid]`

由于数组升序：

```text
left ... mid
```

这一整段都不会出现比 `nums[mid]` 更大的目标。

所以可以排除 `mid` 以及它左边：

```cpp
left = mid + 1;
```

### `target < nums[mid]`

同理，`mid` 右边全部更大，不可能包含更小的目标：

```cpp
right = mid - 1;
```

核心不是背这两句更新，而是理解：

> **为什么有序性能让被排除的那一半永久不用再看。**

---

## 4. 手推 / Hand Simulation

数组：

```text
index: 0  1  2  3  4   5   6
nums:  1  3  5  7  9  11  13
```

查找：

```text
target = 11
```

### 第 1 轮

```text
left = 0
right = 6
mid = 3
nums[mid] = 7
```

因为：

```text
11 > 7
```

所以：

```text
left = 4
```

新的候选区间：

```text
[9, 11, 13]
```

### 第 2 轮

```text
left = 4
right = 6
mid = 5
nums[mid] = 11
```

命中，返回：

```text
5
```

原本有 7 个候选位置，只进行了 2 次比较。

---

## 5. 实现 / Implementation

本课真实代码：[`main.cpp`](./main.cpp)。

```cpp
int binarySearch(const std::vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (right + left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
```

### 为什么是 `left <= right`？

当：

```text
left == right
```

搜索区间中仍然剩下最后一个候选位置，所以还必须检查一次。

### 为什么是 `mid + 1` 和 `mid - 1`？

`mid` 已经比较过，而且已经确认不是目标。

下一轮不应该再次包含它。

### 为什么最后返回 `-1`？

循环结束意味着：

```text
left > right
```

候选区间已经为空，因此目标不存在。

---

## 6. 复杂度 / Complexity

每进行一次比较，候选区间大约缩小一半：

```text
n
n / 2
n / 4
n / 8
...
```

需要多少次“除以 2”才能缩到只剩一个位置？

数量级就是：

```text
log₂ n
```

因此：

| 情况 | 时间复杂度 |
| --- | --- |
| 第一次 `mid` 就命中 | `O(1)` |
| 最坏情况 | `O(log n)` |
| 辅助空间 | `O(1)` |

当前实现使用循环而不是递归，只维护 `left`、`right`、`mid` 等固定数量变量。

---

## 7. 常见错误 / Common Mistakes

### 在无序数组上直接二分

当前二分能够排除一半的根本理由是：

```text
数组升序有序
```

失去这个条件，`target > nums[mid]` 就不能证明目标一定在右侧。

### 更新成 `left = mid` 或 `right = mid`

如果 `mid` 已经确定不是答案，却还留在下一轮区间里，某些情况下区间可能不再缩小，导致死循环。

### 把 `left < right` 和当前区间定义混用

当前实现维护的是闭区间 `[left, right]`，所以最后一个位置也要检查，循环条件是：

```cpp
left <= right
```

### 只背移动方向，不理解理由

真正需要记住的是有序性带来的排除逻辑，而不是孤立地背 `left++` 或 `right--`。

---

## 8. 精选例题 / Selected Problems

暂未额外收录。

当前练习先把“在升序数组中查找一个确定目标”做扎实。以后遇到边界二分、答案二分等变化时，再在真实学习进度中扩展，不提前堆模板。

---

## 9. 快速复习 / Quick Review

先闭卷回答：

1. 当前二分查找最重要的前提是什么？
2. `target > nums[mid]` 时，为什么左半边可以全部扔掉？
3. 为什么当前实现是 `left = mid + 1`？
4. 为什么循环条件是 `left <= right`？
5. 为什么最坏时间复杂度是 `O(log n)`？
6. 搜索失败时为什么最终一定会得到 `left > right`？

### 一句话唤醒

> **二分查找利用有序性，让一次比较能够排除一半仍可能的答案。**

---

## 10. Knowledge Connections

**Before:** [Sorting — 排序基础](../05_sorting/)  
**Now:** 第一次利用有序性显著缩小搜索空间  
**Next:** [Two Pointers — 双指针](../07_two_pointers/) 会继续利用升序结构，但采用另一种“单调排除”方式。
