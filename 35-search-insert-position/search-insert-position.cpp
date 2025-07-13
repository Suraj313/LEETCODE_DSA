class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ind=n;
        int s=0,e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]>=target){
                e=mid-1;
                ind=mid;
                mid=s+(e-s)/2;
            }
            else{
                s=mid+1;
                mid=s+(e-s)/2;
            }
        }
    return ind;   
    }
};