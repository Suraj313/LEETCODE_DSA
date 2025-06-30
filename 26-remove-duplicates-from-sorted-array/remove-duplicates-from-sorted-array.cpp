class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>temp(n);
        if(n>=1) {
            temp[0]=nums[0];
            count++;
        }
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                temp[count]=nums[i];
                count++;
            }
         
        }
        for(int i=0;i<count;i++){
            nums[i]=temp[i];
        }
        return count;
    }
};