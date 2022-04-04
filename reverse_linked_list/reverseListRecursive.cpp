/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if( !head || (head -> next == NULL)){
            return head;
        }
        
        ListNode *nhead = reverseList(head->next);
        // code excecuted after return
        head -> next -> next = head;
        head -> next = NULL;        
        return nhead;
    }
};
