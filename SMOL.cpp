#include<bits/stdc++.h>
using namespace std;

//Wrong Approach like while(n-k>=0) n=n-k will lead to TLE


//Correct Approach ->
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,k;
        cin>>n>>k;

        if(k==0)
            cout<<n<<endl;
        else
            cout<<n%k<<endl;
    }
    return 0;
}
