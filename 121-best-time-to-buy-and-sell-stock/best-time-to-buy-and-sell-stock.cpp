class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int mini=INT_MAX;
        int maxi=0;
        for(int i=1;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                maxi=max(maxi,prices[i]-buy);
            }


        }
    return maxi;   
    }
};