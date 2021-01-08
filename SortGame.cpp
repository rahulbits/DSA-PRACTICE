#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<string,int> s1,pair<string,int> s2){
	if(s1.second > s2.second ){
		return true;
	}
	else if(s1.second == s2.second){
		return s1.first < s2.first;
	}
	else
	return false;
}
int main(){
	int x;cin>>x;
	int n;cin>>n;
	pair<string,int> strp[n]; 
	for(int i=0;i<n;i++)
	{
		cin>>strp[i].first;
		cin>>strp[i].second;
		
	}
	sort(strp,strp+n,comparator);
	for(int i=0;i<n;i++)
	{
		if( strp[i].second >= x){
			cout<<strp[i].first<<" "<<strp[i].second<<endl;			
		}
	}
}
