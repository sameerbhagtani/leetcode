class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged_string(word1.size() + word2.size(), ' ');

        int i = 0;
        int j = 0;

        for (int index = 0; index < merged_string.size(); index++) {
            if ((index % 2 == 0 && i < word1.size()) || j == word2.size()) {
                merged_string[index] = word1[i];
                i++;
            } else {
                merged_string[index] = word2[j];
                j++;
            }
        }

        return merged_string;
    }
};