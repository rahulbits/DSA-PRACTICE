#include<bits/stdc++.h>
using namespace std;
void span_stock(int prices[],int n, int span[]){
	stack<int> s; // Save indices of the elemnt
	s.push(0);
	span[0] = 1;
	for(int i=1;i<n;i++){
		int current_price = prices[i];
		while(!s.empty() and prices[s.top()] <=current_price){
			s.pop();
		}
		if(!s.empty())
		{
			int prev_highest = s.top();
			span[i] = i - prev_highest;
		}
		else
		span[i] = i+1;
	s.push(i);
	}
}


int main(){
int prices[] = {100,80,60,70,60,75,85};
int n = sizeof(prices)/sizeof(prices[0]);
int span[1000] = {0};
span_stock(prices,n,span);
for(int i=0;i<n;i++){
	cout<<span[i]<<" ";
}
cout<<endl;
return 0;
}

