#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string interval(float x)
{
    if(x>=0 and x<=25)
    {
        return "[0,25]";
    }
    else if(x>25 and x<=50)
    {
        return "(25,50]";
    }
    else if(x>50 and x<=75)
    {
        return "(50,75]";
    }
    else if(x>75 and x<=100)
    {
        return "(75,100]";
    }
}

signed main()
{
    float x;
    cin>>x;
    string ans;
    if(x>=0 and x<=100)
    {
        ans= interval(x);
        cout<<"Interval "<<ans;
    }
    else
    {
        cout<<"Out of Intervals";
    }
}
