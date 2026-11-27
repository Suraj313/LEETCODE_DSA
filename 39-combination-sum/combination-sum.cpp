class Solution {
public:

    void print(int ind, vector<vector<int>>& ans,vector<int>& ds,vector<int>& candidates,int target  ){
      int n = candidates.size();

      if(ind == n){
        if(target ==0 ){
            ans.push_back(ds);
        }
        return;
      }

      //pickup 
      if(candidates[ind] <= target){
        ds.push_back(candidates[ind]);
        print(ind,ans,ds,candidates,target-candidates[ind]);
         ds.pop_back();
      }
      print(ind+1,ans,ds,candidates,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
       vector<int> ds;
       print(0,ans,ds,candidates,target);
       return ans;
    }
};