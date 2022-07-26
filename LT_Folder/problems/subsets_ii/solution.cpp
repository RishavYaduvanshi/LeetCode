class Solution {

private:
    void subSet(vector<int> inp,vector<int> op, set<vector<int>> &ans){
        
        if(inp.size() == 0){
            sort(op.begin(), op.end());
            ans.insert(op);
            return;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;
        op2.push_back(inp[0]);
        inp.erase(inp.begin() + 0);
        subSet(inp,op1,ans);
        subSet(inp,op2,ans);
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> res;
        set<vector<int>> ans;
        vector<int> op;
        
        subSet(nums, op, ans);
        
        for(auto i :ans)
            res.push_back(i);
        return res;
    }
};