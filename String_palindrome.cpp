#include<bits/stdc++.h>
using namespace std;
int palindrome(int arr[], int begin, int end) 
{  
    if (begin >= end) { 
        return 1; 
    } 
    if (arr[begin] == arr[end]) { 
        return palindrome(arr, begin + 1, end - 1); 
    } 
    else { 
        return 0; 
    } 
} 

int main()
{
int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

if(palindrome(arr,0,n-1) == 1)
cout<<"true"<<endl;

else
cout<<"false"<<endl;

return 0;
}
