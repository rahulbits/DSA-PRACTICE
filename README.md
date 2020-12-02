# DSA-PRACTICE

Generating Sub Array without recursion and not very efficient

code:


#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	int N; 
	cin>>N;
    int arr[N];
	for(int i=0;i<N;i++)
	cin>>arr[i];
	for(int i = 0; i<N ;i++)
	{
		for (int j=i;j<N;j++)
		{
			for(int k=i;k<=j;k++)
			cout<<arr[k]<<",";
		cout<<endl;
		}
		
	}
	return 0;
}
