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

Compile and run the in-file assertions from the repository root with:

```sh
g++ -std=c++17 -DLOCAL_TEST basic-algorithms/007-move-zeroes.cpp -o /tmp/leetcode-local-test && /tmp/leetcode-local-test
```

### LeetCode result evidence

The real submission is **Accepted**: [https://leetcode.com/problems/move-zeroes/submissions/2159554160/](https://leetcode.com/problems/move-zeroes/submissions/2159554160/). The genuine result screenshot was captured during this session but is not yet saved in the repository; add it here as `007-result.png`.
