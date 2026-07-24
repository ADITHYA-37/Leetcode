/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* a=head;
    if(a==NULL){
        return a;
    }
    while(a->next!=NULL){
        if(a->val==a->next->val){
            struct ListNode* b= a->next;
            a->next= b->next;
            free(b);
        }
        else{
            a=a->next;
        }
    }
    return head;
}