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
    ListNode* reverselist(ListNode* head)
    {
        ListNode* temp = head;
        ListNode * prevNode = NULL;
        ListNode* nextNode = NULL;

        while(temp != NULL)
        {
            nextNode = temp -> next;
            temp -> next = prevNode;
            prevNode = temp;
            temp = nextNode;
        }

         return prevNode;
    }
    
    ListNode * getkthnode(ListNode*temp , int k)
    {
        k = k-1;
        while(temp != NULL && k >0)
        {
          temp = temp -> next;
          k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
           
              
              ListNode *temp = head;
              ListNode *prevLast = NULL;

              while(temp != NULL)
              {
                  ListNode* kthnode = getkthnode(temp , k);

                  if(kthnode == NULL)
                  {
                    if(prevLast)
                    {
                        prevLast -> next = temp;
                    }
                    break;
                  }
                  
                ListNode *nextNode = kthnode -> next;
                kthnode -> next = NULL;

                 reverselist(temp);

                 if(temp == head)
                 {
                    head = kthnode;
                 }
                 else{
                       prevLast -> next = kthnode;
                 }
                
              prevLast = temp;
              temp = nextNode;
              
              }
 
      return head;
            
    }
};
