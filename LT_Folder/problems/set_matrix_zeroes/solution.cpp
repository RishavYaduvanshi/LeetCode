class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
    int row = m.size();
    int col = m[0].size();
    set<int>r;
    set<int>c;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(m[i][j]==0)
            {
               r.insert(i);
                c.insert(j);
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(r.find(i)!=r.end() or c.find(j)!=c.end())
                m[i][j]=0;
        }
    }
    }
};