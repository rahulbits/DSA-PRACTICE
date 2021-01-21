#include<bits/stdc++.h>
using namespace std;
int evaluate_Power(int a, int n)
{
	if (n==0)
	return 1;
	
	return (a*evaluate_Power(a,n-1));
}
int fast_power(int a, int n){
	if(n==0)
	return 1;
	
	int smaller_ans = fast_power(a,n/2);
	smaller_ans *= smaller_ans;
	if(n&1){
		smaller_ans*=a;
	}
	return smaller_ans;
}

int main(){

int a; cin>>a;
int x;cin>>x;
cout<<evaluate_Power(a,x)<<endl;
cout<<fast_power(a,x);//<<endl;
return 0;
}

