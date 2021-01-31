// Without Recursion
#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int> &s1 , stack<int> &s2){
	s2.push(s1.top());
	s1.pop();
}
void reverese(stack<int> &s1 , stack<int> &s2,int n){
    for(int i =0;i<n;i++){
	int x = s1.top();
	s1.pop();
	for(int j =0 ;j<n-i-1;j++)
	{
	  transfer(s1,s2);
	}
	s1.push(x);
	for(int j =0 ;j<n-i-1;j++)
	 {
	 transfer(s2,s1);
    }
}}

int main(){
stack<int> s1,s2;

for(int i =0;i<=5;i++){
	s1.push(i);
}
reverese(s1,s2,6);
for(int i =0;i<=5;i++){
	cout<<s1.top()<<" ";
	s1.pop();
}
cout<<endl;
return 0;
}

