  #include<bits/stdc++.h>
  using namespace std;
  void sum(int arr1[],int arr2[],int n1, int n2){
  	for(int i=0;i< n1/2;i++){
  		swap(arr1[i],arr1[n1-i-1]);
	  }
  	for(int i=0;i< n2/2;i++){
  		swap(arr2[i],arr2[n2-i-1]);
	  }
  	int carry=0; int sum = 0;
  	for(int i=0;i<n2;i++){
  		sum = arr1[i]+arr2[i]+carry;
  		if(sum>9){
  			carry=1;
  			sum = sum%10;
  			arr1[i] = sum;
		  }
		  else
		  {
		  	arr1[i] = sum;
		  	carry =0;
		  }
	  }
	  if(carry)
  	cout<<carry<<", ";
  	for(int i=n1-1;i>=0;i--){
  		cout<<arr1[i]<<", ";
	  }
  	cout<<"END";
  }
  int main(){
   int n1;cin>>n1;
    int arr1[n1];
  	
	for(int i=0;i<n1;i++)
	  cin>>arr1[i];
    
	int n2;cin>>n2;
  	int arr2[n2];
	for(int i=0;i<n2;i++)
	  cin>>arr2[i];
	if(n1>=n2){
		sum(arr1,arr2,n1,n2);
	}
	else
	sum(arr2,arr1,n2,n1);
  }
