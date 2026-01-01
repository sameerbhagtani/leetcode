class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int desired = target - nums[i];

            if (map.find(desired) != map.end()) {
                return {map[desired], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};