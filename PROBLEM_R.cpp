#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

void age_int_days(int n,int &years,int &months,int &days)
{
    years=n/365;
    int remain_1=n%365;
    months=remain_1/30;
    days=remain_1%30;
}

signed main()
{
    int n;
    cin>>n;
    int years,months,days;
    age_int_days(n,years,months,days);
    cout<<years<<" years"<<endl;
    cout<<months<<" months"<<endl;
    cout<<days<<" days"<<endl;
}
