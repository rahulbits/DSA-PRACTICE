#include<bits/stdc++.h>
using namespace std;
#define INTMAX 1000000000
int main() {
	int t;
	cin>>t;
	int n,k;
	while(t--) {
		cin>>n>>k;
		int ans  = INTMAX;
		int occ;

		for(int i = 2 ; i*i<=k ; i++) {
			if(k%i == 0) {
				occ = 0;
				while(k%i == 0) {
					occ++ ;
					k = k/i ;
				}
				int cnt= 0;
				int prime = i;
				while(prime<=n) {
					cnt += n/prime;
					prime = prime*i;
				}
				ans = min(ans,cnt/occ);
			}
		}

		if(k>1) {
			int cnt = 0;
			long long p = k;
			while(p <=n ) {
				cnt += n/p;
				p = p*k;
			}
			ans  = min(ans,cnt);
		}

		if(ans == INTMAX) {
			ans = 0;
		}

		cout<<ans<<endl;

	}

	return 0;

}

