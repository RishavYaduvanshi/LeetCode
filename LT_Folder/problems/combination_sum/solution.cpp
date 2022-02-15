class Solution {
    
    void solve(int ind, vector<int>can, int tar, vector<int> &ds, vector<vector<int>>&ans)
    {
        if(ind == can.size()){
            if(tar == 0)
                ans.push_back(ds);
            return;
        }
        // Pick up element
        if(can[ind] <= tar){
            ds.push_back(can[ind]);
            solve(ind, can, tar-can[ind], ds, ans);
            ds.pop_back();
        }
        solve(ind+1, can, tar, ds, ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& can, int tar) {
        
        vector<vector<int>>ans ;
        vector<int>ds;
        solve(0,can,tar,ds,ans);
        return ans;
        
    }
};