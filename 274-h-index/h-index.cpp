class Solution {
public:
    int lower_bound(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size()-1;
    int mid = 0;
    while(start<end)
    {
        mid = start  + (end-start)/2;
        if(nums[mid]<target)    start = mid+1;
        else   end = mid;
    }
    return start;
}
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int maxi=0;
        if(citations[n-1]==0) return 0;
        for(int i=1;i<=n;i++){
            int a=lower_bound(citations,i);
            int b=n-a;
            if(b>=i){
                maxi=max(maxi,i);
            }
            else break;
        }

    return maxi;  
    }
};