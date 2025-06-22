class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int maxWater = 0;
        while(left<right){
            if(height[left]>height[right]){
                int water = height[right]*(right-left); 
                if(water>maxWater) maxWater = water;
                right--;
            }
            else{
                int water = height[left]*(right-left);
                if(water>maxWater) maxWater = water;
                left++;
            }
        }
        return maxWater;
    }
};