class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        
        
        set<vector<int>>st;
        
        int n = a.size();
        
        sort(a.begin(),a.end());
        
        for(int i=0;i<n-3;i++)
        {
            if(i>0 and a[i]==a[i-1])
                continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j> i+1 and a[j]==a[j-1])
                    continue;
                int l = j+1;
                int r = n-1;
                
                while(l<r)
                {
                    long long  s = (long long)a[i]+a[j]+a[l]+a[r];
                    vector<int>sub;
                    if(s==target)
                    {
                        sub.push_back(a[i]);
                        sub.push_back(a[j]);
                        sub.push_back(a[l]);
                        sub.push_back(a[r]);
                        st.insert(sub);
                        
                        l++;
                    
                    }
                    else if(s<target)
                        l++;
                    else
                        r--;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it: st)
            ans.push_back(it);
        return ans;
        
        
    }
};