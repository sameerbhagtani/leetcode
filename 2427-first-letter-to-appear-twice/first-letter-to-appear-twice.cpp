class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> seen;

        for (char c : s) {
            if (seen.find(c) != seen.end()) {
                return c;
            }

            seen.insert(c);
        }

        return '\0';
    }
};