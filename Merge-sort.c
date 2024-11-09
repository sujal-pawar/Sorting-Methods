#include <stdio.h>
#include <stdlib.h>
// Merge Sort

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }

    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];

    for (i = 0; i < h; i++)
        A[i] = B[i];
}

int main()
{

    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12};
    int n = sizeof(A) / sizeof(A[0]);

    return 0;
}