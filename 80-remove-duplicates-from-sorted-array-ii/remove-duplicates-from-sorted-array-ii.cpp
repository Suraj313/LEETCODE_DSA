class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int count=2;
        for(int i=2;i<n;i++){
            if(nums[i]!=nums[count-2]){
                nums[count]=nums[i];
                count++;
            }
        }
    return count;   
    }
};