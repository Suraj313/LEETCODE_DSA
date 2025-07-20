class Solution {
public:
    bool sum(vector<int>& nums, int threshold,int value){
        int n=nums.size();
        int op=0;
        for(int i=0;i<n;i++){
            op+=(nums[i]+value-1)/value;
        }
        if(op<=threshold) return true;
    return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        auto max_it = max_element(nums.begin(), nums.end());
        int max_value = *max_it;
        int ans=max_value;
        int s=1,e=max_value;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            bool flag=sum(nums,threshold,mid);
            if(flag){
                ans=min(ans,mid);
                e=mid-1;
            }
            else s=mid+1;
        }
    return ans;    
    }
};