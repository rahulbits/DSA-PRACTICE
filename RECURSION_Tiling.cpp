#include<bits/stdc++.h>
using namespace std;
int tiling(int n){
	if(n<=3)
	return 1;
	
	int cnt = tiling(n-1) + tiling(n-4);
	return cnt;
}
int main(){
int n; cin>>n;
cout<<tiling(n)<<endl;

return 0;
}

