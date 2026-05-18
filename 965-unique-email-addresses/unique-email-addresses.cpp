class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;

        for (string email : emails) {
            int at = email.find('@');

            string local = email.substr(0, at);
            string domain = email.substr(at + 1);

            string normalizedEmail;

            for (char c : local) {
                if (c == '.')
                    continue;
                if (c == '+')
                    break;

                normalizedEmail.push_back(c);
            }

            normalizedEmail += "@" + domain;
            s.insert(normalizedEmail);
        }

        return s.size();
    }
};