class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        
        map<char,int>inp;
        map<char,int>tar;
        for(char c:s){
            inp[c]++;
        }
        for(char c:t)
            tar[c]++;

        // for(auto x:inp)
        //     cout<<x.first<<" "<<x.second<<endl;
        // for(auto x:tar)
        //     cout<<x.first<<" "<<x.second<<endl;


        vector<int>fq;
        for(int i=0;i<t.size();i++){
            fq.push_back(inp[t[i]]/tar[t[i]]);
        }
        int ans =INT_MAX;
        for(auto x:fq)
            ans = min(ans,x);
        return ans;

    }
};