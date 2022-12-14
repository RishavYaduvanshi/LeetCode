class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>st;
        vector<int>ans;
        int n = nums2.size();
        for(int i = n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                ans.push_back(-1);
            }
            else if(st.size()>0 and st.top() > nums2[i])
                ans.push_back(st.top());
            else
            {
                while(st.size()>0 and st.top() <= nums2[i])
                    st.pop();
                if(st.size()==0)
                    ans.push_back(-1);
                else
                    ans.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        
        reverse(ans.begin(),ans.end());
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[nums2[i]]=ans[i];
        }
        
        vector<int>res;
        for(int i:nums1)
        {
            res.push_back(mp[i]);
        }
        return res;
        
    }
};