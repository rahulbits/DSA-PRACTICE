#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n];
	int xr = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		xr = xr^arr[i];
	}
	int pos = 0;
	int temp = xr;
	while( temp&1 == 0 ){
		pos++;
		temp = temp >> 1 ;
	}
	int mask = (1<< pos) ;
	int nxr = 0;
	for(int i=0;i<n;i++){
		if(arr[i] & mask){
			nxr = nxr^arr[i];
		}
	}
	int sn = nxr^xr;
	if(sn > nxr){
		cout<<nxr<<" "<<sn<<endl;
	}
	else
	cout<<sn<<" "<<nxr<<endl;
}
