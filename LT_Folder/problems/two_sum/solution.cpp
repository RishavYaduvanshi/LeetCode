class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int>mp;
        vector<int>ans,sum;
        
        for(int i=0;i<n;i++)
        {
            int d=target-nums[i];
            
            if(mp[d])
            {
                ans.push_back(mp[d]-1);
                ans.push_back(i);
            }
            mp[nums[i]]=i+1;
            
        }
        return ans;
        
    }
};