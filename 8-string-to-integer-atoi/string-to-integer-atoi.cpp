class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int sign = 1;

        int i = 0;
        int n = s.size();

        // skip leading whitespaces
        while (i < n && s[i] == ' ')
            i++;

        // check for sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;

            i++;
        }

        // convert digits to integers
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            // check for overflow
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        return num * sign;
    }
};