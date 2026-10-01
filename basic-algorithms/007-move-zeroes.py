class Solution:
    def moveZeroes(self, nums):
        write = 0
        for value in nums:
            if value != 0:
                nums[write] = value
                write += 1
        while write < len(nums):
            nums[write] = 0
            write += 1

if __name__ == "__main__":
    values = [0, 1, 0, 3, 12]
    Solution().moveZeroes(values)
    assert values == [1, 3, 12, 0, 0]
    values = [0]
    Solution().moveZeroes(values)
    assert values == [0]
    values = [1, 2, 3]
    Solution().moveZeroes(values)
    assert values == [1, 2, 3]
    print("Move Zeroes: 3 tests passed")
