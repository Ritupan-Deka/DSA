class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int j = 0;
        string res = "";
        int k = strs.size() - 1;
        string first = strs[0];
        string last = strs[k];
        for (int i = 0; i < first.size(); i++) {
            if (first[i] != last[i]) {
                break;
            } 
            res+=first[i];
        }
        return res;
    }
};