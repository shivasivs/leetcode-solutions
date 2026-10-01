## Problem: Reverse Linked List (Bonus) (Bonus)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

Walk the list with previous and current pointers. Save the next node, reverse the current link, and advance.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The method handles an empty list and a one-node list. LeetCode supplies ListNode; the small class below also permits local checks.

### Local tests

Run `python3 bonus-009-reverse-linked-list.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `bonus-result.png`. Result: **Pending**.
