class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ans;
        for (int num : nums) {
            ans[num]++;
        }
        vector<pair<int, int>> items;
        for (auto pair : ans) {
            items.push_back(pair);
        }
        sort(items.begin(), items.end(),
             [](pair<int, int>& a, pair<int, int>& b) { return a.second > b.second; });
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(items[i].first);
        }
        return result;
    }
};
