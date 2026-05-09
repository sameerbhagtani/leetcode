class Solution {
public:
    vector<int> arrayChange(vector<int>& nums,
                            vector<vector<int>>& operations) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = i;
        }

        for (const auto& op : operations) {
            int oldValue = op[0];
            int newValue = op[1];

            nums[map[oldValue]] = newValue;

            map[newValue] = map[oldValue];
            map.erase(oldValue);
        }

        return nums;
    }
};