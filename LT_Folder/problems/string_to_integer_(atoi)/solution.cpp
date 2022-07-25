class Solution {
public:
    int myAtoi(string s) {
        
        string t;
        bool f = false;
        for(char c : s){
            if(c == ' '){
                if(t.size() != 0)
                    break;
                continue;
            }
            if((c == '+' or c == '-' ) ){
                if(t.size() != 0)
                    break;
                t += c;
            }
            else if(c >= '0' and c <= '9')
                t += c;
            else
                break;
        }
        // cout<<t<<endl;
        
        long long ans = 0;
        char sign = '*';
        
        for(int i = 0; i < t.size();i++){
            
            // if(ans > INT_MAX){
            //     if(sign == '+' or sign == '*')
            //         return INT_MAX;
            //     else
            //         return INT_MIN +1;
            // }
            if(t[i] == '+' or t[i] == '-')
                sign = t[i]; 
            else if(t[i] >= '0' and t[i] <= '9')
                ans = ans*10 +(int)( t[i]-48);
            if(ans > INT_MAX){
                if(sign == '+' or sign == '*')
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            
        }
        
        if(sign == '+' or sign == '*' ){
            return ans;
        }
        else{
            return -ans;
        }
            
        return 0;
        
    }
};