#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	char ch;
	sort(s.begin(),s.end());
	int n = s.length();
	int maxc = 1,c=1;
    ch = s[0];
	for(int i=1;i< n;i++)
	{
	  if(s[i] == s[i-1])
	  {
	  	c++;
	  }
	  else{
	  	if( c > maxc){
	  		maxc = c;
	  		ch = s[i-1];
		  }
		  c = 1;
	  }
	}
	if(c > maxc){
		ch = s[n-1];
	}

	cout<<ch;
}
