class Solution {
    
private:
    int solve(vector<int>& nums, int target,string s)
    {
        int lo = 0, hi = nums.size() - 1;
        int res = -1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] < target)
                lo = mid + 1;
            else
            {
                res = mid;
                if(s == "start")
                    hi = mid - 1;
                else if(s == "end")
                    lo = mid + 1;
            }
        }
        return res;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(solve(nums,target,"start"));
        ans.push_back(solve(nums,target,"end"));
        return ans;
    }
};