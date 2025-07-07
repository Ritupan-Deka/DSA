// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         return haystack.find(needle);
//     }
// };

class Solution {
public:
    // Step 1: Build the LPS (Longest Prefix Suffix) array
    vector<int> buildLPS(const string& pattern) {
        int m = pattern.size();
        vector<int> lps(m, 0);
        int len = 0; // length of previous longest prefix suffix

        // Start from index 1 (lps[0] is always 0)
        for (int i = 1; i < m; ) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1]; // backtrack
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    // Step 2: Use LPS array to search for the pattern
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int n = haystack.size();
        int m = needle.size();
        vector<int> lps = buildLPS(needle);

        int i = 0; // pointer for haystack
        int j = 0; // pointer for needle

        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
                if (j == m) return i - j; // full match
            } else {
                if (j != 0) {
                    j = lps[j - 1]; // jump in needle
                } else {
                    i++; // move in haystack
                }
            }
        }

        return -1; // no match found
    }
};