#include<bits/stdc++.h>
using namespace std;
const int maxt = 10;
const int maxn = 1e5;
const int maxv = 1e9;

int main()
{   
    int t; cin >> t;
    vector<long long> v;    
    while(t--){
        v.clear();
        int n; cin >> n; 
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long ans = LLONG_MIN;
        ans = max(ans, (v[0] + 1) * (v[1] - 1) + 1);
        ans = max(ans, (v[n - 2] + 1) * (v[n - 1] - 1) + 1);
        cout << ans << endl;
    }
    return 0;
} 
