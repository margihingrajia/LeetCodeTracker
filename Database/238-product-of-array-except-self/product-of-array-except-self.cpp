class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> ans;

        // Initialize Larr with 1 at the first position
        ans.push_back(1);
        
        // Fill Larr with cumulative products from the left
        for (int i = 1; i < nums.size(); i++) {
            prod = prod * nums[i - 1];
            ans.push_back(prod);
        }

        prod = 1; // Reset the product for the right array
        //Rarr.push_back(1); // Initialize Rarr with 1 at the last position

        // Fill Rarr with cumulative products from the right
        for (int i = nums.size() - 2; i >= 0; i--) {
            prod = prod * nums[i + 1];
            //Rarr.push_back(prod);
            ans.at(i) = ans.at(i)*prod;
        }

        //reverse(Rarr.begin(), Rarr.end()); // Reverse Rarr to match the proper indices
        
        // Now calculate the result by multiplying corresponding elements of Larr and Rarr
        // for (int i = 0; i < nums.size(); i++) {
        //     ans.push_back(Larr[i] * Rarr[i]);
        // }

        return ans;
    }
    };
