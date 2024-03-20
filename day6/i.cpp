#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll mult=a;
    ll cnt=0;
    while(mult <=b)
    {
        cnt++;
        mult=mult*2;
    }
    cout<<cnt<<endl;
}