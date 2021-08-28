#include<stdio.h>
int main()
{
    int n;
    printf("How many elements :");
    scanf("%d",&n);
    int i,j,data[n],temp;
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);

int sum=0;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++){
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
            sum++;
      }
printf("\nComparisons :%d\n\n",sum);
    printf("Values after sorting : \n");
    for(i=0;i<n;i++)
        printf(" %d",data[i]);
    return 0;
}

