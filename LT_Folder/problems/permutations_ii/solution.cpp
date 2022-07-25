class Solution {
private:
    void perFun(vector<int>nums, int indx, set<vector<int>> &st)
    {
        if(indx >= nums.size()){
            st.insert(nums);
            return;
        }
        for(int i = indx; i < nums.size(); i++){
            swap(nums[indx],nums[i]);
            perFun(nums, indx+1, st);
            swap(nums[indx], nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        set<vector<int>> st;
        
        int indx = 0;
        
        perFun(nums,indx,st);
            
        for(auto i : st)
            ans.push_back(i);
        return ans;
        
    }
};