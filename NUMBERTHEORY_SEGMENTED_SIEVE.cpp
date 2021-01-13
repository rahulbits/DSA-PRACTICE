#include<bits/stdc++.h>
using namespace std;
const int  MAX = 100000 ;  // cons int 100000
vector <int> primes;   // Global Variable
int p[MAX] = {0} ; // using 0 for Prime and 1 if not Prime

// /////////////////////////////////           Finding Prime Upto MAX
void sieve(){
	for(int i=2;i<= MAX;i++)
	{
		if(p[i] == 0){
	     primes.push_back(i);
		 	
		for(int j= i ; j <=  MAX ; j += i){
			p[j] = 1;
		}
	}
	} 
}

////////////////////////////////////////////////////////////////////

int main(){
	sieve();
	
	int t;cin>>t;
	
	while(t--){
      int n,m; 
	  cin>>m>>n;
      
	  bool segment[n-m+1];
      
	  for(int i=0 ; i < n-m+1; i++){
      	segment[i] = 0;
	  }
	  
	  for(auto x:primes){
	  	if(x*x > n)
	  	{
	  	 break;
		}
	  	
	  	int start = (m / x) * x ;
	  	
		if(x >= m and x <= n){
	  		start = x * 2 ;
		  }
	  	for(int i = start ; i<=n ; i += x){
	  		segment[i - m] = 1;   // Not Prime
		  }
	  }
	  
	  for(int i = m ;i <= n ; i++){
	  	if( (segment[i - m] == 0) and (i != 1 ) ){
	  		cout<<i<< endl;
		  }		  
	    }	  
	  cout <<endl;
	}
	return 0;
}
