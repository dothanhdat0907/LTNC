#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    cin >> n;
    long long arr[n+5];
    for(int i = 1; i <= n; i++) arr[i] = i;

    for(int i = 2 ; i <= n/2; i++)
    {
      int j = 2;
      int x = i;
      while(x<=n)
      {
        x = i;
        x *= j;
        if(x<=n) arr[x] = 0;
        j++;
      }
    }
    for(int i = 2; i <= n; i++)
    {
        if (arr[i] != 0) cout<<arr[i]<<" ";
    }
    return 0;
}
