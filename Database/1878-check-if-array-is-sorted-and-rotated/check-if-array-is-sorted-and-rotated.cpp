class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1])
        {
            for(int i=0; i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            int cnt = 1;
            for(int i=0; i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    if (cnt==0)
                    {
                        return false;
                    }
                    cnt--;
                }
            }
            return true;
        }
    }
};