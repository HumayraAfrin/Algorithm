#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int tmp,first=a[0],k,second=a[1],third=a[2],loc1=0,loc2=1,loc3=2;
    if(second<third)
    {
        tmp=second;
        second=third;
        third=tmp;
        loc2=2;
        loc3=1;
    }
    if(first<second)
    {
        tmp=first;
        first=second;
        second=tmp;
        loc2=0;
        loc1=1;
    }
    for(k=3;k<n;k++)
    {
        if(a[k]>first)
        {
            third=second;
            second=first;
            first=a[k];
            loc3=loc2;
            loc2=loc1;
            loc1=k;
        }
        else if(a[k]>second)
        {
            third=second;
            second=a[k];
            loc3=loc2;
            loc2=k;
        }
        else if(a[k]>third)
        {
            third=a[k];
            loc3=k;
        }
    }
    printf("The first largest is : %d and its location is : %d\nThe second largest is : %d and its location is : %d\n",first,loc1,second,loc2);
    printf("The third largest is : %d and its location is : %d\n",third,loc3);
    return 0;
}

