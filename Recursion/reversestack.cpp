class Solution{
public:
    void insert(int val , stack<int>&st)
    {
           if(st.empty())
           {
               st.push(val);
               return;
           }
           int top = st.top();
           st.pop();
           insert(val,st);
           st.push(top);
        
        
    }
    
  
    void Reverse(stack<int> &st){
         
          if(st.empty())
          {
              return;
          }
          
          int top = st.top();
          st.pop();
          Reverse(st);
          insert(top,st);
    }
};