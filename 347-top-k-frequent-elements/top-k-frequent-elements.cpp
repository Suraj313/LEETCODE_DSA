class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k==nums.size()){
            return nums;
        }
        unordered_map<int,int>count;
        for(int n:nums){
            count[n]++;
        }

         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for(auto& entry:count){
            minHeap.push({entry.second,entry.first});

            if(minHeap.size()>k){
                minHeap.pop();
            }
        }

        vector<int>ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;

    }
};