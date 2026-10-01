## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Track each previously seen number and index in a hash map. For each number, check whether its complement was seen; this gives a one-pass solution.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The problem guarantees one answer. Check the complement before saving the current value so the same array element is not used twice.

### Local tests

Run `python3 001-two-sum.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

The genuine Accepted result screenshot already present in the GitHub repository is preserved here.

![LeetCode Accepted result](001-result.png)

Result: **Accepted**.
