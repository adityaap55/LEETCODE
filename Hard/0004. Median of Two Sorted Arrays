class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
     {
       
        vector<int> v3;
        for (int i = 0; i < nums1.size(); i++)
        {
            v3.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            v3.push_back(nums2[i]);
        }
        sort(v3.begin(), v3.end());

      int len=v3.size();
      double median;

      if((len%2)==0)
      {
          median=(double)(v3[len/2 - 1] + v3[len/2 ])/2;
      }
      else
      median=v3[(len-1)/2];

      return median;
    }
};
