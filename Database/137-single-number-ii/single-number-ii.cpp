class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mm;
        for(int i=0; i<nums.size(); i++)
        {
            mm[nums[i]]++;
        }
        for (auto &p : mm) {
            if (p.second == 1) {
             return p.first;
    }
}
return {};
}};