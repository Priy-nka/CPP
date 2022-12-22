
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        long long int low=0,high=nums.size()-1,a=-1,f,l,mid;
        vector<int>ans(2,-1);
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
            {
            a=mid;
            break;
            }
            else if(nums[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
        f=a;
        l=a;
        if(a!=-1)
        {
            while(f>=0 && nums[f]==target)
            f--;
            while(l<nums.size() && nums[l]==target)
            l++;
            f++;
            l--;
            ans[0]=f;
            ans[1]=l;

        }
        else
        {
            ans[0]=-1;
            ans[1]=-1;
        }
        return ans;
    }
};
