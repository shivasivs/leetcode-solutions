## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Count characters in both strings and compare the frequency maps. A character must appear the same number of times in each string.

### Complexity

- Time: O(n)
- Space: O(k)

### Notes

Length differences can return false immediately. This dictionary approach handles arbitrary characters; the common lowercase-only version can use a fixed-size array.

### Local tests

Compile and run the in-file assertions from the repository root with:

```sh
g++ -std=c++17 -DLOCAL_TEST arrays-strings/003-valid-anagram.cpp -o /tmp/leetcode-local-test && /tmp/leetcode-local-test
```

### LeetCode result evidence

The real submission is **Accepted**: [https://leetcode.com/problems/valid-anagram/submissions/2159551435/](https://leetcode.com/problems/valid-anagram/submissions/2159551435/). The genuine result screenshot was captured during this session but is not yet saved in the repository; add it here as `003-result.png`.
