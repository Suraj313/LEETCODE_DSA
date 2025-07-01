class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                m[0]++;
            }
            else if(nums[i]==1){
                m[1]++;
            }
            else m[2]++;
        }
        int zero=m[0];
        int one=m[1];
        int two=m[2];
        for(int i=0;i<zero;i++){
            nums[i]=0;
        }
        for(int j=zero;j<zero+one;j++){
            nums[j]=1;
        }
        for(int k=zero+one;k<zero+one+two;k++){
            nums[k]=2;
        }
        
    }
};