#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll  long long
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define REP(i,n) for(int i=0;i<n;i++)

int main(){
	fast;
	int t,n,i,j,k;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> a(n);
		for(i=0;i<n;i++)
			cin >> a[i];
		int z = *min_element(all(a));
		int zz = *max_element(all(a));
		bool ok=true;
		for(i=0;i<n-1;i++){
			if(a[i]>=a[i+1])
				ok=false;
		}
		if(!ok){
			bool okk=true;
			for(i=0;i<n-1;i++){
				if(a[i]!=a[i+1])
					okk=false;
			}
			if(!okk){
				if(a[n-1]>z)
					cout<<"YES";
				else{
					vector<int> p_min(n);
					bool okkk=false;
					p_min[0]=a[0];
					for(i=1;i<n;i++)
						p_min[i]=min(p_min[i-1],a[i]);
					for(i=n-2;i>=1;--i){
						if(a[i]>z && p_min[i-1]<a[i])
							okkk=true;
					}
					if(okkk)
						cout<<"YES";
					else
						cout<<"NO";

				}
			}
			else
				cout<<"NO";
		}
		else
			cout<<"YES";
		cout<<"\n";
	}
	

}
