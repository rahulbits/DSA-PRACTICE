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
/////////////////////////////////////////
void insertAtHead(node*&head , int d)
{
	if(head == NULL){
		head  = new node(d);
		return ;
	}
	node *n = new node(d);
	n->next = head;
	head = n;
}
/////////////////////////////////////////
void print(node* head){
	cout<<"entered"<<endl;
	if(head == NULL){
		cout<<"Empty Node"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" -> ";
		head = head-> next;
	}
}
//////////////////////////////////////
//void reverse(node*&head){
//	node *curr = head ;
//	node*prev = NULL;
//	node*temp;
//		while(curr != NULL){
//	    temp = curr->next;
//	    curr->next = prev;
//		prev =  curr;
//		curr = temp;
//	}
//  head = prev;	
//}
/////////////////////////////////////////
node* ireverse(node*head, int n,int m){

node * start = NULL;
node*st = NULL;
node *end = NULL;
node*headc = head;
 int d = n;
 ////take to N
 while(d--)
 {    
    start =  headc;
	headc = headc->next;
 } 
 //////
headc = head;
int k = n-1;
////take to N-1
while(k--)
{
	st = headc;
	headc = headc->next;
}
////////////
headc = head;
///////////Take to M
int cm = m;
while(cm--){
	end = headc;
	headc = headc->next;
}
//////////////
node*curr = start;
//node*newend = end;
//node *curr = head ;
node*prev = NULL;
node*temp;
while(n<=m){
 temp = curr->next;
 curr->next = prev;
 prev =  curr;
 curr = temp;	
 n++;
}
 start->next = curr;
 if(st == NULL){
    head = prev; 	
    }   
 else
  {
  	cout<<"entered else"<<endl;
    st ->next = prev;
  }
  return head;
}
//////////////////////////////////////////////////////
int main(){
node * head = NULL;
insertAtHead(head,5);
insertAtHead(head,4);
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
print(head);
cout<<endl;
//reverse(head);
//print(head);
int n ,m; cin>>n>>m;

node* k = ireverse(head,n,m);
print(k);
return 0;
}

