#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int arrl_r[n],arrr_l[n];
	int c = 1;
	arrl_r[0] = 1;
	for(int i =1;i<n;i++ ){
		if(arr[i] >= arr[i-1]){
			c++;
			arrl_r[i] = c;
		}
		else
		{
			c = 1;
			arrl_r[i] = c;
		}
	}
	c = 1;  arrr_l[n-1] = 1;
	for(int i=n-2;i>=0;i--){
		if(arr[i] >= arr[i+1]){
			c++;
			arrr_l[i] = c;
		}
		else{
			c= 1;
			arrr_l[i] = c;
		}
	}
	//Finding max of arrl_r + arrr_l - 1
	int maxlen = INT_MIN;
	for(int i=0;i<n;i++){
		maxlen = max((arrr_l[i]+arrl_r[i]-1),maxlen);
	}
	cout<<maxlen<<endl;
}
