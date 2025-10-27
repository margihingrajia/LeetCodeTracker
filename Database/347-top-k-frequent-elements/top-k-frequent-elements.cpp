class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        // Step 1: Count frequency of each number
        for (auto num : nums)
            count[num]++;

        // Step 2: Create buckets where index = frequency
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);  // index 0..n

        for (auto &p : count) {
            int freq = p.second;
            int num = p.first;
            buckets[freq].push_back(num);
        }

        // Step 3: Traverse buckets from high freq to low
        vector<int> res;
        for (int i = n; i >= 0 && res.size() < k; --i) {
            for (auto num : buckets[i]) {
                res.push_back(num);
                if (res.size() == k)
                    break;
            }
        }

        return res;
    }
};
