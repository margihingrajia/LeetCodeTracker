class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mm;
        //int comp {};
        for(int i=0;i<nums.size();i++)
        {
            int comp = target - nums[i];
            if (mm.find(comp)!= mm.end())
            {
                return {mm[comp], i};
            }
            else
            {
                mm[nums[i]] = i;
            }
        }
        return {};
    }
};