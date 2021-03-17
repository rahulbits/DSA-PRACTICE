#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int cost[n];
		int amt[n];
		for(int i=0;i<n;i++){
			cin>>cost[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>amt[i];
		}
		long long m = 0;int mincost = cost[0];
		m = m + (amt[0] * cost[0]);
		for(int i=1;i<n;i++){
         mincost = min(mincost,cost[i]);
		 cout<<mincost<<"  "; 
		 m = m + (mincost*amt[i]); 
		
		} 
		cout<<m<<endl;
	}
	return 0;
}
