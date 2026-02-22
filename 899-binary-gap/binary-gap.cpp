class Solution {
public:
    int binaryGap(int n) {
        string binary = bitset<32>(n).to_string();

        int last = -1;
        int maxGap = 0;

        for (int i = 0; i < 32; i++) {
            if (binary[i] == '1') {
                if (last != -1) {
                    maxGap = max(maxGap, i - last);
                }
                last = i;
            }
        }

        return maxGap;
    }
};