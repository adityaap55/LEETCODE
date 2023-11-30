class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size();

        while(left<right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
            return mid;
            }
            else if((nums[left]<=nums[mid] && nums[left]<=target && target<nums[mid]) || (nums[left] > nums[mid] && !(nums[mid] < target && target <= nums[right - 1]))) {
                right = mid;
            }
            else{
                left=mid+1;
            }
        }
        return -1;
    }
};
