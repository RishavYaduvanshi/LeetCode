class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        
        int r = mat.size();
        int c = mat[0].size();
        int i=0,j=c-1;
        while(i<r and j>=0)
        {
            if(t == mat[i][j])
                return true;
            if(t < mat[i][j])
                j--;
            else if(t > mat[i][j])
                i++;
        }
        return false;
        
    }
};