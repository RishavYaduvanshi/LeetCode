class Solution {
public:
    void print(vector<vector<bool>> &v){
        for(auto x:v){
            for(auto i:x)
                cout<<i<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    string longestPalindrome(string s) {
        
      int n = s.size();
      if(n == 1)
          return s;
      if(n == 2 and s[0] == s[1])
          return s;
       if(n == 2 and s[0] != s[1]){
           string t;
           t+=s[0];
          return t;
       }
      
      vector<vector<bool>> dp(n,vector<bool>(n, false));

       // initilize
       for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++){
               if(i == j )
                dp[i][j] = true;
              if(i < n-1 and j == i+1 and s[i] == s[j]){
                dp[i][j] = true;
              }
           }
       }

      for(int k = 3; k <= n; k++){
          for(int i = 0; i < n - k + 1; i++){
              int j = i + k - 1;
              if(s[i] == s[j] and dp[i+1][j-1] == true)
                    dp[i][j] = true;
          }
      }
      // print(dp);
     string ans = "";
        
      for(int i = 0; i < n; i++){
          int st = -1;
           int en = -1;
           for(int j = 0; j < n; j++){
               if(dp[i][j] and st < 0)
                st = j;
               else if(dp[i][j] and st >= 0)
                   en = j;

           }
          int l = en - st + 1;
           if(l > 0 and l > ans.size()){
               ans = s.substr(st,l);
           }
           
      }
        if(ans.size() == 0){
           string t;
           t+=s[0];
           return t;
        }
    return ans;

    }
};