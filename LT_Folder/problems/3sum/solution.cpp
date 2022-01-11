class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        
        sort(a.begin(),a.end());
        int n = a.size();
        set<vector<int>>st;
        
        for(int i=0;i<n-2;i++)
        {
            if (i >0 and a[i]==a[i-1])
                continue;
            
            int l=i+1;
            int r=n-1;

            while(l < r)
            {
                int s = a[i]+a[l]+a[r];
                if(s==0)
                {
                    vector<int>sub;
                    sub.push_back(a[i]);
                    sub.push_back(a[l]);
                    sub.push_back(a[r]);
                    st.insert(sub);
                    // while(l<r and a[l]==a[l+1])
                    //     l++;
                    // while(l<r and a[r]==a[r-1])
                    //     r--;

                    l++;
                }
                else if(s<0)
                    l++;
                else
                    r--;
            }
        }
        
       vector<vector<int>>ans;
        for(auto it: st)
            ans.push_back(it);
        return ans;
        
        
        
    }
};