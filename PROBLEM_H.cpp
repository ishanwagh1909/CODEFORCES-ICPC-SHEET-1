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