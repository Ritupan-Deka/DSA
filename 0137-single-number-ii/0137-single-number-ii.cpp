class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int ele:nums){
            count[ele]++;
        }
        for(auto ele : count){
            if(ele.second==1) return ele.first;
        }
        return -1;
    }
};