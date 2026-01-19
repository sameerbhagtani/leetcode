class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString;
        int maxLength = max(word1.size(), word2.size());

        for (int i = 0; i < maxLength; i++) {
            if (i < word1.size()) {
                mergedString += word1[i];
            }
            if (i < word2.size()) {
                mergedString += word2[i];
            }
        }
        return mergedString;
    }
};