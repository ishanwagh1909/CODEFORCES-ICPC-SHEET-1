#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string comparison(int a,char c,int b)
{
    if(a>b and c=='>' or a<b and c=='<' or a==b and c=='=')
    {
        return "Right";
    }
    else
    {
        return "Wrong";
    }
}

signed main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    string ans;
    ans=comparison(a,s,b);
    cout<<ans;

}
