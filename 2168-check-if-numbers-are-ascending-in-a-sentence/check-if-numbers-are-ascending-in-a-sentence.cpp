class Solution {
public:
    bool areNumbersAscending(string s) {
        int curr = 0;
        int prev = 0;

        for (char c : s) {
            if (isalpha(c) || c == ' ') {
                if (curr != 0) {
                    if (curr <= prev)
                        return false;

                    prev = curr;
                    curr = 0;
                }
            } else {
                curr = curr * 10 + (c - '0');
            }
        }

        if (curr != 0 && curr <= prev) {
            return false;
        }

        return true;
    }
};