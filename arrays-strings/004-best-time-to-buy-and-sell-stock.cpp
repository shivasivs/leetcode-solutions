#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX, best = 0;
        for (int price : prices) {
            lowest = min(lowest, price);
            best = max(best, price - lowest);
        }
        return best;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<int> a{7,1,5,3,6,4}; assert(solution.maxProfit(a) == 5);
    vector<int> b{7,6,4,3,1}; assert(solution.maxProfit(b) == 0);
    vector<int> c{2,4,1}; assert(solution.maxProfit(c) == 2);
    std::cout << "Best Time to Buy and Sell Stock: 3 tests passed\n";
}
#endif
