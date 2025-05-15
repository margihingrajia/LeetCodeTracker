class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
    int lastGroup = -1; // Start with an invalid group

    for (size_t i = 0; i < words.size(); ++i) {
        if (result.empty() || groups[i] != lastGroup) {
            result.push_back(words[i]);
            lastGroup = groups[i];
        }
    }

    return result;
        
    }
};
