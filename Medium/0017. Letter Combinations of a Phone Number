class Solution{
public:
    vector<string> letterCombinations(string digits) {
        static const vector<string> lookup = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if (empty(digits)) {
            return {};
        }
        vector<string> result = {""};
        for (int i = size(digits) - 1; i >= 0; --i) {
            const auto& choices = lookup[digits[i] - '0'];
            int m = size(choices), n = size(result);
            result.resize(m * n);
            for (int j = m * n - 1; j >= 0; --j) {
                result[j] = choices[j / n] + result[j % n];
            }
        }
        return result;
    }
};
