class Solution {
public:
    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int countLargestGroup(int n) {
        unordered_map<int, int> freq;
        int maxFreq = 0;

        for (int i = 1; i <= n; i++) {
            int sum = digitSum(i);
            freq[sum]++;
            maxFreq = max(maxFreq, freq[sum]);
        }

        int ans = 0;
        for (const auto& [key, value] : freq) {
            if (value == maxFreq)
                ans++;
        }

        return ans;
    }
};