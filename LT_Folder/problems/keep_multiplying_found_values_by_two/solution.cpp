#include<bits/stdc++.h>
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_set<int> s;
        for(int x:nums)
            s.insert(x);
        
        bool f = true;
        while(f)
        {
            if(s.find(original)!=s.end())
                original*=2;
            else
                f=false;
        }
        return original;
        
    }
};