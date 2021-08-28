#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    for(int i=0;i<n;i++)
    {
        int t=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[t]>a[j])
                t=j;
        }
        swap(a[i],a[t]);
    }
    for(int i=0;i<n;i++)
        cout <<a[i] <<" ";
    return 0;
}
