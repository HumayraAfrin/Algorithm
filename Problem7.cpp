#include<bits/stdc++.h>
using namespace std;
long int SubArray(int arr[], int n)
{
    long int result = 0;

    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            int CountOdd=0;
            int CountEven=0;

            for (int k=i; k<=j; k++)
            {
                //cout<<arr[k]<<" ";
                //cout<<endl;
                if(arr[k]%2==0)
                    CountEven++;
                else
                    CountOdd++;

            }
            if(CountEven==CountOdd)
                result++;
            cout<<endl;



        }
    }
    return result ;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<<SubArray(arr, n)<<endl;
    return 0;
}

