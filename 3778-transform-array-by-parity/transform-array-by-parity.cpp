class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int evenCount = 0;

        for (int num : nums) {
            if (num % 2 == 0)
                evenCount++;
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = (i < evenCount) ? 0 : 1;
        }

        return nums;
    }
};