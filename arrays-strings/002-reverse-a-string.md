## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

Use two pointers at opposite ends. Swap their characters and move both pointers inward until they meet. This avoids allocating another array.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

An empty or one-character array is already reversed. The LeetCode signature uses a mutable character list.

### Local tests

Compile and run the in-file assertions from the repository root with:

```sh
g++ -std=c++17 -DLOCAL_TEST arrays-strings/002-reverse-a-string.cpp -o /tmp/leetcode-local-test && /tmp/leetcode-local-test
```

### LeetCode result evidence

The real submission is **Accepted**: [https://leetcode.com/problems/reverse-string/submissions/2159548420/](https://leetcode.com/problems/reverse-string/submissions/2159548420/). The genuine result screenshot was captured during this session but is not yet saved in the repository; add it here as `002-result.png`.
