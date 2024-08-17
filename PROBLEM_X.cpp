#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

void twoInterval(int l1 , int r1 ,int l2 ,int r2)
{
    if(l2>=l1)
    {
        if(l2<=r1)
        {
            if(r2>=r1)
            {
                cout<<l2<<" "<<r1;
            }
            else if(r1>r2)
            {
                cout<<l2<<" "<<r2;
            }
        }
        else if(r1<l2)
        {
            cout<<"-1";
        }
    }
    else if(l1>l2)
    {
        if(r2>=l1)
        {
            if(r2<=r1)
            {
                cout<<l1<<" "<<r2;
            }
            else if(r2>r1)
            {
                cout<<l1<<" "<<r1;
            }
        }
        else if(l1>r2)
        {
            cout<<"-1";
        }
    }
}

signed main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    twoInterval(l1,r1,l2,r2);
}