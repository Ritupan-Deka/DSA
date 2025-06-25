class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>noDuplicate;
        int count = 0;
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[count]) {
                count++;
                nums[count] = nums[i];
            }
        }
        return count+1;
        // return noDuplicate.size();
    }
};


// 1 1 2 3 3 3 4 4 5
