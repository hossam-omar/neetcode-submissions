class Solution {
   public:
    bool isVowel(char c) { return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o'; }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            bool isValid = isVowel(words[i].front()) && isVowel(words[i].back());
            prefix[i + 1] = prefix[i] + isValid;
        }
        vector<int> ans;
        for (vector<int> query : queries) {
            int left = query[0];
            int right = query[1];
            int count = prefix[right + 1] - prefix[left];
            ans.push_back(count);
        }
        return ans;
    }
};