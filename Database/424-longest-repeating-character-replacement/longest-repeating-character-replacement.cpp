class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, MaxLen = 0, MaxFreq = 0;
        vector<int> count(26, 0);
        while (r < s.length()) {
            count[s[r] - 'A']++;
            MaxFreq = max(MaxFreq, count[s[r] - 'A']);
            if (r - l + 1 - MaxFreq > k) {
                count[s[l] - 'A']--;
                l++;
            }
            MaxLen = max(MaxLen, r - l + 1);
            r++;
        }
        return MaxLen;
    }
};