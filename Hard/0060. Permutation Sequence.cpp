class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>nums;
        int i,total=1;

        for(i=1;i<=n;i++)
        {
            nums.emplace_back(i);
            total*=i;
        }

        int grp=total;
        stringstream permutation;

        while(n>0)
        {
            grp/=n;
            int idx = (k-1)/grp;
            permutation << nums[idx];
            nums.erase(nums.begin() + idx);
            k = (k-1) % grp + 1;
            --n;
        }
        return permutation.str();
    }
};
