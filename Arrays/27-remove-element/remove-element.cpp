class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int chk = nums.size();  // Limit of where to search for non-val elements
        int count = 0;          // Count of elements removed

        for (int i = 0; i < chk; i++) {
            if (nums[i] == val) {
                // Search from the end of the current valid range
                for (int j = chk - 1; j > i; j--) {
                    if (nums[j] != val) {
                        // Swap non-val at the end with val at i
                        int tmp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = tmp;
                        chk = j; // Reduce the valid range
                        count++;
                        break;
                    }
                }

                // If no non-val element is found after i, update chk and exit loop
                if (nums[i] == val) {
                    chk = i;
                    break;
                }
            }
        }

        int k = chk; // All elements before chk are non-val
        return k;
    }
};
