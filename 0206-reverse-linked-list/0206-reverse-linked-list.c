/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* c=head;
    struct ListNode* p=NULL;
    if(head==NULL){
        return head;
    }
    while(c!=NULL){
        struct ListNode* n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}