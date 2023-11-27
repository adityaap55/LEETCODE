class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy{0};
        dummy.next=head;
        auto slow = &dummy;
        auto fast = &dummy;

        while(n>0)
        {
            fast=fast->next;
            --n;
        }

        while(fast->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        auto node1 = slow->next;
        slow->next = slow->next->next;
        delete node1;

        return dummy.next;
    }
};
