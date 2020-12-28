#include<bits/stdc++.h>
using namespace std;
int kadane_max(int arr[],int n){
	int current_max = 0;
	int max_till_now = INT_MIN;
	for(int i=0;i<n;i++){
		current_max +=arr[i];
		if(current_max > max_till_now){
		max_till_now = current_max;
		}
		if(current_max <0){
		current_max = 0;
		}
	}
	return max_till_now;
}

int max_sum(int arr[] , int n){
	    int simple_max = kadane_max(arr,n) ;
       int array_sum = 0;
	   for(int i =0;i<n;i++)
       {
       	array_sum+=arr[i];
       	arr[i] = -arr[i];
	   }
	   int negative_max = kadane_max(arr,n);
	   int circular_max = array_sum + negative_max;
	   if(circular_max == 0)
            return simple_max;
	   return (circular_max>simple_max) ? circular_max : simple_max;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
				cout<<max_sum(arr,n)<<endl;
	}
}
