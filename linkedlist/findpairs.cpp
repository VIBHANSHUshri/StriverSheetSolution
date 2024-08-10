class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
       vector<pair<int, int>>v;
        Node * temp = head;
       Node* temp2 = head;
       while(temp2 -> next != NULL)
       {
          temp2  = temp2 -> next;
       }
       
       while(temp -> data < temp2 -> data)
       {
            if(temp -> data + temp2 -> data == target)
            {
                v.push_back({temp->data,temp2->data});
                temp = temp -> next;
                temp2 = temp2 -> prev;
            }
            else if(temp -> data + temp2 -> data > target)
            {
                temp2 = temp2->prev;
            }
            else{
                temp = temp -> next;
            }
            
       }
       
       return v;
        
       
        
       
    }
};