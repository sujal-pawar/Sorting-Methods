#include <stdio.h>
#include <stdlib.h>
// Insertion Sort

void insertionSort(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}

int main()
{

    int A[] = {23, 7, 12, 45, 31, 18, 9, 4, 3, 11, 29};

    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input :
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&A[i]);
    // }

    insertionSort(A, n);

    printf("Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}