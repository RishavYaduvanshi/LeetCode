class Solution {
public:
    int findDuplicate(vector<int>& a) {
        
        for (int i = 0; i <= a.size(); i++)
        {
            if (a[0] == a[a[0]])
            {
                return a[0];
            }
            swap(a[0], a[a[0]]);
        }
        return 0;
    }
};