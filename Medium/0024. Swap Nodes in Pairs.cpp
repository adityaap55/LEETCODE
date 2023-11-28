class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy{0};
        dummy.next = head;
        auto curr = &dummy;

        while(curr->next && curr->next->next)
        {
            auto next1 = curr->next;
            auto next2 = next1->next;
            auto next3 = next2->next;
            curr->next = next2;
            next2->next = next1;
            next1->next = next3;
            curr = next1;
        }
        return dummy.next;
    }
};
