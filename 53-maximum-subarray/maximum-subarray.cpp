class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maximumSum = nums[0];

        for (int num : nums) {
            currentSum += num;
            maximumSum = max(maximumSum, currentSum);

            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maximumSum;
    }
};