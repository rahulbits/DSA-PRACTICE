/* space complesity O(N) Time complexity - O(N)*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ; cin>>n;
	int arr[n],l[n],r[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	l[0] = arr[0];
	r[n-1] = arr[n-1];
	for(int i = 1;i<n;i++){
		l[i] = max(l[i-1],arr[i]);
	}
	for(int i= n-2;i>=0;i--){
		r[i] = max(r[i+1],arr[i]);
	}
	int store = 0;
	for(int i=0;i<n;i++){
		store += (min(l[i],r[i]) - arr[i]);
	}
	cout<<store<<endl;
}
