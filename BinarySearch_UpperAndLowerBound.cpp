/* Find position of the last and first occurrence of a given number in a sorted array. If number does not exist then print lower and upper bound as -1.

Input Format
First line contains an integer n denoting the size of the array.
Second line contains n space separated integers denoting array elements.
Third line contains single integer Q denoting the no of queries.
Q lines follow , each containing a single integer x that is to be searched in the array.

Remark = we can use the STL function upper_bound and lower_bound and  give the output as lower_bound and upperbound-1        */
// Binary Search solution

#include<bits/stdc++.h>
using namespace std;
int upperbound(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int lb = INT_MIN,flag = 0;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid] > key){
			end = mid-1;
		}
		else if(arr[mid] == key){
			lb = max(lb,mid);
			flag = 1;
			start = mid+1;
		}
		else
		start = mid+1;
	}
	if(flag)
	return lb;
	else 
	return -1;
}
int lowerbound(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int lb = INT_MAX,flag = 0;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid] > key){
			end = mid-1;
		}
		else if(arr[mid] == key){
			lb = min(lb,mid);
			flag = 1;
			end = mid-1;
		}
		else
		start = mid+1;
	}
	if(flag)
	return lb;
	else 
	return -1;
}
int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int q;cin>>q;
	while(q--){
		int target;cin>>target;
				
				int lb = lowerbound(arr,n,target);
			    int ub = upperbound(arr,n,target);
			    cout<<lb<<" "<<ub<<endl;
			}
	
}

