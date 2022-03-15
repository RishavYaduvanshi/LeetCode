class Solution {
public:
    
    bool solve(int n)
    {
        int t = n;
        long long sum = 0;
        while (n)
        {
            int r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        if (t == sum)
            return true;
        else
            return false;
    }
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;
        return solve(x);
    }
};