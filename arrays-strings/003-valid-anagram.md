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

Run `python3 003-valid-anagram.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `003-result.png`. Result: **Pending**.
