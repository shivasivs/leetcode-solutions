#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int complement = target - nums[i];
            if (seen.count(complement)) return {seen[complement], i};
            seen[nums[i]] = i;
        }
        return {};
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<int> a{2, 7, 11, 15}; assert(solution.twoSum(a, 9) == vector<int>({0, 1}));
    vector<int> b{3, 2, 4}; assert(solution.twoSum(b, 6) == vector<int>({1, 2}));
    vector<int> c{3, 3}; assert(solution.twoSum(c, 6) == vector<int>({0, 1}));
    std::cout << "Two Sum: 3 tests passed\n";
}
#endif
