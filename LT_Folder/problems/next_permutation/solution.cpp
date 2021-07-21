    class Solution {
    public:
    void nextPermutation(vector<int>& nums) {

        int peak_ind=-1;
        int i=1;
        int n=nums.size();
        if(n==1) return;
        while(i<n)
        {
            if(nums[i]>nums[i-1])
                peak_ind=i;
            i++;
        }
        if(peak_ind==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
            int req_ind=peak_ind;
          for(int i=peak_ind;i<n;i++)
          {
              if(nums[i]>nums[peak_ind-1] && nums[i]<nums[peak_ind])
                  req_ind=i;
          }
            swap(nums[peak_ind-1],nums[req_ind]);
            sort(nums.begin()+peak_ind,nums.end());
        }

    }
    };