class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum<0){ 
                sum=0;
                maxi=max(maxi,nums[i]);
            }
            else{
                maxi=max(maxi,sum);
            }
        }

    return maxi;   
    }
};