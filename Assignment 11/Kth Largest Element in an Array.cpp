//https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/

class Solution {
public:
    int findKthLargest(vector<int>& A, int B) {
        
        int n = A.size();
        int low = *min_element(A.begin(), A.end());
        int high = *max_element(A.begin(), A.end());

        while(low <= high)
        {
            int mid = low + (high-low)/2;
            int a = 0;
            int b = 0;

            for(int i=0; i<n; i++)
            {
                if(A[i]>mid)
                    a++;
                else if(A[i]==mid)
                    b++;
            }

            if(a<B && (a+b)>=B){
                return mid;
                break;
            }
            else if(a>=B)
                low = mid+1;
            else if(a<B && (a+b)<B)
                high = mid-1;
        } 
        return -1;
    }
};
