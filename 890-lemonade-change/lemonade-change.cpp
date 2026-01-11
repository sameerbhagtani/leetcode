class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveBills = 0;
        int tenBills = 0;

        for (int b : bills) {
            if (b == 5) {
                fiveBills++;
            } else if (b == 10) {
                if (fiveBills > 0) {
                    tenBills++;
                    fiveBills--;
                } else {
                    return false;
                }
            } else if (b == 20) {
                if (fiveBills > 0 && tenBills > 0) {
                    fiveBills--;
                    tenBills--;
                } else if (fiveBills > 2) {
                    fiveBills -= 3;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};