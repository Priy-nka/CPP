class Solution {
public:
    vector<int> mergeSort(vector<int>& a, vector<int>& b)
    {
        vector<int> sort;
        int i=0, j=0;
        while (i<a.size() && j<b.size())
        {
            if (a[i] < b[j])
            {
                sort.push_back(a[i]);
                i++;
            }
            else
            {
                sort.push_back(b[j]);
                j++;
            }
        }
        while (i < a.size())
        {
            sort.push_back(a[i]);
            i++;
        }
        while (j < b.size())
        {
            sort.push_back(b[j]);
            j++;
        }
        return sort;
    }
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums;
        auto start = nums.begin();
        auto mid = nums.begin() + nums.size()/2;
        auto end = nums.end();
        vector<int> v1(start, mid);
        vector<int> v2(mid, end);
        vector<int> left = sortArray(v1);
        vector<int> right = sortArray(v2);
        return mergeSort(left, right);
    }
};
