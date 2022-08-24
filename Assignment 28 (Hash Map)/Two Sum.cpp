
//https://leetcode.com/problems/two-sum/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for (int j=0;j<nums.size();j++)
        {
            int ans=target-nums[j];
            if(mp.find(ans)!=mp.end())
            {
                if (j!=mp[ans])
                    return {j,mp[ans]};
            }
        }
        return {};
    }
};
