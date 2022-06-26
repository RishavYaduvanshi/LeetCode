class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        bool f = true;
        bool g = true;
        for(int i=0;i<grid.size();i++){
            for(int j=0 ;j<grid[0].size();j++){
                if((i == j or i+j == grid.size()-1) and (grid[i][j] == 0)){
                    f = false;
                    cout<<grid[i][j]<<endl;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0 ;j<grid[0].size();j++){
                if((i != j and i+j != grid.size()-1) and (grid[i][j] != 0)){
                    g = false; 
                    cout<<grid[i][j]<<i<<j<<"nodig\n";
                }
            }
        }
        if(f and g)
            return true;
        else
            return false;
        
        
    }
};