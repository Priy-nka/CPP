
//https://leetcode.com/problems/range-sum-query-immutable/

class NumArray {
public:
    vector<int>a;
    NumArray(vector<int>& nums) {
    int add=0,len=nums.size();
    for (int i=0;i<len;i++)
    {
        add+=nums[i];
        a.push_back(add);
    }
    }
    int sumRange(int left,int right)
    {
        if (left==0)
            return a[right];
        else
            return a[right]-a[left-1];
    }
};
