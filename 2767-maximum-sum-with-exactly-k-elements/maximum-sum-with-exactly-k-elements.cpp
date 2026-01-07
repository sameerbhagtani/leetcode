class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());

        // (k * mx) :
        // max element added to itself k times

        // (k * (k - 1) / 2) :
        // sum of the increasing offsets
        // i.e. 0 + 1 + 2 + ... + (k - 1)

        return (k * mx) + (k * (k - 1) / 2);
    }
};