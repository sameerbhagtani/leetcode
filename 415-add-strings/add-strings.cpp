class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;

        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }

            ans.push_back(char('0' + (sum % 10)));

            carry = sum / 10;
        }

        if (carry)
            ans.push_back(char('0' + (carry)));

        reverse(ans.begin(), ans.end());

        return ans;
    }
};