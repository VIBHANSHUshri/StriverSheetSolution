class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& result, int i, vector<int>& curr, int sum, int j) {   
        // If the sum equals n and we've used exactly k numbers, we have a valid combination.
        if (sum == n && j == k) {
            result.push_back(curr);
            return;
        }
        // If we have more than k numbers or the sum exceeds n, stop the recursion.
        if (j > k || sum > n) {
            return;
        }

        // Explore further numbers starting from i to 9
        for (int idx = i; idx <= 9; idx++) {
            curr.push_back(idx);
            solve(k, n, result, idx + 1, curr, sum + idx, j + 1);
            curr.pop_back(); // Backtrack
        }
    }
 
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> curr;
        solve(k, n, result, 1, curr, 0, 0);
        return result;
    }
};
