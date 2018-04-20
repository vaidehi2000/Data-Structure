#include<stdio.h>
#include<stdlib.h>
int A[100],top=-1,end=-1,n;
void Enqueue(int i)
{
    if(end==n-1)
    {
        printf("Queue is Full");
    }
    else
    {
        top=0;
        end++;
        A[end]=i;
    }
}
void Dequeue()
{
    if(top==end+1)
    {
        printf("Queue is Empty");
    }
    else
    {
        top++;
    }
}
void Print()
{
    if(top==end+1)
    {
        printf("Queue is Full");
    }
    else
    {
        for(int i=top;i<=end;i++)
        {
            printf("%d ",A[i]);
        }
    }
}
void main()
{
    int i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    while(1)
    {
        printf("Enter 1.Enqueue, 2. Dequeue, 3.Print\n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("Enter data you want to enter!!");
            scanf("%d",&j);
            Enqueue(j);
        }
        else if(i==2)
        {
            Dequeue();
        }
        else if(i==3)
        {
            Print();
        }
        else
        {
            break;
        }
    }
}
