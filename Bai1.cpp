#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[10000];
    int y[10000];
    for(int i = 0; i < n; i++)
    {
        cin>>x[i] >>y[i];
    }
    int hieu[10000];
    for(int i = 0; i < n; i++)
    {
        hieu[i] = x[i] - y [i];
    }
    int check = 0;
    for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(x[i]==x[j]) check = 1;
                else if(y[i]==y[j]) check = 1;
                else if(hieu[i]==hieu[j]) check = 1;
            }
        }

    if(check == 0) cout<<"no";
    else cout<<"yes";
    return 0;


}
