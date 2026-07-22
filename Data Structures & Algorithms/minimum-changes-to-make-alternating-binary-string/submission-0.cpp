class Solution {
public:
    int minOperations(string s) {
        int changesStartWithZero = 0;
        int changesStartWithOne = 0;

        for (int i = 0; i < s.size(); i++) {
            char expectedZeroPattern;
            char expectedOnePattern;

            if (i % 2 == 0) {
                expectedZeroPattern = '0';
                expectedOnePattern = '1';
            } else {
                expectedZeroPattern = '1';
                expectedOnePattern = '0';
            }

            if (s[i] != expectedZeroPattern) {
                changesStartWithZero++;
            }

            if (s[i] != expectedOnePattern) {
                changesStartWithOne++;
            }
        }

        return min(changesStartWithZero, changesStartWithOne);
    }
};