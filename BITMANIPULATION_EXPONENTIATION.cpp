#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,n; cin>>a>>n;
	int c_ans = 1;
	while(n > 0){
		if(n &1 == 1)
		c_ans = c_ans*a;
		n = n>>1;
		 a = a*a;
	}
	cout<<c_ans<<endl;
}
