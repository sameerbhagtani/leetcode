class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;

        for (int n : nums) {
            ans += freq[n];
            freq[n]++;
        }

        return ans;
    }
};