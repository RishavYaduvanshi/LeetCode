class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans = max(ans, nums[i]+i);
            cout<<ans<<endl;
            if(ans >= nums.size()-1)
                return true;
            if(i == ans)
                return false;
        }
        return false;
        
    }
};