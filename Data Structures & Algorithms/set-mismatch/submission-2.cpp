class Solution {
   public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n+1,0);
        for(int num : nums){
            ans[num]++;
        }
        int repeated =-1;
        int missing =-1;
        for(int i =1; i <= n ; i++){
            if(ans[i] == 2){
                repeated = i;
            }
            if(ans[i] == 0){
                missing = i;
            }
        }
        return {repeated, missing};
    }
};