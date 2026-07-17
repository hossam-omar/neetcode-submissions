class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int , int> ans;
        for(int num : nums){
            ans[num]++;
        }
        for( auto pair : ans){
            if(pair.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};