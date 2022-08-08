class Solution {
    
private:
    void solveFun(vector<int> inp, int ind,vector<int> ds, vector<vector<int>> &ans){
        
        if(ind == inp.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(inp[ind]);
        solveFun(inp,ind+1,ds,ans);
        ds.pop_back();
        solveFun(inp,ind+1,ds,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<vector<int>> ans;
        vector<int> ds;
        solveFun(nums,0,ds,ans);
        return ans;
    }
};