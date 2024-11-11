#include <stdio.h>
#include <stdlib.h>
// Quick Sort

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int i, j, pivot;
    pivot = A[l];
    i = l;
    j = h+1;
    do
    {
        do{i++;} while (A[i] <= pivot && i<=h);
        do{j--;} while (A[j] > pivot && j>=l);
        if (i < j) swap(&A[i], &A[j]);
    } while (i < j);

        swap(&A[l],&A[j]);
        return j;
}

void quickSort(int A[], int l, int h){
    if(l<h){
       int j = partition(A,l,h); 
       quickSort(A,l,j-1); // For first partition 
       quickSort(A,j+1,h);// For second partition 
    }
}

int main()
{

    int A[] = {3, 2, 5, 4, 1, 9, 6, 8, 11, 1};
    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input
    // for (int i=0;i<n;i++){
    //     scanf("%d",&A[i]);
    // }

    quickSort(A, 0, n-1);

    printf("Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}