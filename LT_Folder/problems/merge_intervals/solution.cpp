class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        
        vector<int> com = intervals[0];
        
        for(auto i : intervals){
            if(com[1] >= i[0])
                com[1] = max(i[1], com[1]);
            else{
                ans.push_back(com);
                com = i;
            }
        }
        ans.push_back(com);
        return ans;
        
        
    }
};