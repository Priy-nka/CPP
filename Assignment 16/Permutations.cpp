
//https://leetcode.com/problems/permutations/

class Solution {
private:
    void per(vector<int> nums,int i,vector<vector<int>> &out)
    {
        int len=nums.size();
        if(i>=len)
        {
            out.push_back(nums);
            return;
        }
        for(int j=i;j<len;j++)
        {
            swap(nums[i],nums[j]);
            per(nums,i+1,out);
            swap(nums[i],nums[j]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> out;
        int i=0;
        
        per(nums,i,out);
        return out;
    }
};
