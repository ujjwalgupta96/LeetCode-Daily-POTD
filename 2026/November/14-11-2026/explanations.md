# Minimum Positive Sum Subarray

**Problem:** [LeetCode 3364](https://leetcode.com/problems/minimum-positive-sum-subarray/)

**Topic:** Sliding Window

**Language:** C++17

## Approach

1. Initialize `ans = INT_MAX` to store the minimum positive sum.
2. Iterate over all possible subarray sizes from `l` to `r`.
3. Calculate the sum of the first window of each size.
4. Use the **Sliding Window** technique to move the window forward:
   - Remove the leftmost element.
   - Add the next rightmost element.
5. Whenever the window sum is positive, update `ans` with the minimum value.
6. Return `-1` if no positive subarray sum exists; otherwise, return `ans`.

## Complexity Analysis

- **Time Complexity:** O(n × (r - l + 1)), where `n` is the array size, assuming valid window sizes.
- **Space Complexity:** O(1), as only a few variables are used.

## Key Learning

Sliding Window efficiently calculates consecutive subarray sums by updating the previous sum instead of recalculating it from scratch.