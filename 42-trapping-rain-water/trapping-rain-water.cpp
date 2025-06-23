class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft(height.size()), maxRight(height.size());
        maxLeft[0] = height[0];
        maxRight[height.size() - 1] = height[height.size() - 1];
        int totalWater = 0;
        for (int i = 1; i < height.size(); i++) {
            maxLeft[i] = max(maxLeft[i-1],height[i]);
        }
        for (int i = height.size()-2; i >=0;i--) {
            maxRight[i] = max(maxRight[i+1],height[i]);
        }
        for (int i = 1; i < height.size()-1; i++) {
            totalWater+= min(maxLeft[i],maxRight[i])- height[i];
        }
        return totalWater;
    }
};

// 0 1 0 2 1 0 1 3 2 1 2 1