#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n, int key){
	int start = 0;
	int end = n-1;
	int mid;
	while(start <= end){
    mid = (start+end)/2;
    if(arr[mid] ==  key)
    return mid;
    else if(arr[start] <= arr[mid])
    {
    	if(key >= arr[start] and key <= arr[mid])
    	{
    		end = mid-1;
		}
		else 
		start = mid+1;
	}
	else{
		if(key >= arr[mid] and key <= arr[end])
		start = mid+1;
		else
		end = mid-1;
	}
    }
return -1;
}
int main(){
	int n; cin>>n;
	int arr[n],key;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cin>>key;
	cout<<search(arr,n,key)<<endl;

}
