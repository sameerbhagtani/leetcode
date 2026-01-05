class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int sign = 1;
        bool digitSeen = false;

        int i = 0;
        int n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            digitSeen = true;
            int digit = s[i] - '0';

            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }

            num = num * 10 + digit;
            i++;
        }

        if (!digitSeen)
            return 0;

        return num * sign;
    }
};