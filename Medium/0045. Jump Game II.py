class Solution(object):
    def jump(self, nums):
        count=0
        reach=0
        curr_reach=0
        for i,length in enumerate(nums):
            if i>reach:
                return -1
            if i>curr_reach:
                curr_reach=reach
                count +=1
            reach = max(reach,i+length)        
        return count
