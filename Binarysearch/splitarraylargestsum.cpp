#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int sum = 0;
       for(int  i = 0; i < nums.size() ; i++)
       {
        sum += nums[i];
       }

        
        int high = sum;
        
        while (low < high) {
            int mid = (low + high) / 2;
            int total = 0;
            int count = 1; 
            
            for (int i = 0; i < nums.size(); i++) {
                if (total + nums[i] > mid) {
                    // We need to split here
                    total = nums[i];
                    count++;
                } else {
                    total += nums[i];
                }
            }
            
            if (count > k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        return low;
    }
};