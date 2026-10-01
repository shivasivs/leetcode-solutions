class Solution:
    def maxProfit(self, prices):
        lowest, best = float("inf"), 0
        for price in prices:
            lowest = min(lowest, price)
            best = max(best, price - lowest)
        return best

if __name__ == "__main__":
    assert Solution().maxProfit([7, 1, 5, 3, 6, 4]) == 5
    assert Solution().maxProfit([7, 6, 4, 3, 1]) == 0
    assert Solution().maxProfit([2, 4, 1]) == 2
    print("Best Time to Buy and Sell Stock: 3 tests passed")
