#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

char case_convert(char c)
{
    char ans=c>=65 and c<=90?c+32:c-32;
    return ans;
}

signed main()
{
    char c;
    cin>>c;
    char ans;
    ans=case_convert(c);
    cout<<ans;
}
