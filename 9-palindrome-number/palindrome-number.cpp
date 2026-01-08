class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers and numbers ending in 0 are not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        // x==rev : even number of digits
        // x==rev/10 : odd number of digits
        return (x == rev) || (x == rev / 10);
    }
};