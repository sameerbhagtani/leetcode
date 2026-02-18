class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                pos++;
                swap(nums[pos], nums[i]);
            }
        }

        return pos + 1;
    }
};