class Solution {
public:
    bool isVowel(char c) {
        return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
               c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string sortVowels(string s) {
        vector<int> freq(128, 0);

        for (char c : s) {
            if (isVowel(c)) {
                freq[c]++;
            }
        }

        string order = "AEIOUaeiou";
        int ptr = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                while (ptr < order.size() && freq[order[ptr]] == 0) {
                    ptr++;
                }

                s[i] = order[ptr];
                freq[order[ptr]]--;
            }
        }

        return s;
    }
};