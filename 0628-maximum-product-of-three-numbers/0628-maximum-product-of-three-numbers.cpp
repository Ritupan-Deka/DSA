class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num1 = 0, num2 = 0;
        num1 = nums[0]*nums[1]*nums[nums.size()-1]; 
        num2 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        return max(num1,num2); 
    }
};