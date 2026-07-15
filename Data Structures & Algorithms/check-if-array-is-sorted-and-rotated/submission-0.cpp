class Solution {
   public:
    bool check(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int x = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                x = i + 1;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (sorted[i] != nums[(i + x) % nums.size()]) {
                return false;
            }
        }
        return true;
    }
};