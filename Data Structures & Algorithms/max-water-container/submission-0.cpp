class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = heights.size() / 2;
        if(heights.size() % 2 == 0) l -= 1;
        int r = l + 1;
        int maxArea = 0;
        while (l >= 0 && r < heights.size()) {
            int currArea = min(heights[l], heights[r]) * (r - l);
            maxArea = max(maxArea, currArea);
            if (r == heights.size() - 1) l--;
            else if (l == 0) r++;
            else if (heights[l] > heights[r]) r++;
            else if (heights[l] < heights[r]) l--;        
        }
        return maxArea;


    }
};
