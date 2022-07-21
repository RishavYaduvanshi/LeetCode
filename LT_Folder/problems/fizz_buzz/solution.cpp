class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n+1);
        for(int i = 1; i < n+1 ; i++){
            if(i % 15 == 0){
                ans[i] = "FizzBuzz";
            }
            else if(i % 3 == 0){
                ans[i] = "Fizz";
            }
            else if(i % 5 == 0){
                ans[i] = "Buzz";  
            }
            else
                ans[i] = to_string(i);
        }
        ans.erase(ans.begin()+0);
        return ans;
    }
};