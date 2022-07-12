class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int left_pointer = 0;
        int middile_pointer = 0;
        int right_pointer = nums.size() - 1;
        while(middile_pointer <= right_pointer){
            if(nums[middile_pointer] == 0){
                swap(nums[middile_pointer],nums[left_pointer]);
                middile_pointer++;
                left_pointer++;
            }
            else if(nums[middile_pointer] == 1){
                middile_pointer++;
            }
            else if(nums[middile_pointer] == 2){
                swap(nums[middile_pointer],nums[right_pointer]);
                right_pointer--;
            }
        }
        
        
    }
};