class Solution {

private:
    void subSet(vector<int> inp,int ind,vector<int> ds, vector<vector<int>> &ans){
        ans.push_back(ds);
        
        for(int i = ind;i < inp.size();i++){
            if(i != ind and inp[i] == inp[i-1])
                continue;
            ds.push_back(inp[i]);
            subSet(inp,i+1,ds,ans);
            ds.pop_back();
        }
       
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        subSet(nums,0, ds, ans);
        return ans;
    }
};