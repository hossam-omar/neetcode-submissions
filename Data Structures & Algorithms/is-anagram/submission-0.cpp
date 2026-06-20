class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ans;
        if(s.size()!=t.size()) return false;
        for(char ch : s){
            ans[ch]++;
        }
        for(char ch : t){
            ans[ch]--;
        }
        for(auto pair : ans){
            if(pair.second > 0) return false;
        }
        return true;
    }
};
