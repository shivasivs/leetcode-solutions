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

Run `python3 008-valid-parentheses.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `008-result.png`. Result: **Pending**.
