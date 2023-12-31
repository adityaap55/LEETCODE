class Solution{
    public :
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(rowIndex+1);

        for(int i=0;i<result.size();i++)
        {
            int prev=result[0]=1;
            for(int j=1;j<=i;j++)
            {
                const int temp=result[j];
                result[j]+=prev;
                prev=temp;
            }
        }
        return result;
    }
};
