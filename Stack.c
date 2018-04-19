#include<stdio.h>
#include<stdlib.h>
int A[100],top=-1,n;
void Push(int m)
{
    if(top>=n-1)
    {
        printf("Stack is Full!!");
    }
    else
    {
        top++;
        A[top]=m;
    }
}
void Pop()
{
    if(top<=-1)
    {
        printf("Stack is empty!!");
    }
    else
    {
        top--;
    }
}
void Print()
{
    if(top<=-1)
    {
        printf("Stack is empty!!");
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d->",A[i]);
        }
    }
}
void main()
{
    int i,j ;
    printf("Enter n: ");
    scanf("%d",&n);
    while(1)
    {
        printf("Enter 1.Push, 2.Pop, 3. Print\n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("Enter data you want to enter: ");
            scanf("%d",&j);
            Push(j);
        }
        else if(i==2)
        {
            Pop();
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
