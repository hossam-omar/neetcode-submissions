class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , int> ans;
        for(int num : nums){
            ans[num]++;
        }
        for(auto pair : ans){
            if(pair.second > 1) return true;
        }
        return false;
    }
};