#include<stdio.h>
int main()
{
      int r1,r2,c1,c2;
    int i,j,s,k;
    printf("Enter the row and column of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of second matrix:\n");
    scanf("%d%d",&r2,&c2);
   int m[r1][c1],n[r2][c2],a[r1][c2];
    printf("\nEnter the values of two matrix(row_wise):\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&m[i][j]);
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&n[i][j]);
    }
    printf("\n\nEntered matrices are :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%3d",m[i][j]);
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            printf("%3d",n[i][j]);
        printf("\n");
    }
    printf("\n\nProducts of this two matrix is :\n");
    for(i=0;i<r1;i++)//row of first matrix
    {
        for(j=0;j<c2;j++)//column of second matrix
        {
           a[i][j]=0;
           for(k=0;k<c1;k++)//column of first matrix
            a[i][j]=a[i][j]+m[i][k]*n[k][j];
        }
    }
    for(i=0;i<r1;i++)//row of first
    {
        for(j=0;j<c2;j++)//column of second
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}
