class Solution {
public:
    void sortColors(vector<int>& nums) {
        int redEnd = -1;
        int blueBegin = nums.size();

        int i = 0;
        while (i < blueBegin) {
            if (nums[i] == 0) {
                redEnd++;
                swap(nums[redEnd], nums[i]);
                i++;
            } else if (nums[i] == 1) {
                i++;
            } else if (nums[i] == 2) {
                blueBegin--;
                swap(nums[blueBegin], nums[i]);
            }
        }
    }
};