class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxWater = 0;
        while(left<right){
            int width = right-left;
            int minheight = min(height[left],height[right]);
            int water = width*minheight;
            maxWater = max(maxWater,water);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxWater;
    }
};