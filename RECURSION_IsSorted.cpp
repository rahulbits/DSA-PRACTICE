#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n){
	if(n==0  or n==1)
	return true;
	if(arr[0] <= arr[1] and isSorted(arr+1,n-1))
	return true;
	
	return false;
	
}

int main(){

int n ; cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<isSorted(arr,n)<<endl;
return 0;
}

