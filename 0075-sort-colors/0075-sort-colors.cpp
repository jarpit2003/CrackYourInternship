class Solution {
public:
    void sortColors(vector<int>& arr) {
      int n = arr.size();
        int cnt0 = 0;
         int cnt1 = 0;
         int cnt2= 0;
        for(int i = 0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cnt0++;
            }
             if(arr[i]==1)
            {
                cnt1++;
            }
            if(arr[i]==2)
            {
                cnt2++;
            }
        }
        for(int i =0;i<cnt0;i++)
        {
            arr[i]=0;
        }
        for(int i =cnt0;i<cnt1+cnt0;i++)
        {
            arr[i]=1;
        }
        for(int i =cnt0+cnt1;i<n;i++)
        {
            arr[i]=2;
        }
    }
};