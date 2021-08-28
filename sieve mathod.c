#include<stdio.h>
#include<math.h>
void sieve(int [],int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n+1];
    for(i=1;i<=n;i++)
        ara[i]=i;
    sieve(ara,n);
    for(i=1;i<=n;i++)
        if(ara[i]!=1)
            printf("%d\n",i);
    return 0;
}
void sieve(int ara[],int n)
{
    int i=0,j=0;
    for(i=2;i<=sqrt(n);i++)
        for(j=i*2;j<=n;j=i+j)
           ara[j]=1;
}
