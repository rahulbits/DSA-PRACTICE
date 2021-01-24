#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node*next ;
		// Constructor as soon as the object is created, It will initialize the data memebers
		node(int d){ 
			data = d;
			next = NULL;
		}
};
/////////////////////////////////////// here we can use void node(node *&start)  this will let us reduce one start declaration//
node* input(){
	cout<<"no of data to be entered"<<endl;
	int n; cin>>n;
	node *head;
	node *start;
	int data;
	for(int i=0;i<n;i++){
      cin>>data;
	  node *n = new node(data); 
	  if(i == 0){
      start = n;
	  head = n;	
	}
	   else
	   {
	   head->next = n;
       head = n;
}
}
return start;
}
////////////////////////////////////
void print(node* head){
	if(head == NULL){
		cout<<"Empty Node"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head = head-> next;
	}
}
int main(){
node* head = input();
print(head);
return 0;
}

