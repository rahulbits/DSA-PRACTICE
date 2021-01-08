#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n ; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int low = 0,end = n-1, mid =0;
	while(mid <= end){
		if(arr[mid] == 0 ){
			swap(arr[mid],arr[low]);
			mid++;
			low++;
		}
		else if(arr[mid] == 1)
		{
			mid++;
		}
		else
		{
			swap(arr[mid],arr[end]);
			end--;
			
		}
	}
	
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	}
