class Solution {
public:
    long long ans(vector<int>& piles,int mid){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            count += (piles[i] + mid - 1) /mid;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=piles[0];
        for(int i=0;i<n;i++){
            maxi=max(piles[i],maxi);
        }
        long long s=1,e=maxi;
        long long y=maxi;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long x=ans(piles,mid);
            if(x>h){
               s=mid+1;
            }
            else{
                y=min(y,mid);
                e=mid-1;
            }
        }
    return y;    
    }
};