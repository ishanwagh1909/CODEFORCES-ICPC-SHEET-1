#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string compare(int x,int y)
{
    string ans=x>=y?"Yes":"No";
    return ans;
}

signed main()
{
    int x,y;
    cin>>x>>y;
    string ans;
    ans= compare(x,y);
    cout<<ans;
}