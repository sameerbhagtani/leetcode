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

            if (i < s.size() - 1) {
                int nextValue = romanNums[s[i + 1]];
                if (value < nextValue) {
                    ans += (nextValue - value);
                    i++;
                    continue;
                }
            }

            ans += value;
        }

        return ans;
    }
};