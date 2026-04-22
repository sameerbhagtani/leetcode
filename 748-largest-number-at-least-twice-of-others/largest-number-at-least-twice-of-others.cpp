class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0;
        int secondMaxIndex = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[maxIndex]) {
                secondMaxIndex = maxIndex;
                maxIndex = i;
            } else if (secondMaxIndex == -1 || nums[i] > nums[secondMaxIndex]) {
                secondMaxIndex = i;
            }
        }

        return nums[maxIndex] >= 2 * nums[secondMaxIndex] ? maxIndex : -1;
    }
};