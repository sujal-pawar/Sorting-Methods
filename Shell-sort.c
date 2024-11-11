#include <stdio.h>
#include <stdlib.h>

void shellSort(int A[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap = gap / 2)
    {

        for (i = gap; i < n; i++)
        {
            temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
                A[j + gap] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12, 0, 23, 20};
    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input :
    // for(int i=0; i<n; i++)
    // {
    //     scanf("%d",&A[i]);
    // }

    shellSort(A, n);

    printf("Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}
