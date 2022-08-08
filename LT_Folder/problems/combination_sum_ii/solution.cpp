class Solution {
private:
    void combSum(vector<int>can,int ind,int tar,vector<int>ds,vector<vector<int>>&ans){
        if(tar == 0){
            ans.push_back(ds);
        }
        for(int i = ind;i < can.size();i++){
            if(i > ind and can[i]==can[i-1])continue;
            if(can[ind]>tar)
                break;
            ds.push_back(can[i]);
            combSum(can,i+1,tar-can[i],ds,ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        

        vector<int>ds;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        combSum(candidates,0,target,ds,ans);
        return ans;
    }
};