#include<iostream>
using namespace std;
int min_pow(int n ){
	int pow = 1;
	while(pow<n){
		pow = pow*2;
	}
	if(pow == n )
	return pow;
	else
	return pow>>1;
}
int main() {
	int t;cin>>t;
	while(t--){
		int n ; cin>>n;
		int k = min_pow(n);
		int rem = n-k;
		int count = 0 ;
		while(rem >=1){
			count++;
			k = min_pow(rem);
		    rem = rem-k;
		}
		cout<<count+1<<endl;
	}
	return 0;
}
