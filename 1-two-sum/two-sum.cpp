class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>m;
        m[nums[0]]=0;
        for(int i=1;i<n;i++){
            int rem=target-nums[i];
            if(m.find(rem)!=m.end()){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }

    return ans;   
    }
};