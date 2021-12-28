class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        
        int n = m.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int l=0,r=n-1;
            while(l<=r)
            {
                swap(m[i][l],m[i][r]);
                l++;
                r--;
            }
        }
        
        
        
    }
};