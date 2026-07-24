/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* a=head;
    int c=1;
    if(a==NULL){
        return a;
    }
    while(a->next!=NULL){
        c++;
        a=a->next;
    }
    a=head;
    for(int i=0;i<c/2;i++){
        a=a->next;
    }
    return a;
}