## Problem: Best Time to Buy and Sell Stock (Easy-Medium)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Keep the lowest price seen so far and the best profit possible. At each price, calculate the profit from buying at that minimum.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The buy must happen before the sell. Decreasing prices should return zero.

### Local tests

Run `python3 004-best-time-to-buy-and-sell-stock.py` from this folder. The file includes typical and edge-case assertions.

### LeetCode result evidence

Submit this solution on LeetCode. After LeetCode shows **Accepted**, save the genuine screenshot here as `004-result.png`. Result: **Pending**.
