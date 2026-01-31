class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool inSegment = false;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                if (!inSegment) {
                    count++;
                    inSegment = true;
                }
            } else {
                inSegment = false;
            }
        }

        return count;
    }
};