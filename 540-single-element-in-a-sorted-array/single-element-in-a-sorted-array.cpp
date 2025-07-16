class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        
        while (s < e) {
            int mid = s + (e - s) / 2;

            // Ensure mid is even so that we compare mid with mid+1
            if (mid % 2 == 1) {
                mid--;
            }

            // If the pair starts at mid (nums[mid] == nums[mid+1]), move right
            if (nums[mid] == nums[mid + 1]) {
                s = mid + 2;
            } else {
                e = mid;
            }
        }
        
        return nums[s];
    }
};
