class Solution
{
  public:
        bool isPalindrome(long x)
         {
            long rem,rev=0;
            long num=x;

            while(x>0)
            {
                rem=x%10;
                rev=rev*10+rem;
                x/=10;
            }
            if(num==rev)
            return true;
            else
            return false;
          }
};
