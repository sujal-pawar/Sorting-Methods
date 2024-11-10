#include <stdio.h>
#include <stdlib.h>
// Radix Sort

int getMax(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void RadixSort(int A[],int n){
    int i,j,k,d,pass=0,div=1;
    int *B;
    int max = getMax(A,n);
    while(max>0){
        max = max/10;
        pass++;
    }
    B=(int *)malloc(sizeof(int)*n);
    for(i=0;i<pass;i++){
        int count[10] = {0};
        for(j=0;j<n;j++){
            d = (A[j]/div)%10;
            count[d]++;
        }
        for(j=1;j<10;j++){
            count[j] = count[j] + count[j-1];
        }
        for(j=n-1;j>=0;j--){
            d = (A[j]/div)%10;
            B[--count[d]] = A[j];
        }
        for(j=0;j<n;j++){
            A[j] = B[j];
        }
        div = div*10;
}
    free(B);
}

int main(){
    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12, 0, 23, 20};
    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input
    // for (int i=0;i<n;i++){
    //     scanf("%d",&A[i]);
    // }

    RadixSort(A,n);

    printf("Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}

