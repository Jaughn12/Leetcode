# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def insertionSortList(self, head):
        if not head or not head.next:
            return head
        
        dummy = ListNode(0)  # Create a dummy node to serve as the new head of the sorted list
        dummy.next = head
        curr = head.next  # Start with the second node in the original list
        
        while curr:
            if curr.val < head.val:
                prev = dummy
                while prev.next and prev.next.val < curr.val:
                    prev = prev.next
                # Insert the current node between prev and prev.next
                head.next = curr.next
                curr.next = prev.next
                prev.next = curr
                curr = head.next
            else:
                head = head.next
                curr = curr.next
        
        return dummy.next

