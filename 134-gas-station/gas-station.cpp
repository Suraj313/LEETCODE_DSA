class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int g_sum=0;
        int c_sum=0;
        for(int i=0;i<n;i++){
            g_sum+=gas[i];
            c_sum+=cost[i];
        }
        if(g_sum<c_sum) return -1;
        int current=0;
        int start=0;
        for(int i=0;i<n;i++){
            current+=gas[i]-cost[i];
            if(current<0){
                current=0;
                start=i+1;
            }
        }
    return start;    
    }
};