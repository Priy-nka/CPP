
//https://leetcode.com/problems/kth-distinct-string-in-an-array/submissions/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for (string i:arr)
        {
            mp[i]++;
        }
        for (string j:arr)
        {
            if (mp[j]==1)
                k--;
            if (k==0)
                return j;
        }
        return "";
        
    }
};
