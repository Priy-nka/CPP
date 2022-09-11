
//https://leetcode.com/problems/valid-perfect-square/submissions/

class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        int left = 1, right = num / 2 + 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (mid == num / mid)
            {
                return num % mid == 0;
            } 
            else if (mid > num / mid)
            {
                right = mid - 1;
            } 
            else 
            {
                left = mid + 1;
            }
        }
        return false;
    }
};
