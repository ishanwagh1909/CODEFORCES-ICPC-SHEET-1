#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double

void max_min(int x, int y, int z, int &max_no, int &min_no )
{
    max_no=max({x,y,z});
    min_no=min({x,y,z});
}

signed main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max_no,min_no;
    max_min(a,b,c,max_no,min_no);
    cout<<min_no<<" "<<max_no;
}
