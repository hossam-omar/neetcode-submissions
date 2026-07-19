class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> exists(29, false);
        for(char c : allowed){
            exists[c - 'a'] = true;
        }
        int count =0;
        for(string word : words){
            bool valid = true;
            for(char c : word){
                if(!exists[c-'a']){
                    valid = false;
                    break;
                }
            }
            if(valid){
                count++;
            }
        }
        return count;
    }
};