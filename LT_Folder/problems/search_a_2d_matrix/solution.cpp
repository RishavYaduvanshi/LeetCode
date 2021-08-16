class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto x:matrix)
        {
            for(auto i:x)
            {
                if(i==target)
                    return true;
            }
        }
        
        return false;
        
    }
};