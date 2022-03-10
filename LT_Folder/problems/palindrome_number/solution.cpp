class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        string t = to_string(x);
        string temp = t;
        reverse(t.begin(),t.end());
        if(t == temp)
            return true;
        else
            return false;
        
    }
};