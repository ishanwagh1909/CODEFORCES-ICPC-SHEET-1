#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string hard_compare(int a,int b,int c,int d)
{
    if(b*log(a)>d*log(c))
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

signed main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string ans;
    ans=hard_compare(a,b,c,d);
    cout<<ans;
}