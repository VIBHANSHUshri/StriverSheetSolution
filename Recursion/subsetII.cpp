class Solution {
public:
  
 void solve(vector<int> &arr , int n , int idx , vector<vector<int>>&result ,vector<int>&curr)
    {
          
           result.push_back(curr);
            
           
           for(int i = idx ; i < arr.size() ; i++)
           { 
            if(i > idx && arr[i] == arr[i-1])
            {
                continue;
            }
           curr.push_back(arr[i]);
           
           solve(arr , n , i+1 , result , curr);
           cout << arr[i];
           curr.pop_back();
           }
    }
   
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector<vector<int>>result;
        vector<int>curr;
        solve(nums , n  , 0 , result , curr );
        return result;
    }
};