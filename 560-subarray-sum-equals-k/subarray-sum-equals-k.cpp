class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        map<int,int>m;
        m[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum-k;
            count+=m[rem];
            m[sum]+=1;
            
        }
        return count;
    }
};