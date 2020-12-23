#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	
	cin>>str;
	
	sort(str.begin(),str.end());
   	int  count = 0;
	char ch;
	for(int i = 0;i< str.length(); i++ )
	{ 
	 if(str[i] - '0' == 0)
	 {	
	   count++;
	 } 	
	}
   if(count >= 1)
   {
   	ch = str[count];
	str[0] = ch;
	str[count] = '0'; 
   }
   cout<<str<<endl;
	return 0;
}
