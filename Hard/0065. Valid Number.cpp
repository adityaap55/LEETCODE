class Solution {
public:
    bool isNumber(string s) {
        enum InputType {
            INVALID,SPACE,SIGN,DIGIT,DOT,EXPONENT,NUM_INPUTS
        };
        int transitionTable[][NUM_INPUTS] = {
            -1,  0,  3,  1,  2, -1,
            -1,  8, -1,  1,  4,  5,
            -1, -1, -1,  4, -1, -1,
            -1, -1, -1,  1,  2, -1,
            -1,  8, -1,  4, -1,  5,
            -1, -1,  6,  7, -1, -1,
            -1, -1, -1,  7, -1, -1,
            -1,  8, -1,  7, -1, -1,
            -1,  8, -1, -1, -1, -1,
        };

        int state = 0;
        for (const auto& c: s) {
            InputType inputType = INVALID;
            if (isspace(c)) {
                inputType = SPACE;
            } else if (c == '+' || c == '-') {
                inputType = SIGN;
            } else if (isdigit(c)) {
                inputType = DIGIT;
            } else if (c == '.') {
                inputType = DOT;
            } else if (c == 'e' || c == 'E') {
                inputType = EXPONENT;
            }
            state = transitionTable[state][inputType];
            if (state == -1) {
                return false;
            }
        }
    return state == 1 || state == 4 || state == 7 || state == 8;
    }
};

#include <regex>
class Solution_TLE {
public:
    bool isNumber(string s) {
        regex e("^\\s*[\\+-]?((\\d+(\\.\\d*)?)|\\.\\d+)([eE][\\+-]?\\d+)?\\s*$");
        return regex_match(s, e);
    }
};
