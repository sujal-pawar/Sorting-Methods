#include <stdio.h>
#include <stdlib.h>
// Count Sort

int findMax(int A[],int n){
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

void CountSort(int A[],int n){
    int i,j,max,*C;
    
    max = findMax(A,n);
    C = (int *)malloc(sizeof(int)*(max+1));
    
    
    for(i=0;i<max+1;i++){
        C[i] = 0;
    }
    
    for(i=0;i<n;i++){
        C[A[i]]++;
    }

    i=0;j=0;
    while(j<max+1){
        if(C[j]>0){
            A[i++]=j;
            C[j]--;
        }else{
            j++;
        }
    }

    free(C);
}

int main()
{
    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12, 0, 23, 20};
    int n = sizeof(A) / sizeof(A[0]);

    // Custom Input
    // for (int i=0;i<n;i++){
    //     scanf("%d",&A[i]);
    // }

    CountSort(A,n);

    printf("Sorted Array :");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", A[i]);
    }

    return 0;
}