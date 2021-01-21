#include<bits/stdc++.h>
using namespace std;
void print(int n, string str[] ){
	if(n == 0)
	return;

	print(n/10,str);
		int k = n%10;
	cout<<str[k]<<" ";
}
int main(){
string str[5];
str[0] = "zero";
str[1] = "one";
str[2] = "two";
str[3] = "three";
str[4] = "four";

int  n; cin>>n;
print(n,str);

return 0;
}

