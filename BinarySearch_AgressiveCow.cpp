    #include<bits/stdc++.h>
    using namespace std;
    
	bool cows(int arr[] , int cowcount, int n , int mid ){
		
        int c = 1,last_cow = arr[0];
        for(int i =1; i<n; i++){
            if(arr[i] - last_cow >= mid)
            {   
            c++;
            last_cow = arr[i];} 
            if(c == cowcount)
                return true;
        }
        return false;
    }
    int main(){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        
        int m ;
        cin>>m;
		
		sort(arr,arr+n);
		
        int start = 0;
        int mid;
        int ans = 0;
        int end = arr[n-1] - arr[0] ;
        
		while(start <= end)
        {
         mid = (start+end)/2;
         bool rakhpaye = cows(arr,m,n,mid);
            if( rakhpaye ){
                ans = mid;
               start = mid+1;
             }
            else
             end = mid-1;
        }
      cout<<ans<<endl; return 0;
    }
