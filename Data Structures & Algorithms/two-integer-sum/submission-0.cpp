class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        int compelement=0;
        for(int i =0; i < nums.size(); i++){
            compelement = target - nums[i];
            if(ans.find(compelement)!= ans.end()){
                return {ans[compelement], i};
            }
            ans[nums[i]] = i ;
        }
        return {};
    }
};
