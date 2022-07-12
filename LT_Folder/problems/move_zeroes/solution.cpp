class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
//         int right_pointer = nums.size() - 1;
//         int zero_pointer = 0;
        
//         while(zero_pointer <= right_pointer){
//             if(nums[zero_pointer] == 0){
//                 swap(nums[zero_pointer],nums[right_pointer]);
//                 right_pointer--;
//             }
//             else{
//                 zero_pointer++;
//             }
//         }
        if(nums.size() == 1)
            return;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                int ind = i;
                for(int j = ind; j < nums.size()-1; j++){
                    if(nums[j+1] == 0)
                        continue;
                    swap(nums[ind],nums[j+1]);
                    ind++;
                }
            }
        }
        
        
    }
};