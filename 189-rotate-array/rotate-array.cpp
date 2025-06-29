class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n;
        reverse(nums.begin(), nums.begin() + (n - k));
        // Step 2: Reverse the last k elements
        reverse(nums.begin() + (n - k), nums.end());
        // Step 3: Reverse the whole array
        reverse(nums.begin(), nums.end());
    }
};