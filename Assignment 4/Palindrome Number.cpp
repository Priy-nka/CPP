
//leetcode problem


class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        else
        {
            int len=0,rem;
            long int rev=0;
            for (int i=abs(x);i>0;i=i/10)
            {
                len+=1;
            }
            for (int j=abs(x);j>0;j=j/10)
            {
                rem=j%10;
                rev+=pow(10,len-1)*rem;
                len--;
            }
            if (rev==x)
                return true;
            else 
                return false;
        }
        
    }
};
