class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s)
            ++freq[c];

        vector<vector<char>> bucket(s.size() + 1);
        for (auto& [ch, fq] : freq) {
            bucket[fq].push_back(ch);
        }

        string result;
        for (int i = s.size(); i >= 1; i--) {
            for (char ch : bucket[i]) {
                result.append(i, ch);
            }
        }

        return result;
    }
};