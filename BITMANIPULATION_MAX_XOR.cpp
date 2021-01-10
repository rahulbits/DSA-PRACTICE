#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int l,r;cin>>l>>r;
    long long int xr = l^r;
	long long int pos = 0;
	while(xr>0){
		pos++;
		xr = xr>>1;
	}
//	long long int ans = 1;
//	while(pos--){
//		ans = ans*2;
//	}
//	cout<<(ans -1)<<endl; 
//	
	// alternate way of getting final answer
	long long int one  = 1,ans = 0;
	while(pos--){
	ans+= one;
	one = one <<1;
    }
    cout<<ans<<endl;
}
