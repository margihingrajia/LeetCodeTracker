class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum {};
        for (int i=0;i<nums.size(); i++)
        {
            sum+=nums[i];
        }
        sum = sum%k;
        return sum;
    }
    
};