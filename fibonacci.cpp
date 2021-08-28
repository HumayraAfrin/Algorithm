#include<bits/stdc++.h>
using namespace std;
int fib(int n,int f[])
{
  int i;
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

}

int main ()
{
  int n;
  cin>>n;
  int f[n+2];
  fib(n,f);
  for(int i=0;i<=n;i++)
    cout<<f[i]<<" ";
  return 0;
}
