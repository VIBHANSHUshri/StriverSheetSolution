#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int n, int k, vector<int> &stalls) {
        
        sort(stalls.begin(), stalls.end());
        
        
        int low = 1;  
        int high = stalls[n-1] - stalls[0]; 
        
        
        while (low <= high) {
            int mid = (low + high) / 2;
            int count = 1;  
            int lastPosition = stalls[0];  
            
            for (int i = 1; i < n; i++) {
                if (stalls[i] - lastPosition >= mid) {
                    count++;
                    lastPosition = stalls[i];
                    
                    if (count == k) {
                        break;
                    }
                }
            }
            
            if (count >= k) {
              
                low = mid + 1; 
            } else {
              
                high = mid - 1; 
            }
        }
        
       
        return low;
    }
};
