class Solution {
public:
    bool isHappy(int n) {
        map<int,int>mp;
        while(n != 1){
            mp[n]++;
            string t = to_string(n);
            n = 0;
            for(int i =0; i < t.size(); i++){
                int k = (int)t[i] - 48;
                n += k * k;
            }
        
            if(mp[n])
                return false;
        }
        return true;
        
    }
};