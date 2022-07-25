class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int len = nums1.size() + nums2.size();
        int ptr = len / 2 + 1;
        
        bool ch = false;
        
        if(!(len & 1)){
            ch = true;
            ptr--;
        }
        
        int i = 0, j = 0;
        int cnt = 0;
        while(i < nums1.size() and j < nums2.size()){
            
            if(nums1[i] < nums2[j]){
                cnt++;
                cout<<cnt<<ptr<<"if"<<endl;
                if(cnt == ptr){
                    if(ch){
                        int mn = 0;
                        if(i+1 < nums1.size())
                            mn = min(nums1[i+1],nums2[j]);
                        else mn = nums2[j];
                        float s =(float) (nums1[i] + mn)/2;
                        return s;
                    }
                    return (float)nums1[i];  
                }
                i++;
            }
            else{
                cnt++;
                cout<<cnt<<ptr<<"el"<<endl;
                if(cnt == ptr){
                    if(ch){
                        int mn = 0;
                        if(j+1 < nums2.size())
                            mn = min(nums2[j+1],nums1[i]);
                        else
                            mn = nums1[i];
                        float s =(float) (nums2[j] + mn)/2;
                        return s;
                    }
                    return (float)nums2[j];
                }
                j++;
            }
        }
        
         while(i < nums1.size()){
             cnt++;
             cout<<cnt<<ptr<<"wh1"<<endl;
             if(cnt == ptr){
                 if(ch){
                    int mn = 0;
                    float s =(float) (nums1[i] + nums1[i+1])/2;
                    return s;
                 }
                 return (float)nums1[i]; 
             }
             i++;  
             
         }
         while(j < nums2.size()){
             cnt++;
             cout<<cnt<<ptr<<"wh2"<<endl;
             if(cnt == ptr){
                 if(ch){
                    int mn = 0;
                    float s =(float) (nums2[j] + nums2[j+1])/2;
                    return s;
                 }
                 return (float)nums2[j]; 
             }
             j++;
                
         }
        return 0;
        
    }
};