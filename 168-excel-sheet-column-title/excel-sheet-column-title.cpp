class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle;

        while (columnNumber > 0) {
            // excel is 1-indexed
            // so we subtract 1 to make the input 0-indexed
            columnNumber--;

            int rem = columnNumber % 26;
            columnTitle.push_back((char)rem + 65);

            columnNumber /= 26;
        }

        reverse(columnTitle.begin(), columnTitle.end());
        return columnTitle;
    }
};