#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,col; cin>>row>>col; int arr[row][col];
	int no; cin>>no;
	for(int i =0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	bool flag = false;
	int start = 0;int end = col-1;
	while(start < row and end >= 0 ){
		if(arr[start][end] == no){
			flag = true;
			break;
		}
		else if(arr[start][end]>no)
		{
			end--;
		}
		else{
			start++;
		}
	}
	if(flag == true){
		cout<<"Number Found at Index ("<<start<<","<<end<<")"<<endl;
	}
	else
	cout<<"Number Not Found"<<endl;
}
