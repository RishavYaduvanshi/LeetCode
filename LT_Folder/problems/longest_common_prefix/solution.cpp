class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int len = 0;
        for(auto x:strs){
            if(x.size() > len)
                len = x.size();
        }
        if(strs.size() == 1)
            return strs[0];
        string ans = "";
        char t;
        for(int i = 0;i < len; i++){
            bool f = true;
            for(int j = 1; j < strs.size(); j++){
                t = strs[j-1][i];
                if(strs[j][i] != strs[j-1][i]){
                    f = false;
                    break;
                }
            } 
            if(f)
               ans += t;
            else
                break;
        }
        return ans;
        
    }
};