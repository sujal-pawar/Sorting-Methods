#include <stdio.h>
#include <stdlib.h>

int swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

void Bubble(int A[],int n)
{
    int i,j;
    int flag;
    for(i=0; i<n-1; i++)
    {
        flag=0;
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int A[]= {3,7,9,10,6,5,12,4,11,2};
    int n=sizeof(A) / sizeof(A[0]);
    Bubble(A,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
