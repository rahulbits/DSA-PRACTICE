#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int multiply(int size,int res[],int k){
	int carry = 0;
	for(int i=0; i< size; i++){
		
		int product = res[i] * k + carry;
		res[i] = product % 10;
		carry = product / 10;  
	}
	
	while(carry > 0){
		
		res[size] = carry%10;
		
		carry = carry/10;
	    size++;
	}
	
	return size;
}
void fact_large(int n){
	int size = 1;
	int res[MAX];
    res[0] = 1;
	for(int i=2;i<=n;i++)
    	size = multiply(size,res,i);
    for(int i=size-1;i>=0;i-- )
	    cout<<res[i];
	cout<<endl;
}
int main(){
	int n;cin>>n;
	
 fact_large(n);
	
}
