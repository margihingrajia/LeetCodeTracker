class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b=n % 2, prevb;
        n=n/2;

        while (n>0)
        {
            prevb = b;
            b = n % 2;
            n /= 2;
            if (b == prevb)
            {
                return false;
            }
        }
        return true;
    }
};