class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        bool isCarry = false;

        int i = a.size() - 1;
        int j = b.size() - 1;

        while (i >= 0 || j >= 0) {
            int sum = isCarry ? 1 : 0;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            if (sum < 2) {
                ans.push_back(char('0' + sum));
                isCarry = false;
            } else if (sum == 2) {
                ans.push_back(char('0' + 0));
                isCarry = true;
            } else {
                ans.push_back(char('0' + 1));
                isCarry = true;
            }
        }

        if (isCarry)
            ans.push_back(char('0' + 1));

        reverse(ans.begin(), ans.end());

        return ans;
    }
};