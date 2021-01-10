#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[64] = {0};
	
	for(int i=0;i<n;i++){
		int no;cin>>no;
		int j = 0;
		while(no>0){
			int s = no&1;
			arr[j] += s;
			j++;
			no = no>>1 ;
		}
	}
	for(int i =0 ;i<64;i++ )
	{
		arr[i] = arr[i]%3;
	}
	int ans = 0, mf = 1; // mf = multiplicatio factor
	for(int i=0;i<64;i++){
		ans += mf*arr[i];
		mf = mf*2;
	}
	cout<<ans<<endl;
return 0;	
}
