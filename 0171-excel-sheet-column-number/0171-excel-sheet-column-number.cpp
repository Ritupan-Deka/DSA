class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.size();
        int count = len;
        int result = 0;
        for(int i=0;i<len;i++){
            int val=columnTitle[i]-64;
            count--;
            result+=pow(26,count)*val;
            cout<<result;
        }
        return result;
    }
};