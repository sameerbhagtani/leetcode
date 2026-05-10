class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> positions(26);

        for (int i = 0; i < s.size(); i++) {
            positions[s[i] - 'a'] = i;
        }

        int ans = 0;

        for (int i = 0; i < t.size(); i++) {
            ans += abs(positions[t[i] - 'a'] - i);
        }

        return ans;
    }
};