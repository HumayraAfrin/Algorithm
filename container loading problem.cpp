#include<bits/stdc++.h>
using namespace std;
void containerLoading(int *containers, int capacity, int n)
{
    int x[n],size=capacity,highest_weight=0;
    sort(containers,containers+n);
    memset(x,0,sizeof(x));
    int i=0;

    ///adding containers in increasing order
    while(i<=n and containers[i]<=capacity)
    {
        x[i]=1;
        capacity -= containers[i];
        highest_weight+=containers[i];
        i++;
    }

    ///interchanging the added highest weight container if needed
    int temp=containers[i-1];
    int temp_index=i-1;
    for(;i<n;i++){
        if((highest_weight-temp+containers[i])<=size){
            x[temp_index]=0;
            x[i]=1;
            highest_weight=highest_weight-temp+containers[i];
            temp=containers[i];
            temp_index=i;
        }
    }

    ///printing which containers can be loaded
    int cnt=0;
    for(i=0;i<n;i++)
      if(x[i]==1){
          cnt++;
          cout<<containers[i]<<" ";
      }

    ///The highest weight of cnt containers
    cout<<endl<<"The highest weight of "<<cnt<<" containers is "<<highest_weight<<" which is the nearest weight of capacity of cargo"<<endl;
}

int main()
{
    while(1){
        cout << "Enter the number of containers : ";
        int n;
        cin >> n;
        cout << "Enter weights of "<< n <<" containers:";
        int containers[n];
        for (int i = 0; i < n; i++)
            cin >> containers[i];
        cout << "Enter the cargo capacity of the ship: ";
        int capacity;
        cin >> capacity;
        containerLoading(containers, capacity, n);
        cout<<endl<<"Again,"<<endl;
    }
    return 0;
}
