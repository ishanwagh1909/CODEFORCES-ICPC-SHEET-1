#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

string coordinates(float x,float y)
{
    if(x>0 and y>0)
    {
        return "Q1";
    }
    else if(x<0 and y>0)
    {
        return "Q2";
    }
    else if(x<0 and y<0)
    {
        return "Q3";
    }
    else if(x>0 and y<0)
    {
        return "Q4";
    }
    else if(x==0 and y!=0)
    {
        return "Eixo Y";
    }
    else if(y==0 and x!=0)
    {
        return "Eixo X";
    }
    else if(x==0 and y==0)
    {
        return "Origem";
    }

}

signed main()
{
    float x,y;
    cin>>x>>y;
    string ans;
    ans= coordinates(x,y);
    cout<<ans;
}