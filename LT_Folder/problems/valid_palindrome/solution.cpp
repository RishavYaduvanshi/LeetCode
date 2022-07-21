class Solution {
public:
    bool isPalindrome(string s) {
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        string temp;
        
        for(char c : s){
            if((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'))
                temp += c;
        }
        string store = temp;
        reverse(temp.begin(),temp.end());
        if(store == temp)
            return true;
        else
            return false;
        
    }
};