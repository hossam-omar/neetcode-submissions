class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for (string email : emails) {
            string clean = "";
            int i = 0;

            // Build local name
            while (i < email.size() && email[i] != '@') {
                if (email[i] == '.') {
                    i++;
                    continue;
                }

                if (email[i] == '+') {
                    while (i < email.size() && email[i] != '@') {
                        i++;
                    }
                    break;
                }

                clean += email[i];
                i++;
            }

            // Add domain including '@'
            clean += email.substr(i);

            uniqueEmails.insert(clean);
        }

        return uniqueEmails.size();
    }
};