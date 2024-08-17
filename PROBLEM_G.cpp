#include <bits/stdc++.h>
using namespace std;
#define int long long

int sum_of_n_numbers(int n)
{
    int sum=n*(n+1)/2;
    return sum;
}

signed main()
{
    int n;
    cin>>n;
    int ans;
    ans=sum_of_n_numbers(n);
    cout<<ans;
}