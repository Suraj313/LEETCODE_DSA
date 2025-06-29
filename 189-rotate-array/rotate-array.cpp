class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==n) return;
        if(k>n) k=k%n;
        vector<int>temp(n);
        for(int i=n-k;i<n;i++){
            temp[i-n+k]=nums[i];
        }
        for(int i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        
    }
};