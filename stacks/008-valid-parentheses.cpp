#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') open.push(c);
            else {
                if (open.empty()) return false;
                char top = open.top(); open.pop();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) return false;
            }
        }
        return open.empty();
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    Solution solution;
    assert(solution.isValid("()"));
    assert(solution.isValid("()[]{}"));
    assert(!solution.isValid("(]"));
    assert(!solution.isValid("{"));
    std::cout << "Valid Parentheses: 4 tests passed\n";
}
#endif
