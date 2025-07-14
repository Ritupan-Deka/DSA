class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1){
            if(seen.count(n)) return false;
            seen.insert(n);
            int result = 0;
            while(n>0){
                int dgt = n%10;
                result +=dgt*dgt;
                n/=10;
            }
            n=result;
        }
        return true;
    }
};