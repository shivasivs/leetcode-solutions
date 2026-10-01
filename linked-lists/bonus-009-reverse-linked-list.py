class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head):
        previous, current = None, head
        while current:
            following = current.next
            current.next = previous
            previous, current = current, following
        return previous

def build(values):
    dummy = ListNode(); tail = dummy
    for value in values:
        tail.next = ListNode(value); tail = tail.next
    return dummy.next

def values(head):
    result = []
    while head:
        result.append(head.val); head = head.next
    return result

if __name__ == "__main__":
    assert values(Solution().reverseList(build([1, 2, 3, 4, 5]))) == [5, 4, 3, 2, 1]
    assert values(Solution().reverseList(build([1, 2]))) == [2, 1]
    assert values(Solution().reverseList(None)) == []
    print("Reverse Linked List (Bonus): 3 tests passed")
