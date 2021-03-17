#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int minsum = 0;
	long long maxsum = 0;
	int k = n/2;
	
		for(int i=0;i<k;i++){
			int k = (arr[n-i-1] - arr[i]);
			maxsum+=k;
		}
		for(int i=0;i<n;i+=2){
			int j=i+1;
			minsum+=(abs(arr[j]-arr[i]));
		}
		cout<<minsum<<" "<<(maxsum)<<endl;
}

return 0;
}

