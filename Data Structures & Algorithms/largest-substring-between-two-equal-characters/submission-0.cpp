class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxlength =-1;
        for(int i =0; i < s.size(); i++){
            for(int j =i+1 ; j < s.size(); j++){
                if(s[i] == s[j]){
                    maxlength = max(maxlength , j-(i+1));
                }
            }
        }
        return maxlength;
    }
};