/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       // we need to create three

       Node * temp = head;
       while(temp != NULL)
       {
            Node* copyNode = new Node(temp -> val);
            copyNode -> next = temp -> next;
            temp -> next = copyNode;
            temp =temp->next->next;
       }  
        
       //adding random pointers in it;
       temp = head;
       while(temp != NULL)
       {     Node* copyNode = temp -> next;
              if (temp->random != NULL) {
        copyNode->random = temp->random->next;
    } else {
        copyNode->random = NULL;
    }
             temp = temp->next->next;
       }   

       //adding next pointer in it 

       temp = head;
       Node* dummyNode = new Node(-1);
       Node * res = dummyNode;

       while(temp != NULL)
       {
         res -> next = temp -> next;
         temp -> next = temp -> next -> next;
         temp = temp -> next;
         res = res->next;
       }

       return dummyNode -> next;
    }
};