/* string should contain no duplicate chatracters*/ 

#include<bits/stdc++.h>
using namespace std;
string filter(string st,int n ){
	string ans = "";
	int j = 0;
	while(n>0){
		if( (n&1) == 1)
		ans +=st[j];
	    j++;
	    n = n>>1;
	}
	return ans;
}
bool comp(string str1,string str2){
	return str1.length() < str2.length();
}
int main(){
	string str;cin>>str;
	int n = str.length();	
	int no = (1<<n);
	string ans[no] ;
	for(int i=0;i<no;i++){
	  ans[i] =filter(str,i);
	}
	sort(ans,ans+no,comp);
	for(int i=0;i<no;i++){
		cout<<ans[i]<<endl;
}
}
