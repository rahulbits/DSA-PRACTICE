#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *a,int n){
	if(n==1)
	return;
	
	for(int i=0;i<n-1;i++)
	{
		if(a[i] >a[i+1])
		swap(a[i],a[i+1]);
	}
	
	return bubble_sort(a,n-1);
}
//
void bubble_sort_completeRecursive(int *a1,int n, int j){
	if(n==1)
	return;
	if(j==n-1){
	return	bubble_sort_completeRecursive(a1,n-1,0);
	}
	if(a1[j] > a1[j+1])
	swap(a1[j],a1[j+1]);
	
	return bubble_sort_completeRecursive(a1,n,j+1);
	
}
int main(){
int arr1[] = {4,8,9,1,2,76, 9};
int arr2[] = {4,8,9,-1,2,76, 9};

int n =7;
bubble_sort_completeRecursive(arr2,n,0);	
bubble_sort(arr1,n);
for(int i =0;i<n;i++)
cout<<arr1[i]<<" ";
cout<<endl;
for(int i =0;i<n;i++)
cout<<arr2[i]<<" ";
return 0;
}

