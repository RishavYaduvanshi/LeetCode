class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        int lo=0,hi=n-1;
        if(n==1)
            return 0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(mid>0 and mid<n-1)
            {
                if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1])
                    return mid;
                else if(nums[mid-1]>nums[mid])
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            if(mid==0)
            {
                if(nums[mid]>nums[mid+1])
                    return mid;
                else
                    return mid+1;
            }
            if(mid==n-1)
            {
                if(nums[mid]>nums[mid-1])
                    return mid;
                else
                    return mid-1;
            }
        }
        return 0;
    }
};