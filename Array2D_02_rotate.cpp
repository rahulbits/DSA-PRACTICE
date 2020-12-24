/* Rotating the matrix clockwise by 90* */
/* For anticlockwise just change the sequence of transpose and reversing of rows */

#include<bits/stdc++.h>
using namespace std;
void display(int arr[][100],int row,int col)
{
	cout<<endl;
	cout<<"  output ---  ";
	cout<<endl;
	cout<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int row,col;
	cin>>row>>col;
	int a[100][100];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[i][j];
		}
	}
	// Transpose of the Matrix
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
	    if(i<j){
	    	swap(a[i][j],a[j][i]);
		}
		}
		}
		//Reverse Each row 
	for(int i = 0;i<row;i++){
		int start = 0; int end = col-1;
		while(start< end){
			swap(a[i][start],a[i][end]);
			start++; end--;
		}
	}
  
  display(a,row,col);

}
