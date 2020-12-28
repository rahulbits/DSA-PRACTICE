/*    submatrix sum brute force approach O(N^6)    */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int r,c;cin>>r>>c;
	 int arr[r][c];
	for(int i = 0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
	         cin>>arr[i][j];
	}}
	int sum=0;
	for(int i = 0;i<r;i++)
	{
		for(int j=0; j<c; j++)
		{
			for(int bi = i; bi < r; bi++){
				for(int bj = j; bj <  c; bj++){
					
					for(int si=i;si<=bi;si++){
						
						for(int sj=j;sj<=bj;sj++){
							sum+=arr[si][sj];
						}
					}
				}
			}
			
       } }
       cout<<sum<<endl;
	return 0;	
}
