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

Compile and run the in-file assertions from the repository root with:

```sh
g++ -std=c++17 -DLOCAL_TEST basic-algorithms/006-binary-search.cpp -o /tmp/leetcode-local-test && /tmp/leetcode-local-test
```

### LeetCode result evidence

The real submission is **Accepted**: [https://leetcode.com/problems/binary-search/submissions/2159553912/](https://leetcode.com/problems/binary-search/submissions/2159553912/). The genuine result screenshot was captured during this session but is not yet saved in the repository; add it here as `006-result.png`.
