class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> available(26, 0);

        for (char c : chars) {
            available[c - 'a']++;
        }

        int answer = 0;

        for (string word : words) {
            vector<int> needed(26, 0);

            for (char c : word) {
                needed[c - 'a']++;
            }

            bool canForm = true;

            for (int i = 0; i < 26; i++) {
                if (needed[i] > available[i]) {
                    canForm = false;
                    break;
                }
            }

            if (canForm) {
                answer += word.size();
            }
        }

        return answer;
    }
};