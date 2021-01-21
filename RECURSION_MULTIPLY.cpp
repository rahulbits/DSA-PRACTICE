// Multiply without using * operator 

#include<bits/stdc++.h>
using namespace std;
int multiply(int n1, int n2){
  if( n2 == 0)
  return 0;
  
  return n1+multiply(n1,n2-1);	
}
int main(){
int a,b; cin>>a>>b;
cout<<multiply(a,b)<<"\n";
return 0;
}

