#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

int calculator(int x,int c,int y)
{

    switch(c)
    {
        case 42:
        {
            return x*y;
        }
        case 43:
        {
            return x+y;
        }
        case 45:
        {
            return x-y;
        }
        case 47:
        {
            return x/y;
        }
    }
}

signed main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    int ans;
    ans=calculator(a,s,b);
    cout<<ans;
}
