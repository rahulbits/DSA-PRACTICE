# include<bits/stdc++.h>
using namespace std;

// Only the function Implementation Of Finding Immediate Smaller Than X in an array  with min difference 1 (Geeks for Geeks)

int immediateSmaller(int arr[], int n, int x)
{
    // your code here
    int s =INT_MAX,no=0,temp=0,flag = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]< x)
        {   flag = 1;
            temp = ( x - arr[i]);
            s = min(temp,s);
            if(s == temp)
            {
                no = arr[i];
            }
        }
    }
    if(flag)
    return no ;
    else 
    return -1;
}

int main(){
	int n = 5;
	int arr[] = {4 ,67 ,13 ,12, 15};
	int x = 16;
	cout<<immediateSmaller(arr,n,x)<<endl;
}
