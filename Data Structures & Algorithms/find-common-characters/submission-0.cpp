class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      vector<int> common(26,0);
      for(char c : words[0]){
        common[c - 'a']++;
      }
      for(int i =0; i < words.size(); i++){
        vector<int> current(26,0);
        for(char c : words[i]){
            current[c-'a']++;
        }
        for(int j =0; j < 26; j++){
            common[j] = min(common[j],current[j]);
        }
      }
      vector<string> result;
      for(int i =0; i < 26 ; i++){
        while(common[i] > 0){
            string letter(1, i + 'a');
            result.push_back(letter);
            common[i]--;
        }
      }
      return result;
    }
};