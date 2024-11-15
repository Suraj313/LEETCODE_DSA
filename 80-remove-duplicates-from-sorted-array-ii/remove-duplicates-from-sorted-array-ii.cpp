class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int index=1;
       int n=nums.size();
       int count =1;
       for(int i=1;i<n;i++){   
        if(nums[i]==nums[i-1]){
            count++;
        }
        else{
            count=1;
        }
        if(count>=3){

        }
        else{
            nums[index]=nums[i];
            index++;
        }
       }
       return index; 
    }
};