class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int>ans;
    
        vector<int>ind;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == key)
                ind.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            for(int j:ind){
                // cout<<(abs(i-j) <= k)<<endl;
                if(abs(i - j) <= k ){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
        
    }
};