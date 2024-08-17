#include <bits/stdc++.h>
using namespace std;
#define int long long

void calculator(int x,int y,int& sum,int& multi,int& diff)
{
    sum=x+y;
    multi=x*y;
    diff=x-y;
}

signed main()
{
    int x,y;
    cin>>x>>y;
    int sum,multi,diff;
    calculator(x,y,sum,multi,diff);
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<multi<<endl;
    cout<<x<<" - "<<y<<" = "<<diff<<endl;
}