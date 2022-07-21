class Solution {
public:
    void funRev(string &s,int lo, int hi){
        while(lo < hi){
            swap(s[lo++], s[hi--]);
        }
    }
    string reverseWords(string s) {
        
        int st = 0;
        int en;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == ' '  or i == s.size()){
                en = i - 1;
                funRev(s,st,en);
                st = i + 1;
            }
        }
        return s;
    }
};