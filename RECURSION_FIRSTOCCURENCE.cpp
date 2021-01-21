#include<bits/stdc++.h>
using namespace std;
// Finding First Occurence ////////////////////////

int first_occ(int arr[], int n, int key){
	if(n==0){
		return -1;
	}
	if(arr[0] == key)
{
		return 0;
}
	int i = first_occ(arr+1,n-1,key);

	if(i == -1)
	{
	return -1;
}
	 return i+1;
}

///////////////////

// Finding last Occurence

int last_occ(int arr[], int n, int key){
if(n==0)
return -1;

int i = last_occ(arr+1,n-1,key);
if(i==-1)
{
	if(arr[0] == key)
	{
		return 0;
	}
	else
	return -1;
}

return i+1;
}

//////////////////////

int main(){
 int n ; cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int key;cin>>key;
cout<<first_occ(arr,n,key)<<endl;
cout<<last_occ(arr,n,key)<<endl;
return 0;
}

