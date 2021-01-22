#include<bits/stdc++.h>
using namespace std;
void generate_subset(char *inp,char *out,int i,int j )
{
    if(inp[i] =='\0')
    {
    out[j] = '\0';
    cout<<out<<endl;
    return;
    }
   out[j] = inp[i];
   generate_subset(inp,out,i+1,j+1);

   generate_subset(inp,out,i+1,j);;

}

int main(){
    char inp[] = "abc";
    char out[10];
    generate_subset(inp,out,0,0);
    return 0;
}
