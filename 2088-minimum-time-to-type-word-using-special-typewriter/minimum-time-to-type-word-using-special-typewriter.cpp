class Solution {
public:
    int minTimeToType(string word) {
        int time = 0;
        char last = 'a';

        for (int c : word) {
            int diff = abs(c - last);
            time += min(diff, 26 - diff);
            last = c;
        }

        return time + word.size();
    }
};