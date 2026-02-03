class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> n1; 
        vector<int> result;
        for (int i=0;i<nums1.size(); i++)
        {
            n1[nums1[i]]++;
        }
        for (int i=0;i<nums2.size(); i++)
        {
            if (n1[nums2[i]] > 0) {
            result.push_back(nums2[i]);
            n1[nums2[i]]--;
        }
        }
        return result;

    }
};

// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//     unordered_map<int, int> freq;
//     vector<int> result;

//     for (int x : nums1) {
//         freq[x]++;
//     }

//     for (int x : nums2) {
//         if (freq[x] > 0) {
//             result.push_back(x);
//             freq[x]--;
//         }
//     }

//     return result;
// }};
