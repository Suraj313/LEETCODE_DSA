class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()) return i;
        }

        return n+1;
    }
};