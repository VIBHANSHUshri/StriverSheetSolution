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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        int cy = 0;
        while(l1 != NULL || l2 != NULL){
            int sum = 0 + cy;
            if(l1 != NULL){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            cy = sum/10;
            sum = sum % 10;
            temp->next = new ListNode(sum);
            temp = temp->next;
        }
        if(cy == 1){
            temp->next = new ListNode(1);
        }
        return ans->next;
    }
};