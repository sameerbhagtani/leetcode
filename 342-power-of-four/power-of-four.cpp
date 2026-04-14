class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;

        return (n & (n - 1)) == 0   // power of 2
               && (n & 0x55555555); // even position
    }
};