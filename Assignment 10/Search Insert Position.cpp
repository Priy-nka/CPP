
//https://leetcode.com/problems/search-insert-position/submissions/

class Solution {
public:

int searchInsert(vector<int>& nums, int target) 
{
    int s=0,k=nums.size()-1;
    while(s<k){
        int  mid=s+(k-s)/2;
        if(nums[mid]>=target)
            k=mid;
        else
            s=mid+1;
    }
    return nums[s]>=target?s:s+1;
}
};
