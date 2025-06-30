class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual_sum=n*(n+1)/2;
        int current_sum=0;
        for(int i=0;i<n;i++){
            current_sum+=nums[i];
        }
    return actual_sum - current_sum;    
    }
};