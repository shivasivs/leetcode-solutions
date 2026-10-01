#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = static_cast<int>(s.size()) - 1;
        while (left < right) {
            swap(s[left], s[right]);
            ++left; --right;
        }
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    vector<char> a{'h','e','l','l','o'}; solution.reverseString(a); assert(a == vector<char>({'o','l','l','e','h'}));
    vector<char> b{'H','a','n','n','a','h'}; solution.reverseString(b); assert(b == vector<char>({'h','a','n','n','a','H'}));
    vector<char> c{'x'}; solution.reverseString(c); assert(c == vector<char>({'x'}));
    std::cout << "Reverse a String: 3 tests passed\n";
}
#endif
