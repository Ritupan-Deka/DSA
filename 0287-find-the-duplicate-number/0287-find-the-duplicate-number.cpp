// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_map<int,int> freq;
//         for(auto ele:nums){
//             freq[ele]++;
//         }
//         for(auto pair:freq){
//             if(pair.second>1) return pair.first;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int slow = nums[0],fast = nums[0];
      do{
        slow  = nums[slow];
        fast = nums[nums[fast]];
      }while(slow!=fast);

      slow = nums[0];
      while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
      }
      return slow;
    }
};