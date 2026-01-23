class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanNums = {
            {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000},
        };

        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int value = romanNums[s[i]];
            int nextValue = romanNums[s[i + 1]];

            if (i < s.size() - 1 && value < nextValue) {
                ans += (nextValue - value);
                i++;
            } else {
                ans += value;
            }
        }

        return ans;
    }
};