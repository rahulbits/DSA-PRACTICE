#include<bits/stdc++.h>
using namespace std;

// Function to Extract

string extract_atpos_key(string s,int key)
{
	// Converting string into char* =   ((char*)s.c_str())
  
  	char *ptr = strtok((char*)s.c_str()," ");
	while(key>1){
		ptr = strtok(NULL," ");
	    key--;
	} 
  return (string)ptr;
}
/*                -----------------------          */
// Comparator Functions   - -- -- - -- - 

int convertToInt(string s){
	int p = 1, ans = 0 ;
	for(int i = s.length()-1;i>=0;i--){
		ans+= ((s[i] - '0')*p);
		p = p*10 ;
	}
return ans;
}

bool typenumeric(pair<string,string> s1 ,pair<string,string> s2 ){
	string key1 , key2 ;
	key1 = s1.second;
    key2 = s2.second;
return convertToInt(key1) < convertToInt(key2) ;
}

bool lexotype(pair<string,string> s1 ,pair<string,string> s2 ){
	string key1 , key2 ;
	key1 = s1.second;
    key2 = s2.second;
return key1 < key2  ;
}

//   - ---- --- -- ---- -- - - -- -- - -- - --- - -- -

int main(){
int n;
cin>>n;
cin.get();
string str[100];
// ACCEPTING STRING --------------------- 
for(int i=0;i<n;i++)
{
	/* getline use it to accept a line of Input  */ 
  getline(cin,str[i]);
}
//---------------------------------------------

int key ; cin>>key;

string reversal_type, ordering_type ; cin>>reversal_type>>ordering_type;

/* Extracting token by calling function for every string */

pair<string,string> strpair[100];
for(int i=0;i<n;i++)
{
  	strpair[i].first = str[i];
  	strpair[i].second = extract_atpos_key(str[i],key); 
} 

// --------------------------------------------------------------------
/* Sorting based on key Values */
 
 if(ordering_type == "numeric")
{
	sort(strpair,strpair+n,typenumeric);
}
else
{
	sort(strpair,strpair+n,lexotype);
}

// - - -- - -- -- -- - -- -- - - - -- - --- -- -- -- - -- - -- - - - -- - -
// Reversal Order ------
if(reversal_type=="true")
{
	for(int i = 0 ; i<n/2;i++)
	{
		swap(strpair[i],strpair[n-i-1]);
	}
}
// ----------------------------
// OUTPUT

for(int i=0;i<n;i++)
{
	cout<<strpair[i].first<<endl;
}

return 0;
}
