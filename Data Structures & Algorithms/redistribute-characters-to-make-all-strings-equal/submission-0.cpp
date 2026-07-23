class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> freq(26, 0);

        for (string word : words) {
            for (char c : word) {
                freq[c - 'a']++;
            }
        }

        int n = words.size();

        for (int count : freq) {
            if (count % n != 0) {
                return false;
            }
        }

        return true;
    }
};