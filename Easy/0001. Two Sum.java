class Solution
{
    public int[] twoSum(int[] nums,int target)
    {

        int i,j;
        int arr[];
        arr = new int[2];
        for(i=0;i<nums.length;i++)
        {
            for(j=1;j<nums.length;j++)
            {
                if(j!=i && (nums[i]+nums[j]==target))
                {
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
        System.out.print(arr[0]);
        System.out.print(arr[1]);
    }
};
