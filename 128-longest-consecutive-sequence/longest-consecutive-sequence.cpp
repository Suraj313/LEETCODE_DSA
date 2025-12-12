class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int ans=0;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
               int count=1;
               int x=it;
               while(s.find(x+1)!=s.end()){
                count++;
                x++;
               }
               ans=max(ans,count);
            }
        }
        return ans;
    }
};