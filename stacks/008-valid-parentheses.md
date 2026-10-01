## Problem: Valid Parentheses (Easy-Medium)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Push opening brackets onto a stack. For a closing bracket, check that the stack top is its matching opener; the string is valid only if the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

A closing bracket with an empty stack is invalid. The final empty-stack check catches unmatched opening brackets.

### Local tests

Compile and run the in-file assertions from the repository root with:

```sh
g++ -std=c++17 -DLOCAL_TEST stacks/008-valid-parentheses.cpp -o /tmp/leetcode-local-test && /tmp/leetcode-local-test
```

### LeetCode result evidence

The real submission is **Accepted**: [https://leetcode.com/problems/valid-parentheses/submissions/2159554411/](https://leetcode.com/problems/valid-parentheses/submissions/2159554411/). The genuine result screenshot was captured during this session but is not yet saved in the repository; add it here as `008-result.png`.
