#include<bits/stdc++.h>
using namespace std;
int main(){
int no;cin>>no;
int arr[64] = {0};
int j = 0;
while(no>0){
    int lc = no&1;
	arr[j] = lc;
	j++;
	no = no>>1;	
}
int ans = 0,p = 1; 
for(int i=0;i<64;i++)
{
	ans += arr[i]*p;
	p = p*10;
}
cout<<ans<<endl;
return 0;
}
