class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber>0){
            columnNumber--;
            int remainder = columnNumber%26;
            char val = 'A'+remainder;
            result=val + result;
            columnNumber/=26;
        }
        return result;

    }
};