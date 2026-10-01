#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<int> a{-1,0,3,5,9,12}; assert(solution.search(a, 9) == 4);
    vector<int> b{-1,0,3,5,9,12}; assert(solution.search(b, 2) == -1);
    vector<int> c{}; assert(solution.search(c, 5) == -1);
    std::cout << "Binary Search: 3 tests passed\n";
}
#endif
