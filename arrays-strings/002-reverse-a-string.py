class Solution:
    def reverseString(self, s):
        left, right = 0, len(s) - 1
        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1

if __name__ == "__main__":
    chars = ["h", "e", "l", "l", "o"]
    Solution().reverseString(chars)
    assert chars == ["o", "l", "l", "e", "h"]
    chars = ["H", "a", "n", "n", "a", "h"]
    Solution().reverseString(chars)
    assert chars == ["h", "a", "n", "n", "a", "H"]
    chars = []
    Solution().reverseString(chars)
    assert chars == []
    print("Reverse a String: 3 tests passed")
