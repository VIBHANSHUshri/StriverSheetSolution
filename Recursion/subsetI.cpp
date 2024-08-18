class Solution {
public:
 
    void solve(vector<int>& temp, vector<int>& nums , vector<vector<int>>&v , int cnt)
    { 
          //its  a question of inclusion and exclusion you need to check for every element 
           
           if(cnt == nums.size())
           {
            v.push_back(temp);
            return;
           }
          
          temp.push_back(nums[cnt]);
          solve(temp , nums , v , cnt+1);
          temp.pop_back();
          solve(temp , nums , v ,cnt+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
          
          vector<vector<int>> v;
          vector<int>temp;
         solve(temp , nums, v , 0);
          return v;
    }
};