class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> freq(26,0);
        for(char c : s){
            freq[c -'a']++;
        }
        string result;
        for(char c : order){
            while(freq[c-'a'] > 0){
                result+=c;
                freq[c-'a']--;
            }
        }
        for(char c= 'a'; c <= 'z';c++){
            while(freq[c-'a'] > 0){
                result+=c;
                freq[c-'a']--;
            }
        }
        return result;
    }
};