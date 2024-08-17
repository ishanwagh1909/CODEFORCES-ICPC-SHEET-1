#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

void sort_no(int x,int y,int z)
{
    int min_1=min({x,y,z});
    int min_2;
    int min_3=max({x,y,z});
    cout<<min_1<<endl;
    if(x<=y and x>=z or x>=y and x<=z)
    {
        min_2=x;
    }
    else if(y<=x and y>=z or y>=x and y<=z)
    {
        min_2=y;
    }
    else
    {
        min_2=z;
    }
    cout<<min_2<<endl;
    cout<<min_3<<endl;
    cout<<endl;
}

signed main()
{
    int a,b,c;
    cin>>a>>b>>c;
    sort_no(a,b,c);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
