class Solution {
    
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> res;
        vector<string>temp =  strs;
        for(int i = 0; i < temp.size(); i++)
            sort(temp[i].begin(),temp[i].end());
        
        unordered_map<string,vector<string>> ump;
        // for(auto i:temp)
        //     cout<<i<<endl;
        for(int i = 0; i < strs.size(); i++){
            ump[temp[i]].push_back(strs[i]);
        }
        
        for(auto x:ump){
            vector<string>ans;
            for(auto i: x.second)
                ans.push_back(i);
            res.push_back(ans);
        }
        
        return res;
    }
};