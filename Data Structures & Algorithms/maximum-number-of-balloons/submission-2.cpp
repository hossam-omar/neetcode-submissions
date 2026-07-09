class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> ans;
        for(char c : text){
            ans[c]++;
        }
        int b = ans['b'];
        int a = ans['a'];
        int l = ans['l']/2;
        int o = ans['o']/2;
        int n = ans['n'];

        return min({b,a,l,o,n});

    }
};