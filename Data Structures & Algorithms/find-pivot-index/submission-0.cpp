class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans =-1, right=0, left=0;
        for(int i =0; i < nums.size(); i++){
            left += nums[i];
            for(int j = i ; j < nums.size(); j++){
                right += nums[j];
            }
            if(right == left){
                ans= i;
                break;
            }else{
                right=0;
            }
        }
        return ans;
    }
};