class Solution {
public:
    bool possible(vector<int>& bloomDay,int mid,int m,int k){
        int n=bloomDay.size();
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
               count++;
            }
            else{
                ans+=count/k;
                count=0;
            }
        }
        ans+=count/k;
        if(ans>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long  x = m * 1ll * k * 1ll;
        if(x>n) return -1;
        auto min_it = min_element(bloomDay.begin(), bloomDay.end());
        int min_value = *min_it;
        auto max_it = max_element(bloomDay.begin(), bloomDay.end());
        int max_value = *max_it;
        int s=min_value,e=max_value;
        int result=max_value;
        while(s<=e){
            int mid=s+(e-s)/2;
            bool flag=possible(bloomDay,mid,m,k);
            if(flag){
                e=mid-1;
                result=mid;
            }
            else{
                s=mid+1;
            }

        }        



    return result;   
    }
};