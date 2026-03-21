class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        long long expectedSum = 1LL * n * (n + 1) / 2;
        long long expectedSqSum = 1LL * n * (n + 1) * (2 * n + 1) / 6;

        long long actualSum = 0;
        long long actualSqSum = 0;
        for (int num : nums) {
            actualSum += 1LL * num;
            actualSqSum += 1LL * num * num;
        }

        long long sumDiff = expectedSum - actualSum;
        long long sqSumDiff = expectedSqSum - actualSqSum;

        int duplicate = ((sqSumDiff / sumDiff) - sumDiff) / 2;
        int missing = sumDiff + duplicate;

        return {duplicate, missing};
    }
};