class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word ="";
        for(int i =0; i < s.size(); i++){
            if(s[i]== ' '){
                words.push_back(word);
                word="";
            }else{
                word+=s[i];
            }
        }
        words.push_back(word);
        if(pattern.size()!= words.size()){
            return false;
        }
        unordered_map<char, string> map1;
        unordered_map<string, char> map2;
        for(int i =0; i < pattern.size(); i++){
            char c = pattern[i];
            string s = words[i];
            if(map1.count(c)&& map1[c]!= s) return false;
            if(map2.count(s)&& map2[s]!= c) return false;
            map1[c] = s;
            map2[s] = c;
        }
        return true;
    }
};