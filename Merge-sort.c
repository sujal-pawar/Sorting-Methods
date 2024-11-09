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

    while (i <= mid)
        B[k++] = A[i++];
    while (j <= h)
        B[k++] = A[j++];

    for (i = l; i <= h; i++)
        A[i] = B[i];
}

void ImergeSort(int A[],int n){
    
    int p,l,mid,h,i;
    for( p=2 ; p<=n ; p=p*2 ) // log(n) iterations / Passes
    {
        for( i=0 ; i+p-1<n ; i=i+p ){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
    }
    if(p/2<n) // For elements that don't form a complete pair.
        Merge(A,0,(p/2)-1,n-1);

}

int main()
{

    int A[] = {3, 7, 1, 6, 8, 9, 11, 10, 15, 12};
    int n = sizeof(A) / sizeof(A[0]);

    ImergeSort(A,n);

    printf("Sorted Array :");
    for(int i=0;i<n;i++){
        printf(" %d",A[i]);
    }

    return 0;
}