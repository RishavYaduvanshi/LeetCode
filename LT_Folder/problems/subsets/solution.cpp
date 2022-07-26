class Solution {
    
private:
    void solveFun(vector<int> inp, vector<int> op, vector<vector<int>> &ans){
        
        if(inp.size() == 0){
            ans.push_back(op);
            return;
        }
        vector<int> op1 = op;
        vector<int> op2 = op;
        op2.push_back(inp[0]);
        inp.erase(inp.begin()+0);
        solveFun(inp,op1,ans);
        solveFun(inp,op2,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       
        vector<vector<int>> ans;
        vector<int> op;
        solveFun(nums,op,ans);
        return ans;
    }
};