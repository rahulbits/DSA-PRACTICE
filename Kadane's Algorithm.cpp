// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max1 = INT_MIN , max2 = 0; //max2 = max_ending_here max1 = max_so far
    for(int i=0;i<n;i++){
    max2 = max2 + arr[i];
    if(max1 <= max2)
    {
        max1 = max2;
    }
    if(max2<0)
    {
        max2 = 0 ;
    }
    }
    return max1;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
