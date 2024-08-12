#include <stack>
using namespace std;

void insert(stack<int>& st, int top) {
     
     if(st.empty() || st.top() <= top)
        {
             st.push(top);
             return;
        }
        
        
        int currtop = st.top();
        st.pop();
        
        insert(st,top);
        st.push(currtop);
  
}

void SortedStack::sort() {
    if (s.empty()) {  // Correct base case to avoid infinite recursion
        return;
    }
    int top = s.top();
    s.pop();
    sort();  // Correct recursive call within the same class
    insert(s, top);
}
