# LeetCode 1524 — Number of Sub-arrays With Odd Sum

**Difficulty:** Medium  
**Problem Link:** https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/

## Problem
Given an integer array `arr`, count the number of contiguous subarrays having an odd sum. Return the answer modulo `10^9 + 7`.

## Approach 1: Brute Force
- Generate all subarrays using three nested loops.
- Calculate each subarray's sum and count it if odd.
- **Time:** O(n³) | **Space:** O(1)

## Approach 2: Better (Prefix Sum)
- Precompute prefix sums.
- Calculate subarray sums in O(1) using prefix sums.
- **Time:** O(n²) | **Space:** O(n)

## Approach 3: Optimal (Prefix Sum + Counting)
- Maintain counts of even and odd prefix sums.
- An odd sum occurs when two prefix sums have different parity.
- **Time:** O(n) | **Space:** O(n)

## Approach 4: Optimized (Running Sum)
- Maintain a running sum and counts of even and odd prefix sums.
- If the running sum is odd, add `even` to the answer.
- Otherwise, add `odd` to the answer.
- **Time:** O(n) | **Space:** O(1)

## Conclusion
The optimized approach is best, achieving **O(n) time and O(1) extra space**.