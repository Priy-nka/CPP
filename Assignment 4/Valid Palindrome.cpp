
//leetcode problem

class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'A' and s[i] <= 'Z')
				st += (s[i] + 32);
			else if ((s[i] >= 'a' and s[i] <= 'z') or(s[i] >= '0' and s[i] <= '9')) 
                st += s[i];
		}

		string rst =st;
		reverse(rst.begin(), rst.end());
		return st == rst;

	}
};
