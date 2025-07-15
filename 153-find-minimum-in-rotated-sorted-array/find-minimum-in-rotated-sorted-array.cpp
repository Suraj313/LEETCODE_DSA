class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        int mini=nums[mid];
        while(s<e){
            if(nums[mid]>nums[s]){ //left part is sorted
               mini=min(mini,nums[s]);
               s=mid+1;
            }
            else{//right part sorted
                mini=min(mini,nums[mid+1]);
                e=mid-1;
            }
            mid=s+(e-s)/2;
            mini=min(mini,nums[mid]);
        }
    return mini;   
    }
};