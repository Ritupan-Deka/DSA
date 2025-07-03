class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxLen = 0;
        unordered_set<char> seen;
        while (right < s.size()) {
            if (seen.find(s[right]) == seen.end()) {
            // if (!seen.count(s[right])) {
                seen.insert(s[right]);
                right++;
                maxLen=max(maxLen,right-left);
                // cout<<maxLen;
            } else{
                seen.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};
