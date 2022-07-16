class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int> mp;
        for(int i : nums)
            mp[i]++;
        int cnt = 0;
        int ans = 0;
        for(auto i : mp){
            if(mp.find(i.first + 1) != mp.end())
                cnt++;
            else{
                ans = max(ans, cnt + 1);
                cnt = 0;
            }
        }
        return ans;
    }
};