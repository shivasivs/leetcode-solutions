## Problem: Longest Common Prefix (Easy-Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Start with the first word as the candidate prefix. Shorten it until every other word starts with it; return the remaining prefix.

### Complexity

- Time: O(S)
- Space: O(1) extra space

### Notes

S is the total number of characters inspected. An empty input list or any mismatch at the first character produces an empty prefix.

### Local tests

Run `python3 005-longest-common-prefix.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `005-result.png`. Result: **Pending**.
