#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string capital_small_digit(char c)
{
    if(c>=48 and c<=57)
    {
        return "IS DIGIT";
    }
    else if(c>=65 and c<=90)
    {
        return "ALPHA\nIS CAPITAL";
    }
    else
    {
        return ("ALPHA\nIS SMALL");
    }
}

signed main()
{
    char c;
    cin>>c;
    string ans;
    ans=capital_small_digit(c);
    cout<<ans;
}