class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;

        // a number is a power of two if it has exactly one '1' bit in binary form
        return (n & (n-1)) == 0;
    }
};