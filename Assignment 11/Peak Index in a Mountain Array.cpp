
//https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int s=0,k=arr.size()-1;
        int mid=s+(k-s)/2;
        while(s<k)
        {
            if(arr[mid]<arr[mid+1])
                s=mid+1;
            else
                k=mid;
            mid=s+(k-s)/2;
        }
        return mid;
    }
};
