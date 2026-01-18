class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> myMap;
    int comp;
    for (int i=0; i<nums.size(); i++)
    {
        comp= target - nums[i];
        if (myMap.find(comp)!=myMap.end())
        {
            return {myMap[comp], i};
        }
        else
        {
            myMap[nums[i]] = i;
        }
    }
    return {};
    }
};