// Here we need to find the output that is time So we need to think of binary search in terms of time

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n, int parata,int time){
	int count = 0,made[n] = {0};
	for(int i=0;i<n;i++){
	int c=0,time_taken = arr[i],j=1;
	while(time_taken <= time){
	j++;
	time_taken += arr[i]*j;     
	 }     
	made[i] = j-1;
	}
//	for(int i=0;i<n;i++)
//	cout<<made[i]<<endl;
	for(int i=0;i<n;i++)
     count+=made[i];
     if(count >= parata)
     return true;
     else 
	 return false;
}

int main(){
	int t;cin>>t;
	while(t--){
		int parata;cin>>parata;
		int cook;cin>>cook;
		int rank[cook];
		for(int i=0;i<cook;i++){
			cin>>rank[i];
		}
        int time_taken_by_slowest = 0;
		int t1 = rank[cook-1]	;
		for(int i=1; i<= parata;i++){
			time_taken_by_slowest += (t1*i);
		}	
		int end = time_taken_by_slowest;
		int start = 0;
		int ans = INT_MAX;
		while(start <= end )
		{
			int mid = (start+end)/2;
			if(isPossible(rank,cook,parata,mid)){
				ans = min(ans,mid);
				end = mid-1;
			}
			else
			start = mid+1;
		}
		cout<<ans<<endl;
	}
}
