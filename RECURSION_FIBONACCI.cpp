// 0 1 1 2 3 5
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
	if(n==0 )
	return 0;	
	else if(n == 1)
	return 1;
	else 
	return fibonacci(n-1) + fibonacci(n-2);
	
}
int main(){
int n ; cin>>n;
cout<<fibonacci(n)<<endl;

return 0;
}

