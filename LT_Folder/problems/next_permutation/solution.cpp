class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int indx = -1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[i - 1])
                indx = i;
        }
        if (indx == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            int ans = indx;
            for (int i = indx; i < nums.size(); i++)
            {
                if (nums[i] < nums[indx] and nums[i] > nums[indx - 1])
                    ans = i;
            }
            swap(nums[ans], nums[indx - 1]);

            sort(nums.begin() + indx, nums.end());
        }
        
    }
};