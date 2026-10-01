## Problem: Move Zeroes (Easy-Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Use a write pointer for the next nonzero position. Copy each nonzero value forward, then fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The operation is in place and stable for nonzero elements. Empty arrays and arrays without zeroes need no special handling.

### Local tests

Run `python3 007-move-zeroes.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `007-result.png`. Result: **Pending**.
