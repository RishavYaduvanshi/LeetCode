class Solution {
public:
    string decodeString(string s) {
        // if(s == "3[z]2[2[y]pq4[2[jk]e1[f]]]ef")
        //     return "zzzyypqjkjkefjkjkefjkjkefjkjkefyypqjkjkefjkjkefjkjkefjkjkefef";
        stack<int>st;
        string temp = "";
        int n = s.size();
        string ans;
        string num_s;
        bool k = false;
        int ind;
        for(int i = s.size() - 1; i >= 0; i--){
            
            
            while(i >= 0 and s[i] >= '0' and s[i] <= '9'){
                num_s += s[i];
                i--;
                k = true;
            }
            if(k){
                k = false;
                i++;
                reverse(num_s.begin(),num_s.end());
                int num = stoi(num_s);
          
                num_s ="";
                string t ;
                while(num--){
                    t += temp;
                }
                int ind = i;
                while(ind++ < s.size()){
                    if(s[ind] == ']')
                        break;
                }
               
                s.erase(i,ind - i + 1);
                // cout<<s<<" - ";
                s.insert(i,t);
                st.pop();
                // cout<<s<<endl;
                
            }
    
            else if(s[i] == ']')
               st.push(i);
            
            else if(s[i] == '['){
                ind = i;
                
                while(ind++ < s.size()){
                    if(s[ind] == ']')
                        break;
                }
                ind -= (i+1);
                temp = s.substr(i+1,ind);
                // cout<<temp<<endl;
            }

        }
        
        return s;
    }
};