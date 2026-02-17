class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count =0;
        unordered_map<int, int> freq;

        for(auto num : nums)
        {
            freq[num]++;
        }
        for (auto &p : freq) {
                if (freq.count(p.first + k)) count += p.second * freq[p.first + k];
                //if (freq.count(p.first - k)) count++;
            }
        return count;
    }
};