class Solution {
public:
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        return toBinary(y) + "-" + toBinary(m) + "-" + toBinary(d);
    }

    string toBinary(int n) {
        if (n == 0)
            return "0";

        string result = "";
        while (n > 0) {
            result += char('0' + (n % 2));
            n /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};