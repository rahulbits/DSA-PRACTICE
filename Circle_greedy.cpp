#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
	return p1.first < p2.first ;
}
int main() {
	int n ;
   cin>>n;
   int a,b; 
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
     cin>>a>>b;
	 v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),comp);
	int ans = 0;
	int j;
	for(int i=0;i<n-1;){
		j = i+1;
		if (v[j].first < v[i].first + v[i].second + v[j].second ){
			//cout<<"if me aaya"<<endl;
			while(v[j].first < v[i].first + v[i].second + v[j].second and j<n ){
			ans++;
			j++;
		}
		i = j;
		}
		else
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
