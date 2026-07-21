class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zeroes = 0, maximum = 0;
        for (int i = 0; i < s.size(); i++) {
            int num = s[i] - '0';
            ones += num;
        }
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0')
                zeroes++;
            else
                ones--;

            if (ones + zeroes > maximum)
                maximum = ones + zeroes;
        }

        return maximum;
    }
};