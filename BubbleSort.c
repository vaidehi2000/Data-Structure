#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void main()
{
    int i,j,k,a,b,n,temp,A[100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter array with %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
