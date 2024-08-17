#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string math_exp(int a,char s,int b,int c)
{
    int ans;
    if(s=='+')
    {
        ans=a+b;
    }
    else if(s=='-')
    {
        ans=a-b;
    }
    else
    {
        ans=a*b;
    }
    if(ans==c)
    {
        return "Yes";
    }
    else
    {
        string x= to_string(ans);
        return x;
    }
}

signed main()
{
    int a,b,c;
    char s,q;
    string ans;
    cin>>a>>s>>b>>q>>c;
    ans=math_exp(a,s,b,c);
    cout<<ans;
}
