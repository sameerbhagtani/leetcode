class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        int firstCount = freq.begin()->second;

        for (const auto& [_, count] : freq) {
            if (count != firstCount) {
                return false;
            }
        }

        return true;
    }
};