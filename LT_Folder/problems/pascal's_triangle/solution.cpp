class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>>a;
        for(int i=0;i<n;i++)
        {
            vector<int>t;
            for(int j=0;j<=i;j++)
            {
                if(j==0 or j==i )
                    t.push_back(1);
                else
                {
                    t.push_back(a[i-1][j-1]+a[i-1][j]);
                }
            }
            a.push_back(t);
        }
        return a;
        
    }
};