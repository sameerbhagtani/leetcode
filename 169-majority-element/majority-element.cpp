class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int n : nums) {
            freq[n]++;
        }

        for (const auto& pair : freq) {
            if (pair.second > (nums.size() / 2)) {
                return pair.first;
            }
        }

        return -1;
    }
};