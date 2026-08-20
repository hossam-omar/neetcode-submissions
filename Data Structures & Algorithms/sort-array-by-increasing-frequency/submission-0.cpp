class Solution {
   public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        vector<pair<int, int>> freqSort;
        for (auto pair : freq) {
            freqSort.push_back({pair.second, pair.first});
        }
        sort(freqSort.begin(), freqSort.end(), [](pair<int, int> & a, pair<int, int> & b){
            if(a.first == b.first){
                return a.second > b.second;
            }
            return a.first < b.first;
        });
        vector<int> result;
        for (auto pair : freqSort) {
            while (pair.first > 0) {
                result.push_back(pair.second);
                pair.first--;
            }
        }
        return result;
    }
};