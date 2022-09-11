
//https://leetcode.com/problems/find-target-indices-after-sorting-array/submissions/

class Solution {
public:
        vector<int> targetIndices(vector<int>& nums, int target)
        {
            vector<int> v;
            sort(nums.begin(), nums.end());
            int low=0, high=nums.size()-1;
            int start, end;
            bool found = false;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (nums[mid] == target)
                {
                    start = mid;
                    end = mid;
                    found = true;
                    break;
                }
                else if (nums[mid] < target) 
                    low = mid + 1;
                else if (nums[mid] > target)
                    high = mid - 1;
            }
            if (found) 
            {
                while (start>=0 && nums[start]==target) 
                    --start;
                while (end<nums.size() && nums[end]==target)
                    ++end;
                ++start;
                --end;
                while (start<=end) 
                {
                    v.push_back(start);
                    start++;
                }
            }
    return v;
        
    }
};
