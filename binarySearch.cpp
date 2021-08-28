#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,item,beg,end,mid;
    printf("How many elements :");
    scanf("%d",&n);
    int i,data[n],check[n];
    cout<<"Enter the elements :"<<endl;
    for(i=0;i<n;i++){
        scanf("%d",&data[i]);
        check[i]=data[i];
    }

    sort(check,check+n);
    for(i=0;i<n;i++)
    {
        if(check[i]!=data[i]){printf("Your input is wrong. List must be sorted\n");
        return 0;}
    }
    printf("Enter the item u want to search :");
    scanf("%d",&item);

    /**main algo of binary search**/
    beg=0;end=n-1;
    mid=(beg+end)/2;
    while(beg<=end && data[mid]!=item)
    {
        if(item<data[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(beg+end)/2;
    }

    if(data[mid]==item){
       // printf("%d is the location of the item\n",mid);
       printf("The positions of the item are :\n");
        for(i = mid;;i--){
            if(data[i]!=item)break;
            //printf("%d  ",i);
        }
        for(i=i+1;;i++){
            if(data[i]!=item)break;
            printf("%d  ",i);
        }
    }
    else
        printf("Item is not found\n");
    return 0;
}


