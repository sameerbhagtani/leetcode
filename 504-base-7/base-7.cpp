class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";

        bool isNegative = num < 0;
        if (isNegative)
            num = -num;

        std::string remainders;
        while (num > 0) {
            remainders += std::to_string(num % 7);
            num /= 7;
        }

        std::reverse(remainders.begin(), remainders.end());

        return isNegative ? "-" + remainders : remainders;
    }
};