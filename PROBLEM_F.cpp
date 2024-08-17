#include <bits/stdc++.h>
using namespace std;
#define int long long

int summation(int x,int y)
{
    int remainder_1=x%10;
    int remainder_2=y%10;
    int sum=remainder_1+remainder_2;
    return sum;
}

signed main()
{
    int m,n;
    cin>>m>>n;
    int ans;
    ans=summation(m,n);
    cout<<ans;
}
