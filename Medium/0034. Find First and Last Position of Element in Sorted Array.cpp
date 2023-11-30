class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        const auto start = lower_bound(cbegin(nums), cend(nums), target);
        const auto end = upper_bound(cbegin(nums), cend(nums), target);
        if (start != cend(nums) && *start == target) {
            return {static_cast<int>(start - cbegin(nums)),
                    static_cast<int>(end - cbegin(nums) - 1)};
        }
        return {-1, -1};
    }
};
