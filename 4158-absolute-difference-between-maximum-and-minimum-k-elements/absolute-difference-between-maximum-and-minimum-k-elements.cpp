class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int largestSum = accumulate(nums.end() - k, nums.end(), 0);
        int smallestSum = accumulate(nums.begin(), nums.begin() + k, 0);

        return abs(largestSum - smallestSum);
    }
};