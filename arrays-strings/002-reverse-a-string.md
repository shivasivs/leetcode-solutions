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

Run `python3 002-reverse-a-string.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `002-result.png`. Result: **Pending**.
