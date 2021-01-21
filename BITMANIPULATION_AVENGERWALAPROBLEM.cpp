/*After the release of Avengers, Ironman and Thor got into a fight and Ironman challenged 
Thor to find out the number of numbers between 1 and n 
which are divisible by any of the prime numbers less than 20.
Ironman being great at maths quickly answered the question but then Thor asked him to write a program for it. 
Ironman however found it quite difficult as he did not wanted to write so many lines of code. 
he knows that you are smart and can code this up easily. Can you do it?*/

#include<bits/stdc++.h>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;
int deno(int arr[],int n){
	int denom = 1,j=0;
	while(n>0){
		if(n&1){
			denom = denom*arr[j];
		}
		j++;
		n = n>>1;
	}
	return denom;
}

int main(){
	int t;cin>>t;
	// Make an Array of Primes below 20
	int prime[] = {2,3,5,7,11,13,17,19};
	while(t--){
	int ans = 0;
	int n;cin>>n;
	
	int subset = (1<<8) -1;
	for(int i =1;i<= subset ;i++){
	// counting set Bits 
	 	int setbits = 0,j = i ;
         int denom = 1;	
	 	while(j > 0){
	 		if( (j&1) == 1 ){
			 
	 		setbits++;
	 	  }
		 j = j>>1;	
		 }
 // Calculating Denominnator
    
//	for(int m = 0 ; m <=7;m++ )
//	{
//		if(i&(1<<m))
//	{
//		denom = denom*prime[m];
//	}
//	}
denom = deno(prime,i);
//CALCULATING ANSWER
	if(setbits&1)
	ans += n/denom	;
	else
	ans -= n/denom;
}
//	 
	cout<<ans<<endl;
}
	return 0;
}
