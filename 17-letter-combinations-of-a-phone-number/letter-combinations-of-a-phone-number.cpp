class Solution {
public:
    void cartesianProduct(int depth, vector<vector<char>>& vectors,
                          string& current, vector<string>& result) {
        if (depth == vectors.size()) {
            result.push_back(current);
            return;
        }

        for (char c : vectors[depth]) {
            current.push_back(c);
            cartesianProduct(depth + 1, vectors, current, result);
            current.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<vector<char>> buttons = {
            {},
            {},                   // 0, 1 unused
            {'a', 'b', 'c'},      // 2
            {'d', 'e', 'f'},      // 3
            {'g', 'h', 'i'},      // 4
            {'j', 'k', 'l'},      // 5
            {'m', 'n', 'o'},      // 6
            {'p', 'q', 'r', 's'}, // 7
            {'t', 'u', 'v'},      // 8
            {'w', 'x', 'y', 'z'}  // 9
        };

        vector<vector<char>> chars;
        for (char d : digits) {
            chars.push_back(buttons[d - '0']);
        }

        vector<string> result;
        string current;

        cartesianProduct(0, chars, current, result);
        return result;
    }
};