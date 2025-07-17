class Solution {
public:
    // bool range(long x) {
    //    return( x < INT_MIN || x > INT_MAX)  ;
    // }
    // int reverse(int x) {
    //     string res;
    //     if (x < 0) {
    //         string xs = to_string(abs(x));
    //         std::reverse(xs.begin(), xs.end());
    //         res = "-" + string(xs);
    //         // return range(stol(res));
    //     } else {
    //         string xs = to_string(x);
    //         std::reverse(xs.begin(), xs.end());
    //         // return range(stol(xs));
    //         res= xs;
    //     }
    //     long reversed = std::stol(res);
    //     if (range(reversed))
    //         return 0;
    //     return static_cast<int>(reversed);
    // }

    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return 0;
            }
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x /= 10;
        }
        return ans;
    }
};