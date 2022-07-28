class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char,int> mp;
        if(t.size() < s.size())
            return false;
        for(char i : s)
            mp[i]++;
        for(char i : t){
            if(mp[i])
                mp[i]--;
            else
                return false;
        }
        return true;
    }
};