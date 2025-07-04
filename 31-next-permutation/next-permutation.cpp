class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    // find break point
    // find just grater element than break point element and swap them
    // for the remaining right part of the array,just revese it 
    int n=nums.size();
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(nums.begin(),nums.end());
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
    }   
    }
};