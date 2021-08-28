#include<stdio.h>
void pop(int ara[],int TOP)
{
    int n,i;
    printf("\nFor deleting any item enter 1, else enter 0 :.....  ");
    scanf("%d",&n);
    if(n==0) return;
    else
    {
        TOP--;
        if(TOP<0)
        {
            printf("\nUNDERFLOW\n");
            return;
        }
        else
        {
            for(i=0;i<TOP;i++)
                printf("%5d",ara[i]);
            pop(ara,TOP);
        }
    }
}
int main()
{
    int TOP,i;
    printf("Enter total elements number in stack:....  ");
    scanf("%d",&TOP);
    int ara[TOP];
    printf("Enter elements :\n");
    for(i=0;i<TOP;i++)
        scanf("%d",&ara[i]);
    pop(ara,TOP);
    return 0;
}
