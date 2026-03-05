class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int best = 0;
        int current = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (current > best) {
                    best = current;
                }
                current = 0;
                continue;
            }
            current++;
        }

        return current > best ? current : best;
    }
};