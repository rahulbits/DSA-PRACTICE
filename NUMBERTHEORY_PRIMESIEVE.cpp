#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void prime(ll *arr){
	
	for(ll i=3;i<=1000;i+=2 ){
		arr[i] = 1;}
		
	for(ll i=3;i<=1000;i+=2 ){
		if(arr[i] == 1){			
	for(ll j=i*i;j<=1000;j += i){
		arr[j] = 0;
	}
	}
	}
	arr[1] = 0;
	arr[0] = 0;
	arr[2] = 1;
}
int main(){
	
	int n;cin>>n;
	
	ll prime_arr[1000] = {0};
	
	prime(prime_arr);
	
	for(int i=0;i<=n;i++){
		if(prime_arr[i])
		cout<<i<<" ";
	}
	
	cout<<endl;
	
	return 0;
}
