
//Time limit exceeded in leetcode but worked for test cases

class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        for (int i=0;i<nums.size();i++)
        {
            int min=INT_MAX,ind;
            for (int j=i;j<nums.size();j++)
            {
                if (nums[j]<min)
                {
                    min=nums[j];
                    ind=j;
                }
            }
            swap(nums[i],nums[ind]);
        }
        return nums;
    }
};
