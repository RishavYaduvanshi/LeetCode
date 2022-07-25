class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int jmp = 0;
        
        if(nums.size() == 1)
            return 0;
        
        int ans1 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                ans1 = max(ans1,nums[i] + i);
                jmp++;
                if(ans1 >= nums.size()-1)
                return jmp;
                continue;
            }
            ans = max(ans,nums[i] + i);
            
            if(i == ans1 and ans != ans1){
                ans1 = ans;
                jmp++;
            }
            
            if(ans1 >= nums.size()-1)
                return jmp;
            
        }
        return jmp;
    }
};