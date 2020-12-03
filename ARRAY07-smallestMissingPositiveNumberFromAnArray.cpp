#include<bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) { 
    int i=0;
    sort(arr,arr+n);
for(i;i<n;i++)
{
    if(arr[i] >= 1 )
    break;
}
int k=1;
for(i;i<n;i++)
{
    if(arr[i] == k && arr[i] == arr[i+1] )
    {
        continue;
    }
    else if(arr[i]==k && arr[i] != arr[i+1])
    k++;
    else
    break;
}
 return k;   
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];  
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   
