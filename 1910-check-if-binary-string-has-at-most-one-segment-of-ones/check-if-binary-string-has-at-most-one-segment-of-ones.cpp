class Solution {
public:
    bool checkOnesSegment(string s) {
        bool segmentEnded = false;

        for (char c : s) {
            if (c == '1' && segmentEnded)
                return false;
            if (c == '0')
                segmentEnded = true;
        }
        return true;
    }
};