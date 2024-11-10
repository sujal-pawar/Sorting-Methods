#include <stdio.h>
#include <stdlib.h>
// Merge Sort

void merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}
void IMergeSort(int A[], int n)
{
    int p, l, h, mid, i;
    for (p = 2; p <= n; p = p * 2)
    {
        for (i = 0; i + p - 1 < n; i = i + p)
        {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(A, l, mid, h);
        }
        if (n - i > p / 2){
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(A, l, mid, n - 1);
        }
    }
    if (p / 2 < n){
        merge(A, 0, p / 2 - 1, n - 1);
    }
}

void MergeSort(int A[],int l,int h) // Recursive Merge Sort
{
    int mid;
    if(l<h){
        mid = (l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int main()
{

    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12, 0,23,20};
    int n = sizeof(A) / sizeof(A[0]); 

    MergeSort(A,0,n-1); // Recursive Merge Sort

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}