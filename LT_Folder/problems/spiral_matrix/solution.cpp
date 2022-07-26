class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int top = 0;
        int down = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size() - 1;
        
        vector<int> ans;
        
        int dir = 0;
        
        while(top <= down and left <= right){
            if(dir%4 == 0){
                for(int i = left; i <= right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
            }
            else if(dir%4 == 1){
                for(int i = top; i <= down; i++)
                    ans.push_back(matrix[i][right]);
                right--;
            }
            else if(dir%4 == 2){
                for(int i = right; i >= left; i--)
                    ans.push_back(matrix[down][i]);
                down--;
                
            }
            else if(dir%4 == 3){
                for(int i = down; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
            dir++;
            
        }
        return ans;
        
    }
};