class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> st;

        for (int n : arr) {
            freq[n]++;
        }

        for (const auto& [key, value] : freq) {
            st.insert(value);
        }

        return st.size() == freq.size();
    }
};