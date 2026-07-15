class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> ans;
        for(int num : arr){
            ans[num]++;
        }
        int max=-1;
        for(auto pair : ans){
            if(pair.second > max && pair.second == pair.first ){
                max = pair.first;
            }
        }
        return max;
        
    }
};