class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i = 0; i < haystack.size(); i++){
            bool f = true;
            if(haystack[i] == needle[0]){
                int j;
                for( j = 0; j < needle.size(); j++){
                    if((i + j) >= haystack.size()){
                        f = false;
                        break;
                    }
                    if(haystack[i+j] != needle[j]){
                        f = false;
                    }
                }    
                if(f)
                    return i;
            }
        }
        return -1;
    }
};