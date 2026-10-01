#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        for (int value : nums) if (value != 0) nums[write++] = value;
        while (write < static_cast<int>(nums.size())) nums[write++] = 0;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<int> a{0,1,0,3,12}; solution.moveZeroes(a); assert(a == vector<int>({1,3,12,0,0}));
    vector<int> b{0}; solution.moveZeroes(b); assert(b == vector<int>({0}));
    vector<int> c{1,2,3}; solution.moveZeroes(c); assert(c == vector<int>({1,2,3}));
    std::cout << "Move Zeroes: 3 tests passed\n";
}
#endif
