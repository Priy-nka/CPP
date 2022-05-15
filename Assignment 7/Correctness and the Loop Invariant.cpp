#include <bits/stdc++.h>
using namespace std;


void insertionSort(int N, int arr[]) {
    for (int i=0;i<N-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            int temp=i;
            for (int j=i-1;j>=0;j--)
            {
                if (arr[temp]<arr[j])
                {
                    swap(arr[temp],arr[j]);
                    temp--;
                }
            }
        }
        
    }
    for (int k=0;k<N;k++)
    {
        cout<<arr[k]<<" ";
    }
}
       
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
