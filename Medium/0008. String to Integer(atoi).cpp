class Solution {
public:
    int myAtoi(string str) {
        if (str.empty()) {
            return 0;
        }

        int ans = 0;
        int sign = 1;
        int i = 0;

        while (str[i] == ' ' || str[i] == '\t') {
            ++i;
        }

        if (i == str.length()) {
            return 0;
        }

        if (str[i] == '+') {
            ++i;
        } else if (str[i] == '-') {
            sign = -1;
            ++i;
        }

        for (; i < str.length() && isdigit(str[i]); ++i) {
            if (ans > (numeric_limits<int>::max() - (str[i] - '0')) / 10) { 
                return sign > 0 ? numeric_limits<int>::max() : numeric_limits<int>::min();
            }
            ans *= 10;
            ans += str[i] - '0';
        }

        ans *= sign;
        return ans;
    }
};
