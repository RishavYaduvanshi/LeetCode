class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>eve;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            if(i&1)
                odd.push_back(nums[i]);
            else
                eve.push_back(nums[i]);
        }
        sort(eve.begin(),eve.end());
        sort(odd.begin(),odd.end(),greater<>());
        vector<int>ans;
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(i&1)
                ans.push_back(odd[o++]);
            else
                ans.push_back(eve[e++]);
        }
        return ans;
    }
};