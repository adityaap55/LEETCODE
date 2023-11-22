class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }
        int i,j;
        const int step=2*(numRows-1);
        string zigzag;
        for(i=0;i<numRows;i++)
        {
            for(j=i;j<s.length();j+=step)
            {
                zigzag.push_back(s[j]);
                if(0<i && i<numRows-1 && j+step-2*i<s.length())
                {
                    zigzag.push_back(s[j+step-2*i]);
                }
            }
        }
        return zigzag;
    }
};
