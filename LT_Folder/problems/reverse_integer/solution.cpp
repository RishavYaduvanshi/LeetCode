class Solution {
public:
    int reverse(int x) {
        
        long long n = abs(x);
        if(n > INT_MAX)
            return 0;
        long long ans = 0;
        while(n){
            ans = ans * 10 + (n % 10);
            n /= 10;
            if(ans > INT_MAX)
               return 0;
            cout<<ans<<endl;
            
        }
        if(x < 0)
            return - ans;
        else
            return ans;
    }
};