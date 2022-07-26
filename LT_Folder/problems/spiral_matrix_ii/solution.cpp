class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>ans(n, vector<int>(n));
        
        int top = 0;
        int down = n - 1;
        int left = 0;
        int right = n - 1;
        
        int cnt = 1;
        int dir = 0;
        
        while(top <= down and left <= right){
            if(dir%4 == 0){
                for(int i = left; i <= right; i++)
                    ans[top][i] = cnt++;
                top++;
            }
            else if(dir%4 == 1){
                for(int i = top; i <= down; i++)
                    ans[i][right] = cnt++;
                right--;
            }
            else if(dir%4 == 2){
                for(int i = right; i >= left; i--)
                    ans[down][i] = cnt++;
                down--;
                
            }
            else if(dir%4 == 3){
                for(int i = down; i >= top; i--)
                    ans[i][left] = cnt++;
                left++;
            }
            dir++;
            
        }
        return ans;
        
    }
};