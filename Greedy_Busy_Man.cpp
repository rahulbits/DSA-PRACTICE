#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2){
	return p1.second < p2.second ;
}
int main(){
int t; cin>>t;
int n;
while(t--){
	cin>>n;
	int st,en;
	vector<pair<int,int>> v;
	
	for(int i=0;i<n;i++){
		cin>>st>>en;
		v.push_back(make_pair(st,en));
		
	}
	sort(v.begin(),v.end(),comp);
	int ans = 1;
	int curr = v[0].second;
	for(int i=1;i<n;i++){
		if(v[i].first >= curr){
			curr = v[i].second;
			ans++;
		}
	}
	cout<<ans<<endl;
}

return 0;
}

