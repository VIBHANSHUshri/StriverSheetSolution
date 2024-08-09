class Solution {
  public:
   Node* reverseLinkedList(Node *head)
   {
       Node* temp = head;
       Node* prev = NULL;
       while(temp != NULL)
       {
           Node * front = temp -> next;
           temp -> next = prev;
           prev = temp ;
           temp = front;
       }
       return prev;
   }
    Node* addOne(Node* head) {
       int carry = 1;
       head = reverseLinkedList(head);
       Node*temp = head;
       
       while(temp != NULL)
       {
           temp -> data = temp -> data + carry;
           if(temp -> data < 10)
           {
               carry = 0;
               break;
           }
           else{
               temp -> data = 0;
               carry = 1;
           }
           if(temp -> next == NULL && carry == 1)
           {
               Node* newNode = new Node(1);
               temp -> next = newNode;
               carry = 0;
           }
           temp = temp -> next;
       }
       
       head = reverseLinkedList(head);
       return head;
    }
};