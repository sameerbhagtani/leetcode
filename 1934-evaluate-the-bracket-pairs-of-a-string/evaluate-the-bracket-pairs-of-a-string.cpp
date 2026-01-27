class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> knowledgeMap;

        for (int i = 0; i < knowledge.size(); i++) {
            knowledgeMap[knowledge[i][0]] = knowledge[i][1];
        }

        int bracketStart = -1;
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                bracketStart = i;
            } else if (s[i] == ')') {
                int start = bracketStart + 1;
                int end = i - 1;
                string toAppend = s.substr(bracketStart + 1, end - start + 1);

                cout << toAppend << "\n";

                if (knowledgeMap.find(toAppend) != knowledgeMap.end()) {
                    ans.append(knowledgeMap[toAppend]);
                } else {
                    ans.push_back('?');
                }

                bracketStart = -1;
            } else if (bracketStart == -1) {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};