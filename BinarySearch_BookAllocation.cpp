#include<bits/stdc++.h>
using namespace std;
bool ifPossible(int arr[],int n,int m , int  mid){
	int no_of_student = 1;
	int pages_read = 0;
	for(int i=0;i<n;i++){
		
		if(pages_read +arr[i] > mid){
			
			no_of_student++;
			pages_read = arr[i];
			if(no_of_student > m)
			return false;
			
		}
		else
		pages_read += arr[i];
	}
	return true;
}
int no_of_page(int arr[],int n,int m){
	int sum = 0,maxi=0;
	for(int i=0;i<n;i++){
		maxi = max(maxi,arr[i]);
	}
	int start = maxi;
	for(int i=0;i<n;i++)
	{
	sum+=arr[i];
    }
	int end = sum;
	int mid ,ans =INT_MAX;
	
	while(start <= end){
		mid = (start+end)/2;
		if(ifPossible(arr,n,m,mid))
		{
			ans = min(ans,mid);
			end = mid-1;
		}
		else
		start = mid+1;
	}
	
	return ans;
}
int main(){
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>m;
	cout<<no_of_page(arr,n,m)<<endl;
}
