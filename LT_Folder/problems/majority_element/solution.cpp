class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int cnt=0;
        int can;
        
        for(int x:a)
        {
            if(cnt==0)
                can=x;
            if(can==x)
                cnt++;
            else
                cnt--;
        }
        
        return can;
        
    }
};