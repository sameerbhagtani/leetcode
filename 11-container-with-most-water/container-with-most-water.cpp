class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;

        int maxArea = 0;

        while (i != j) {
            int h = height[i] < height[j] ? height[i] : height[j];
            int w = j - i;

            int currArea = h * w;

            if (currArea > maxArea)
                maxArea = currArea;

            if (height[i] > height[j])
                j--;
            else
                i++;
        }

        return maxArea;
    }
};