#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;cin>>n;
	int arr[n];
	for(int i =0 ;i<n;i++){
		cin>>arr[i];
	}
	int max = *max_element(arr, arr+n); 
	int count[max+1] = {0};
	for(int i=0;i<n;i++)
{
	count[arr[i]]++;
}
int result[n] = {0};

for(int j=0,i=0;i<max+1;i++){
	while(count[i]> 0 )
	{
	
	  result[j] = i;
	  j++;
	  count[i]--;
	}
}
for(int i=0;i<n;i++){
cout<<result[i]<<" ";
}

	return 0;
}
