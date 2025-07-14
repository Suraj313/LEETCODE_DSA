class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target) return true;
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
            s+=1;
            e-= 1;
            continue;
        }
            if(nums[mid]>=nums[s]){
                
                if(target<nums[mid]&&target>=nums[s]){
                    e=mid-1;
                    mid=s+(e-s)/2;
                }
                
                else{
                    s=mid+1;
                    mid=s+(e-s)/2;
                }
            }
            else{
                if(target>nums[mid]&&target<=nums[e]){
                    s=mid+1;
                    mid=s+(e-s)/2;
                }
                else{
                    e=mid-1;
                    mid=s+(e-s)/2;
                }
            }
        }
    return false;   
    }
};