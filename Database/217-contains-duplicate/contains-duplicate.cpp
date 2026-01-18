class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
unordered_set<int> s;
for(int i=0;i<nums.size(); i++)
{
    if (s.count(nums[i]))
    {
        return true;
    }
    else
    {
        s.insert(nums[i]);
    }
}
return false;
}};


    // unordered_set<int> j;
    // for (int i=0;i<nums.size(); i++)
    // {
    //     if (j.count(nums[i]))
    //     {
    //         //cout<<j.count(nums[i]);
    //         return true;
    //     }
    //     else
    //     {
    //         j.insert(nums[i]);
    //     }
    // }
    // return false;
    // }
    //Method - 2
    // {
    // sort(nums.begin(), nums.end());
    // if (nums.size() ==0)
    // {
    //     return false;
    // }
    // else if (nums.size() ==1)
    // {
    //     return false;
    // }
    // else{
    //         for (int num=0; num<nums.size()-1; num++) {
    //         if (nums.at(num) == nums.at(num+1) )
    //         {
    //             return true;
    //         }
    //     }

    // }  
    // return false; 
    // }
