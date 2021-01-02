#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n = s.length();
	string wrd= "";
	for(int i=0;i<n;i++){
		if(s[i] >= 'A' and s[i] <= 'Z')
		{
			if(wrd.empty()){
				wrd += s[i];
			}
			else{
			cout<<wrd<<endl;
			wrd.clear();
			wrd += s[i];
		}}
		else
		wrd += s[i];
	}
	cout<<wrd<<endl;
	return 0;
	}
