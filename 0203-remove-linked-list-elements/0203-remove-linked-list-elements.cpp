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
        if (head == NULL){//empty list
            return head;
        }
        while (head != NULL && head->val == k) {//order is imp //loop is for removing repeated vals in beginning
            head = head->next;
        }
        struct ListNode* p = head;//prev node
        if (p == NULL){
            return head;
        }
        struct ListNode* c = head->next;//current node
        while (c!=NULL){
            if (c->val == k){
                p->next = c->next;
                c = c->next; // as the current node is being removed but prev still exists
                continue;
            }
            p = p->next;
            c = c->next;
        }
        return head;
    }
};