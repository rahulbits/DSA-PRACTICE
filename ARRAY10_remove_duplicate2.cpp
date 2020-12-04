#include <bits/stdc++.h>
using namespace std;

int main(){

int n;

cin>>n;

int arr[n];

for(int i=0;i<n;i++)cin>>arr[i];
int j=0;
int count = 1;
if(n < 3)
    return n;
else{
for(int i=0;i<n-1;i++)
{
 if(arr[i] == arr[i+1] )
 {
	count++;
 }	
 else
 { 
	if( count == 1)
	{
		arr[j] = arr[i];
		j++;
		count = 1;
	}
	else if(count >= 2 )
	{
		arr[j] = arr[i];
		j++;
		arr[j] = arr[i];
		j++;
		count = 1;
	}
  }
}
if(count >= 1 && arr[n-1] == arr[n-2])
{
	arr[j] = arr[n-1];
	j++;
	arr[j] = arr[n-1];
	j++;
}
else
{
	arr[j] = arr[n-1];
	j++;
}

cout<<j<<endl;
for(int i=0;i<j;i++)
cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
}
