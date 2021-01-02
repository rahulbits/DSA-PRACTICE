
#include<bits/stdc++.h>

using namespace std;

void spiral_print(int arr[][100] ,int n,int m)
{
	int start_col = 0;
  	int end_col = m-1;
  	int start_row = 0;
  	int end_row = n-1;
  	while(start_row <= end_row and start_col <= end_col )
  	{
  	  	for(int i = start_col;i<=end_col;i++)
  	  	{
  	  		cout<<arr[start_row][i]<<" ";
		}
		start_row++;
		for(int i = start_row;i<=end_row;i++ )
		{
			cout<<arr[i][end_col]<<" ";
		}
		end_col--;
		if(end_row>start_row){
		for(int i = end_col; i >=start_col ; i--)
		{
			cout<<arr[end_row][i]<<" ";
		}
		end_row--;}
		if(end_col> start_col){
		
		for(int i = end_row;i>=start_row;i--)
		{
			cout<<arr[i][start_col]<<" ";
		}
		start_col++;
		}
	}
}
int main(){
	int row; int col;
	cin>>row;
	cin>>col;
	int val = 1;
	int arr[100][100] = {0};
	for(int i = 0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		arr[i][j] = val; val++; cout<<arr[i][j]<<" ";
	} cout<<endl;
	}
	spiral_print(arr,row,col);
	return 0;
}
