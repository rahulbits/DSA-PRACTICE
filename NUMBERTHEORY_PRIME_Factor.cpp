#include<bits/stdc++.h>
using namespace std;
const int M = 1000;
int P[M+1] = {0} ;
vector<int> primes;

//  Calculating Vactor Of Primes upto a Range/////////////////////////
void prime_sieve(){
	for(int i =3;i<= M;i+=2){
		P[i] = 1;
	}
	primes.push_back(2);
	for(int i = 3 ; i<= M;i++){
		if(P[i] == 1){
			primes.push_back(i);
			for( int j=i*i; j<= M ;j +=i ){
				P[j] = 0 ;
			}
		}
	}
}
///////// Returns Vector Of Prime Factors /////////////////
vector<int> factorize(int no, vector<int> &prime){
	vector<int> factors;
	factors.clear();
	
	
	for(auto x:prime){
		
		if(no % x == 0 ){
			factors.push_back(x);
			while(no % x == 0)
			 {
			 no = no/x;
		}
		}
	}
	
	
	if(no != 1 )
	factors.push_back(no);
	return factors;
}
// factors along with their count also the last part returns the no of divisors  ----------------- 
int factorize_count(int no, vector<int> &prime){
	vector<pair<int, int>> factors ;
	factors.clear();
	
	int i = 0;
	for(auto x:prime){
		
		if(no % x == 0){
			factors.push_back(make_pair(x,0));
			while(no % x == 0)
			 {
			 factors[i].second++;
			 no = no/x;
		}
		i++;
		}
			
	}
	
	
	if(no != 1 )
	{
	factors.push_back(make_pair(no,1));
	}
//	return factors;
/* Returning Total No. of divisors */
 
int no_of_divisors = 1;  
for (auto x:factors){
no_of_divisors = no_of_divisors*(x.second+1);
}
return no_of_divisors;

}


///////////////////////

int main(){
 prime_sieve();
 
 int no;cin>>no;
// vector<pair<int,int>> m = factorize_count(no, primes);
 int n = factorize_count(no, primes);
 cout<<"no = "<<n<<endl;
 
 
// for(auto x:m){
// 	cout<<"- Count Of "<<x.first<<" = "<<x.second<<endl;
// }
return 0;
}

