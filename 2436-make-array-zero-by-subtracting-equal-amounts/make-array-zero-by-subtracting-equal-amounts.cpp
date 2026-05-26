class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> st;

        for (int n : nums) {
            if (n != 0) {
                st.insert(n);
            }
        }

        return st.size();
    }
};