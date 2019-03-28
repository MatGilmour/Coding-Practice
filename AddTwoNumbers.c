/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    int savedNum = 0;
    
    while(l1 != NULL){
        
        if((l1->val + l2->val) > 10){
            l2->val = l1->val + l2->val + savedNum;
            savedNum = 1;
        }
        else{
            l2->val = l1->val + l2->val + savedNum;
            savedNum = 0;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return l2;
}
