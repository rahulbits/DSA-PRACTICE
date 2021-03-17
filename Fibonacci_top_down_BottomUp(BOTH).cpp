#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n,int dp[]){
	if(n==0||n==1)
	return n;
	if(dp[n]!=0)
	return dp[n];
	int ans = fibonacci(n-1,dp) + fibonacci(n-2,dp);
	return dp[n] = ans;
}
// BottomUp Approach // We can implement this using two variables suppose a = 0 and b =1 and c = a+b
// again update a = b and b  =c for next step c will be the final answer; 
int fib(int n,int dp[]){
dp[0] = 0 ; dp[1] = 1;
for(int i =2;i<=n;i++){
	dp[i] = dp[i-1] + dp[i-2];
}	
return dp[n];
}
int main(){
int n ; cin>>n;
int dp[10000] = {0};
int dp1[10000] = {0};

cout<<fibonacci(n,dp)<<endl;
cout<<fib(n,dp1)<<endl;
return 0;
}

