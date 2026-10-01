class Solution:
    def isValid(self, s):
        pairs = {")": "(", "]": "[", "}": "{"}
        stack = []
        for char in s:
            if char in pairs.values():
                stack.append(char)
            elif not stack or stack.pop() != pairs.get(char):
                return False
        return not stack

if __name__ == "__main__":
    assert Solution().isValid("()") is True
    assert Solution().isValid("()[]{}") is True
    assert Solution().isValid("(]") is False
    assert Solution().isValid("{") is False
    print("Valid Parentheses: 4 tests passed")
