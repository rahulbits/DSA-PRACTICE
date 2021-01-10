#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		int tc =0 ;
		for(int i =a;i<=b;i++){
			int no = i;
			int count =0;
			while(no > 0){
				int lc = no&1 ;
				count += lc;
				no = no>>1;
			}
			
			tc  = tc + count;
		}
		cout<<tc<<endl;
	}
	return 0;
}
