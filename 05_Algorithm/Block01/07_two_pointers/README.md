# Two Pointers

前提：正序升序数组

核心思路：用两个指针分别指向数组两端，根据当前两数之和与 target 的大小关系移动对应指针，不断缩小搜索范围。

当 sum < target 时：left++

当 sum > target 时：right--

当 sum == target 时：return true

时间复杂度：最坏O(n)

额外空间复杂度：O(1)