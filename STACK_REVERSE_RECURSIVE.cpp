#include<bits/stdc++.h>
using namespace std;
void insert_first(stack<int> &s , int n){
if(s.empty()){
	s.push(n);
	return;
}
int data = s.top();
s.pop();
insert_first(s,n);
s.push(data);
}

void rec_reverse(stack<int> &s){
 if(s.empty()){
 	return;
 }
 int x = s.top();
 s.pop();
 rec_reverse(s);
 insert_first(s,x); 
}
int main(){

stack<int> s1;

for(int i =0;i<=5;i++){
	s1.push(i);
}
rec_reverse(s1);
while(!s1.empty())
{
	cout<<s1.top()<<" "; 
   s1.pop();
 }
cout<<endl;
return 0;
}

