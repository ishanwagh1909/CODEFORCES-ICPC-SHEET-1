#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string int_or_float(float x,int &conversion,float &rem)
{
    conversion=x;
    rem=x-conversion;
    return rem?"float":"int";
}

signed main()
{
    float n;
    cin>>n;
    int conversion;
    float rem;
    string ans;
    ans= int_or_float(n,conversion,rem);
    if(rem==0)
    {
        cout<<ans<<" "<<conversion;
    }
    else
    {
        cout << ans << " " << conversion << " " << rem;
    }
}
