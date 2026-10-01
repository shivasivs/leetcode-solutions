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

The real submission is **Accepted**: [LeetCode submission](https://leetcode.com/problems/valid-anagram/submissions/2159551435/). The genuine full-screen Chrome result screenshot is included below.

![LeetCode Accepted result](003-result.jpg)
