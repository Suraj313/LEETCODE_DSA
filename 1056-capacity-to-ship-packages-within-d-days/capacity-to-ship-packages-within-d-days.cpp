class Solution {
public:
    bool possible(vector<int>& weights,int mid, int days){
        int n=weights.size();
        int count=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+weights[i]>mid){
                count++;
                sum=weights[i];
            }
            else sum+=weights[i];
        }
        if(count<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        auto max_it = max_element(weights.begin(), weights.end());
        int max_value = *max_it;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int s=max_value,e=sum;
        int out=sum;
        while(s<=e){
            int mid=s+(e-s)/2;
            bool flag=possible(weights,mid,days);
            if(flag){
                e=mid-1;
                out=min(out,mid);
            }
            else s=mid+1;
        }
    return out;   
    }
};