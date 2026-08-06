struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL;
    struct ListNode *tail = NULL;
    int c=0,s,x,y,d;
    while (l1!=NULL || l2!=NULL || c){
        x = (l1) ? l1->val : 0;
        y = (l2) ? l2->val : 0;
        s=x+y+c;
        c=s/10;
        d=s%10;
        struct ListNode* r= (struct ListNode*)malloc(sizeof(struct ListNode));
        r->val = d;
        r->next = NULL;
        if(head == NULL){
            head = r;
            tail = r;
        }else{
            tail->next = r;
            tail = r;
        }
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    return head;
}