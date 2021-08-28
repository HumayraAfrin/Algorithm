#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"How many programs? "<<endl;
    cin>>n;
    cout<<"Enter the lengths of the "<<n<<" programs :"<<endl;
    int ara[n],a[n];
    for(int i=0;i<n;i++){
        cout<<"Program "<<i+1<<" : ";
        cin>>a[i];
        ara[i]=a[i];
    }
    sort(ara,ara+n);
    int ordering[n],p=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(ara[i]==a[j]){
                ordering[p++]=j+1;
                break;
            }
    for(int i=1;i<n;i++)
        ara[i]=ara[i]+ara[i-1];
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=ara[i];
    cout<<"The order in which minimum length will be needed :"<<endl;
    for(int i=0;i<n;i++)
        cout<<ordering[i]<<" ";
    cout<<endl<<"The minimum length is : "<<sum<<endl;
    return 0;
}
