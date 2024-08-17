#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string multiples(int x,int y)
{
    string ans=x%y==0 or y%x==0?"Multiples":"No Multiples";
    return ans;
}

signed main()
{
    int a,b;
    cin>>a>>b;
    string ans;
    ans= multiples(a,b);
    cout<<ans;
}