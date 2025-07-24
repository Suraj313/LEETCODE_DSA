class Solution {
public:
    int possible(vector<int>& nums, int k,int n,int mid){
        int count=1;
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(sum+nums[i]>mid){
                count++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }   
        }
        if(count>k) return false;
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s = *max_element(nums.begin(), nums.end());
        int e = accumulate(nums.begin(), nums.end(), 0);
        while(s<=e){
            int mid=s+(e-s)/2;
            bool flag=possible(nums,k,n,mid);
            if(flag){
                e=mid-1;
            }
            else s=mid+1;
        }

    return e+1;    
    }
};