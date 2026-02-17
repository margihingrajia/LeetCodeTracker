class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m = 0;
        cout<<m<<endl;
        for (int i = 1; i<=nums.size(); i++)
        {
            m = m^i;
           // cout<<m <<" ";
            //m = m^i;
        }
        for (int i = 0; i<nums.size(); i++)
        {
            m = m^nums[i];
           // cout<<m <<" ";
            //m = m^i;
        }
        return m;
    }
};