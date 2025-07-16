class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int range = nums.size();
        int rangeSum =  range*(range+1)/2;
        int arraySum = 0;
        for(auto ele :nums){
            arraySum+=ele;
        }
        return rangeSum-arraySum;
    }
};