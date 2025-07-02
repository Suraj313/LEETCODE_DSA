class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int x=0;// for zero
        int y=0;// for one
        int z=n-1;// for two
        while(y<=z){
            if(nums[y]==0){
                swap(nums[x],nums[y]);
                x++;
                y++;
            }
            else if(nums[y]==1){
                y++;
            }
            else{
                swap(nums[y],nums[z]);
                z--;
            }
        }


        
    }
};