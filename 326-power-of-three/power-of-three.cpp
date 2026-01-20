class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;

        // this is the largest power of 3 in a 32 bit signed integer
        // thus if n is a power of 3, it must divide this
        return 1162261467 % n == 0;
    }
};