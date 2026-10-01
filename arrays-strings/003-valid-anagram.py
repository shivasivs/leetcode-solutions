from collections import Counter

class Solution:
    def isAnagram(self, s, t):
        return Counter(s) == Counter(t)

if __name__ == "__main__":
    assert Solution().isAnagram("anagram", "nagaram") is True
    assert Solution().isAnagram("rat", "car") is False
    assert Solution().isAnagram("", "") is True
    print("Valid Anagram: 3 tests passed")
