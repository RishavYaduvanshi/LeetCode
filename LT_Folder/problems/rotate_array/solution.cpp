
class Solution {
public:
    void rotate(vector<int>& nums,int l,int r){
        while(l < r){
            swap(nums[l++],nums[r--]);
        }
    }
    // void print(vector<int>& nums){
    //     for(int i:nums){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        k = k%n;
        rotate(nums,0,n-k-1);
        // print(nums);
        rotate(nums,n-k,n-1);
        // print(nums);
        rotate(nums,0,n-1);
        // print(nums);
    }
};