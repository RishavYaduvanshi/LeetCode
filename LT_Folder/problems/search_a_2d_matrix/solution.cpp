class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        
        int row = m.size();
        int col = m[0].size();
        
        int i=0,j=col-1;
        
        while(i<row and j>=0)
        {
            if(m[i][j]==target)
                return true;
            else if(m[i][j]<target)
                i++;
            else if(m[i][j]>target)
                j--;
        }
        return false;
        
    }
};