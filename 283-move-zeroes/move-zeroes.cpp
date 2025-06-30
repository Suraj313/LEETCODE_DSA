class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int zero_count=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
            else{
                zero_count++;
            }
        }
        if(i<n){
            for(int k=i;k<n;k++){
                nums[k]=0;
            }
        }

        
    }
};