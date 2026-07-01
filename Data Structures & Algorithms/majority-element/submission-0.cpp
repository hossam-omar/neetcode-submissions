class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> ans;
        for(int num : nums){
            ans[num]++;
        }
        int freq =0, answer=0; 
        for(auto pair : ans){
            if(pair.second > freq){
                freq = pair.second; 
                answer = pair.first;
            }
        }
        return answer;
    }
};