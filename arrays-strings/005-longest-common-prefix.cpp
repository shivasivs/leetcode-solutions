#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); ++i) {
            while (strs[i].compare(0, prefix.size(), prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) return "";
            }
        }
        return prefix;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<string> a{"flower","flow","flight"}; assert(solution.longestCommonPrefix(a) == "fl");
    vector<string> b{"dog","racecar","car"}; assert(solution.longestCommonPrefix(b) == "");
    vector<string> c{"alone"}; assert(solution.longestCommonPrefix(c) == "alone");
    std::cout << "Longest Common Prefix: 3 tests passed\n";
}
#endif
