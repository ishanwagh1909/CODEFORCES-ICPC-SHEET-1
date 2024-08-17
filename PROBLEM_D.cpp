#include <bits/stdc++.h>
using namespace std;
#define int long long

int difference(int a,int b,int c,int d)
{
    int multiply_1=a*b;
    int multiply_2=c*d;
    int substract=multiply_1-multiply_2;
    return substract;
}

signed main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int diff;
    diff=difference(a,b,c,d);
    cout<<"Difference = "<<diff;
}