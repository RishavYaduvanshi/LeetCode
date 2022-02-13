class Solution {
public:
    int countOperations(int num1, int num2) {
        
        int count = 0;
        while (1)
        {
            if (num1 == 0 or num2 == 0)
                break;
            if (num1 > num2 and num1 - num2 >= 0)
            {
                num1 -= num2;
                count += 1;
            }
            else if(num2 > num1 and num2 - num1 >= 0){
                num2 -= num1;
                count += 1;
                }
            else if( num1 == num2){
                num1 -= num2;
                count += 1;
            }
        }
        return count;
        
    }
};