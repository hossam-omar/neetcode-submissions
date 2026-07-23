class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> ans;
        for(char c : s){
            ans[c]++;
        }
        int length=0;
        bool oddNum = false;
        for(auto pair: ans){
            if(pair.second % 2 == 0){
                length += pair.second;
            }
            else{
                length += pair.second -1;
                oddNum = true;
            }
        }
        if(oddNum){
            length +=1;
        }
        return length;
    }
};