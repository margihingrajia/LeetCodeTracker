class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,0);
        for (int i=0; i<n; i++)
        {
            v[nums[i]-1]++;
        }
        vector<int> result;
        for (int i=0; i<n; i++)
        {
            if (v[i]==0)
            {
                result.push_back(i+1);
            }
        }
        return result;
    }
};