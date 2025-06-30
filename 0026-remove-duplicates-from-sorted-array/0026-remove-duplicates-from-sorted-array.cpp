// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         set<int> seen;
//         for(int i =0 ;i<nums.size();i++){
//             if(!seen.count(nums[i])){
//                 seen.insert(nums[i]);
//             }
//         }
//         int i=0;
//         for(int ele:seen){
//             nums[i++]=ele;
//         }
//         return seen.size();
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i] =nums[j];
            }
        }
        return i+1;
    }
};