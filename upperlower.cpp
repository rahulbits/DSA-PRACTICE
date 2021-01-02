#include<iostream>
using namespace std;
int main() {
	char ch,out;
	cin>>ch;
	if(ch >= 'a' && ch <= 'z')
	{
		out = ch-32 ;
		cout<<out<<endl;
	}
	else if(ch >= 'A' && ch <= 'Z'){
	out = ch+32;
	cout<<out<<endl;
	}else
	cout<<"Invalid"<<endl;
	return 0;
}
