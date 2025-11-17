class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int maxLen = 0;

    for (int x : s) {
        if (!s.count(x - 1)) {
            int len = 1;
            int curr = x + 1;

            while (s.count(curr)) {
                len++;
                curr++;
            }

            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}
};