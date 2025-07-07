class Solution {
public:
    int strStr(string haystack, string needle) {
        // int i = 0, j = 0;
        // while (i < haystack, j < needle) {
        //     if (haystack[i] == needle[j]) {
        //         i++;
        //         j++;
        //     }
        //     else if(haystack[i]!=needle[j] && j=0 ){
        //         i++;
        //     }
        //     else
        // }
        return haystack.find(needle);
    }
};