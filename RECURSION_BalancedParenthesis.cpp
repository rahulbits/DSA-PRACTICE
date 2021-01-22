#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(int n,char *out,int open,int close,int idx)
{
    if(idx == 2*n){
        out[idx] = '\0';
       cout<<out<<endl;
       return;
    }
    if(open < n){
      out[idx] = '(';
      generateParenthesis(n,out,open+1,close,idx+1);
    }
    if(close < open)
	{
        out[idx] = ')' ;
        generateParenthesis(n,out,open,close+1,idx+1);
    }
    return;
}

int main()
{
    int n ;
    cin>>n;
    char out[1000];
    int idx =0;
    generateParenthesis(n,out,0,0,idx);
}
