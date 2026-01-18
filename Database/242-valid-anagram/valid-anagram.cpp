class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        if(s.length() != t.length())
        {
            return false;
        }
        else
        {
            
            for (int i =0; i< s.size();i++)
            {
                v[toupper(s.at(i)) - 'A']++;
                v[toupper(t.at(i)) - 'A']--;
            }
        }
        for(int i=0;i<26;i++ )
        {
            if (v[i]!=0)
            {
                return false;
            }
        }

        return true;
    }
};












// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length())
//         {
//             return false;
//         }
//         else {
//             vector<int> v(26, 0);
//             for (int i = 0; i<s.size(); i++)
//             {
//                v[toupper(s.at(i)) - 'A']++;
//                v[toupper(t.at(i)) - 'A']--;
//             }
//             for (int i=0; i<26; i++)
//             {
//                 if (v[i]!=0)
//                 {

//                     return false;
//                 }
                
//             }
//         }
//         return true;
//     }