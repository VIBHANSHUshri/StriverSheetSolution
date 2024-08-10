class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        Node*temp = head;
        while(temp != NULL)
        {
            Node*nextNode = temp -> next;
            while( nextNode != NULL && temp -> data == nextNode -> data)
            {
                Node* dlt = nextNode;
                
                nextNode = nextNode -> next;
                delete dlt;
            }
            
            //nextNode is a node where different number is
            
            temp -> next = nextNode;
              if (nextNode != NULL) {
                nextNode->prev = temp;
            }
            temp = nextNode;
            
        }
        
        return head;
    }
};