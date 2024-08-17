#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

int last_two_digit(int a,int b,int c,int d)
{
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    int multiply=a*b*c*d;
    return multiply%100;
}

signed main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans;
    ans=last_two_digit(a,b,c,d);
    if(ans>=10)
    {
        cout<<ans;
    }
    else
    {
        cout<<0<<ans;
    }
}