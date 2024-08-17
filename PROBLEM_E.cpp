#include <bits/stdc++.h>
using namespace std;
#define float double

float area_of_circle(float r)
{
    float area=3.141592653*pow(r,2);
    return area;
}

signed main()
{
    float r;
    cin>>r;
    float ans;
    ans=area_of_circle(r);
    cout<<fixed<<setprecision(9)<<ans;
}