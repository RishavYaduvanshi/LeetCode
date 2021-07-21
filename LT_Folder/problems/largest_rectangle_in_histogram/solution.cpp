class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        stack<pair<int,int>>s;
        int n = heights.size();
        vector<int>left,right;
        for(int i=0;i<n;i++)
        {
            if(s.size()==0)
                left.push_back(-1);
            else if(s.size()> 0 && s.top().second < heights[i])
                left.push_back(s.top().first);
            else
            {
                while(s.size()!=0 && s.top().second >= heights[i])
                    s.pop();
                if(s.size()==0)
                    left.push_back(-1);
                else
                    left.push_back(s.top().first);
            }
            s.push({i,heights[i]});
        }
         stack<pair<int,int>>s1;
        for(int i=n-1;i>=0;i--)
        {
            if(s1.size()==0)
                right.push_back(n);
            else if(s1.size()> 0 && s1.top().second < heights[i])
                right.push_back(s1.top().first);
            else
            {
                while(s1.size()!=0 && s1.top().second >= heights[i])
                    s1.pop();
                if(s1.size()==0)
                    right.push_back(n);
                else
                    right.push_back(s1.top().first);
            }
            s1.push({i,heights[i]});
        }
        reverse(right.begin(),right.end());
        
        int area[n],ans=0;
        for(int i=0;i<n;i++)
        {
            area[i]=(right[i]-left[i]-1)*heights[i];
            ans=max(ans,area[i]);
        }
        return ans;
    }
};