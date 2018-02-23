//Given a linked list, remove the nth node from the end of list and return its head.

//For example,

 //  Given linked list: 1->2->3->4->5, and n = 2.

  // After removing the second node from the end, the linked list becomes 1->2->3->5.
//Note:
//Given n will always be valid.
//Try to do this in one pass.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n <= 0 || head == nullptr) return head;
        ListNode *dummy_head = new ListNode(0), *right = head,
        *left = nullptr;
        dummy_head->next = head;
        while(right->next != nullptr){
            if(--n == 0) left = dummy_head;
            right = right->next;
            left = (left == nullptr? left:left->next);
        }
        if(n == 1) left = dummy_head;
        if(left != nullptr) left->next = left->next->next;
        return dummy_head->next;
}
};
