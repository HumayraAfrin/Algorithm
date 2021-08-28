#include<stdio.h>
void function(int ara[], int MAXSTK, int top)
{
    int n,i;
    printf("\nIf u want to push an item ,enter 1 else 0: .... ");
    scanf("%d",&n);
    if(n==0) return;
    else if(n==1)
    {
        if(top==MAXSTK)
        {
            printf("\nOVERFLOW");
            return;
        }
        else
        {
            printf("\nEnter an element :\n");
            scanf("%d",&ara[top]);
            for(i=0;i<=top;i++)
                printf("%5d",ara[i]);
            top++;
        }
    }
    function(ara,MAXSTK,top);
}
int main()
{
    int MAXSTK,top=0;
    printf("Enter free space number in stack:");
    scanf("%d",&MAXSTK);
    int ara[MAXSTK+1];
    function(ara,MAXSTK,top);
    return 0;
}
