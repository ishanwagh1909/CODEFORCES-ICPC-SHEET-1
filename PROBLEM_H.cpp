#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

void two_numbers(float x,float y,int &division_1,int &division_2,int &division_3)
{
    float division=x/y;
    division_1=floor(division);
    division_2=ceil(division);
    division_3= round(division);
}

signed main()
{
    float x,y;
    cin>>x>>y;
    int division_1,division_2,division_3;
    two_numbers(x,y,division_1,division_2,division_3);
    cout<<"floor "<<x<<" / "<<y<<" = "<<division_1<<endl;
    cout<<"ceil "<<x<<" / "<<y<<" = "<<division_2<<endl;
    cout<<"round "<<x<<" / "<<y<<" = "<<division_3<<endl;
}