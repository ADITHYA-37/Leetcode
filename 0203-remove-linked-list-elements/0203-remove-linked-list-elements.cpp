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
    ListNode* removeElements(ListNode* head, int k) {
        if (head == NULL){
            return head;
        }
        while (head != NULL && head->val == k) {//order is imp 
            head = head->next;
        }
        struct ListNode* p = head;
        if (p == NULL){
            return head;
        }
        struct ListNode* c = head->next;
        while (c!=NULL){
            if (c->val == k){
                p->next = c->next;
                c = c->next;
                continue;
            }
            p = p->next;
            c = c->next;
        }
        return head;
    }
};