## Problem: Binary Search (Easy-Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Compare target with the middle value. Since the array is sorted, discard the half that cannot contain the target and continue.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input must be sorted. Use the inclusive interval and stop when left exceeds right.

### Local tests

Run `python3 006-binary-search.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `006-result.png`. Result: **Pending**.
