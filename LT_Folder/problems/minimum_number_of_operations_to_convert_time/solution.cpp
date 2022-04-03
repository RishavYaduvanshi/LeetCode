class Solution {
    
    int solve(string s, int i, int j)
    {
        string hr;
        hr += s[i];
        hr += s[j];
        int hr1 = stoi(hr);
        return hr1;
    }
public:
    int convertTime(string cur, string cor) {
        
    int hr1 = solve(cur, 0, 1);
    int mn1 = solve(cur, 3, 4);
    int hr2 = solve(cor, 0, 1);
    int mn2 = solve(cor, 3, 4);
    // cout << hr1 << " " << mn1 << " " << hr2 << " " << mn2 << endl;

    int hr_d = hr2 - hr1;
    int mn_d = mn2 - mn1;
    int ans =0;
    ans = hr_d;
    if (mn_d < 0)
    {
        mn_d = 60 + mn_d;
        ans -=1;
    }
    // cout << hr_d << " " << mn_d<<endl;

    ans += mn_d /15;
    mn_d =  mn_d - int(mn_d /15)*15;

    ans += mn_d /5;
    mn_d =  mn_d - int(mn_d /5)*5;

    ans += mn_d;

    return ans;
        
    }
};