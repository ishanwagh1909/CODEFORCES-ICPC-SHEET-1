#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string first_digit(int x)
{
    int quotient=x/1000;
    string ans;
    ans=quotient%2==0?"EVEN":"ODD";
    return ans;
}

signed main()
{
    int x;
    cin>>x;
    string ans;
    ans= first_digit(x);
    cout<<ans;
}
