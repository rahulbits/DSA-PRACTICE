// Square root of an integer
//Given an integer x, find it’s square root. If x is not a perfect square, then return floor(√x).
// Using Binary Search Algo

# include<bits/stdc++.h>
using namespace std;
int  sqrt(int x)
{
	int mid = 0 , end = x , l = 1, ans = 0;
	if(x==0||x==1)
	return x;
	else{
		while(l<=end)
		{
			mid = (l+end)/2;
			if(mid*mid == x)
			return mid;
			else if(mid*mid < x)
			{
			l = mid+1;
			ans = mid; 
			}
			else
			end = mid-1;
		}
		return ans;
	      }
 }
int main(){
	int x ; cin>>x;
	cout<<sqrt(x)<<endl;	
}
