class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> ump;
        
        if(t.size() < s.size())
            return false;
        
        for(char c: s)
            ump[c]++;
        for(char c : t){
            if(ump[c]){
                ump[c]--;
                if(ump[c] == 0)
                    ump.erase(ump[c]);
            }
            else
                return false;
        }
        return true;
    }
};