#include <stdio.h>
#include <stdlib.h>
// Selection Sort

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
            {
                k = j;
            }
        }
        swap(&A[i], &A[k]);
    }
}

int main()
{

    int A[] = {2, 6, 3, 7, 4, 5, 8, 11, 23};
    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input :
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&A[i]);
    // }

    selectionSort(A, n);

    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}