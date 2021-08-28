#include<iostream>
using namespace std;
void Quicksort(int Array[],int start,int End);
int Partition(int Array[],int start,int End);

int main()
{
    int Array[100],num;
    cout<<"Enter the number of elements: "<<endl;
    cin>>num;
    cout<<"Enter the elements : "<<endl;
    for(int i=1; i<=num; i++)
        cin>>Array[i];
    Quicksort(Array,1,num);
    cout<<"Sorted : "<<endl;
    for(int i=1; i<=num; i++)
        cout<<Array[i]<<" ";
}
void Quicksort(int Array[],int start,int End)
{
    int pivot;
    if(start<End)
    {
        pivot=Partition(Array,start,End);
        Quicksort(Array,start,pivot-1);
        Quicksort(Array,pivot+1,End);
    }
}
int Partition(int Array[],int start,int End)
{
    int x=Array[End];
    int i=start-1;
    for(int j=start; j<=End-1; j++)
    {
        if(Array[j]<=x)
        {
            i++;
            swap(Array[j],Array[i]);
        }
    }
    swap(Array[End],Array[i+1]);
    return i+1;
}

/*#include<bits/stdc++.h>
using namespace std;
int qsort(int a[],int f,int l)
{
    if(f<l)
    {
        int i=f+1;
        int j=l;
        while(a[i]<a[f])
            i++;
        while(a[j]>a[f])
            j--;
        while(i<j)
        {
            swap(a[i],a[j]);
            while(a[i]<a[f])
                i++;
            while(a[j]>a[f])
                j--;
        }
        swap(a[f],a[j]);
        qsort(a,f,j-1);
        qsort(a,j+1,l);
    }
}
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >>a[i];
    qsort(a,0,n-1);
cout <<endl;
for(int i=0;i<n;i++)
    cout <<a[i]<< " ";
    return 0;
}
*/
