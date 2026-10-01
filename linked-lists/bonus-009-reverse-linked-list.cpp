#include <vector>
using namespace std;

#ifdef LOCAL_TEST
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x = 0, ListNode* n = nullptr) : val(x), next(n) {}
};
#endif

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;
        ListNode* current = head;
        while (current) {
            ListNode* following = current->next;
            current->next = previous;
            previous = current;
            current = following;
        }
        return previous;
    }
};

#ifdef LOCAL_TEST
#include <cassert>
#include <iostream>
int main() {
    ListNode a(1), b(2), c(3), d(4), e(5); a.next=&b; b.next=&c; c.next=&d; d.next=&e;
    ListNode* reversed = Solution().reverseList(&a);
    int expected[] = {5,4,3,2,1};
    for (int value : expected) { assert(reversed && reversed->val == value); reversed = reversed->next; }
    assert(!reversed);
    ListNode one(7); assert(Solution().reverseList(&one) == &one);
    assert(Solution().reverseList(nullptr) == nullptr);
    std::cout << "Reverse Linked List (Bonus): 3 tests passed\n";
}
#endif
