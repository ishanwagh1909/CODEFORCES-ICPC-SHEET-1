#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string brothers_or_not(string x,string y)
{
    if(x==y)
    {
        return "ARE Brothers";
    }
    else
    {
        return "NOT";
    }
}

signed main()
{
    string f1,s1,f2,s2;
    cin>>f1>>s1>>f2>>s2;
    string ans;
    ans=brothers_or_not(s1,s2);
    cout<<ans;
}