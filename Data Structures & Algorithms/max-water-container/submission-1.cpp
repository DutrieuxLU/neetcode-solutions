class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int maxArea = 0;
        while (l < r) {
            int currArea = min(heights[l], heights[r]) * (r - l);
            maxArea = max(maxArea, currArea);
            if (heights[l] > heights[r]) r--;
            else if (heights[l] <= heights[r]) l++;        
        }
        return maxArea;
    }
};
