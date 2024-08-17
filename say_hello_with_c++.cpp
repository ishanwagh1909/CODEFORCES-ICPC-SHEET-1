#include <bits/stdc++.h>
using namespace std;

string hello(string s)
{
    string concat="Hello, "+s;
    return concat;
}

signed main()
{
    string s;
    cin>>s;
    string ans=hello(s);
    cout<<ans;
}