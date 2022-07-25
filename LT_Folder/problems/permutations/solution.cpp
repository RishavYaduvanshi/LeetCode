class Solution {
    
private:
    void perFun(vector<int> nums,int indx, vector<vector<int>> &ans)
    {
        // base condition
        if(indx >= nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j = indx; j < nums.size(); j++){
            swap(nums[j], nums[indx]);
            
            perFun(nums, indx+1, ans);
            // backtracking
            swap(nums[j], nums[indx]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int indx = 0;
        
        perFun(nums,indx,ans);
        
        return ans;
        
    }
};