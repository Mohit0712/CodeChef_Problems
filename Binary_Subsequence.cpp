#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll zero=0,one=0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
            zero++;
        else
            one = 1+max(one,zero);
    }
    cout<<n-max(zero,one)<<endl;
    return 0;
}
