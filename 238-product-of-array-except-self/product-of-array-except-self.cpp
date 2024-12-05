class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n);
        vector<int>s(n);
        vector<int>ans(n);
        p[0]=nums[0];
        s[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            p[i]=nums[i]*p[i-1];
        }
        for(int j=n-2;j>=0;j--){
            s[j]=nums[j]*s[j+1];
        }
        for(int k=0;k<n;k++){
            if(k==0){
                ans[k]=s[k+1];
            }
            else if(k==n-1){
                ans[k]=p[k-1];
            }
            else{
                ans[k]=p[k-1]*s[k+1];
            }
        }
        return ans;
    }
};