class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = goal.size();
        if(s.size() > n)
            return false;
        int j = -1;
        vector<int> st;
        for(int i = 0 ;i < goal.size(); i++){
            if(goal[i] == s[0]){
                st.push_back(i);
            }
        }
        if(st.size() == 0)
            return false;
        int fl = 0;
        for(int k = 0; k < st.size(); k++){
            j = st[k];
            for(int i = 0; i < s.size(); i++){
                j = j % n;
                if(s[i] != goal[j++]){
                    fl++;
                    break;
                }
            }
        }
        if(fl == st.size())
            return false;
        else
            return true;
        
    }
};