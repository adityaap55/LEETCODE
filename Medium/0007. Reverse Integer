class Solution
{
	public: int reverse(int x)
	{
		int i,num,ans;
		long rev=0;
		num=x;
		while(x>0 || x<0)
		{
			i=x%10;
			rev=rev*10+i;
			x=x/10;
		}
		ans=rev;
		if(rev<(pow(2.0,31.0)-1) && rev>(pow(-2.0,31)))
		return ans;
		else
		return 0;
	}
};
