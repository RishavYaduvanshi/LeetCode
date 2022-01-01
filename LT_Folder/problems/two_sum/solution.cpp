class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            if(mp.find(target-a[i])!=mp.end())
            {
                ans.push_back(mp[target-a[i]]);
                ans.push_back(i);
                break;
            }
            mp[a[i]]=i;
        }
        return ans;
        
    }
};