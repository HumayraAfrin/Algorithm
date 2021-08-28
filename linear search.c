#include<stdio.h>
int main()
{
    int n,item,loc=-1;
    printf("How many elements :");
    scanf("%d",&n);
    int i,data[n],k=0;
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);

    printf("Enter the item to be searched :");
    scanf("%d",&item);

    while(loc==-1 && k<n)
    {
        if(item==data[k])
            loc=k;
        k++;
    }

    if(loc==-1)
        printf("Item is not found\n");
    else
        printf("%d is the location of the %d \n",loc,item);
    return 0;
}

