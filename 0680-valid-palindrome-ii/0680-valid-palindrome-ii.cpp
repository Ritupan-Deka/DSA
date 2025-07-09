class Solution {
public:
    bool isValidPalindrome(string s, int left,int right){
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left]!=s[right]){
                return (isValidPalindrome(s,left+1,right)||isValidPalindrome(s,left,right-1));
            }  
            left++;
            right--;          
        }
        return true;
    }
};