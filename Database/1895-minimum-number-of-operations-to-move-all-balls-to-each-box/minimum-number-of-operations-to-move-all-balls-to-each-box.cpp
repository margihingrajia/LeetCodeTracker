class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for (int i=0; i<boxes.size();i++)
        {
            int k {};
            for (int j=0; j<boxes.size();j++)
            {
                if (i!=j)
                {
                    if (boxes.at(j)=='1')
                    {
                        k+=(abs(i-j));
                    }
                }
            }
            ans.push_back(k);
        }
        return ans;
    }
};