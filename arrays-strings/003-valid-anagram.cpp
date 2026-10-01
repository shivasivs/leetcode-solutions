#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> counts;
        for (char c : s) ++counts[c];
        for (char c : t) if (--counts[c] < 0) return false;
        return true;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    assert(solution.isAnagram("anagram", "nagaram"));
    assert(!solution.isAnagram("rat", "car"));
    assert(solution.isAnagram("", ""));
    std::cout << "Valid Anagram: 3 tests passed\n";
}
#endif
