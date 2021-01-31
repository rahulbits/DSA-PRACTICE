#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *next;
     node(int d){
        data = d;
        next = NULL;
	 }
};

//////////////////
void insertAtTail(node* head,int d){

	while(head -> next!= NULL){
		head = head->next;
	}
	if(head -> next == NULL)
	{
		node *n = new node(d);
		head -> next = n;
		 
	}
}
////////////////
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
///////////////////
void print(node* head){
	if(head == NULL){
		cout<<"Empty Node"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head-> next;
	}
}
///////////////////////

/////////////////////////////
node* ireverse(node*head, int n,int m){
node * start = NULL;
node*st = NULL;
node *end = NULL;
node*headc = head;
 int d = n;
 while(d--)
 {    
    start =  headc;
	headc = headc->next;
 } 
headc = head;
int k = n-1;
while(k--)
{
	st = headc;
	headc = headc->next;
}
headc = head;
int cm = m;
while(cm--){
	end = headc;
	headc = headc->next;
}
node*curr = start;
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
    st ->next = prev;
  }
  return head;
}
///////////////////////
int main(){
int n; cin>>n;
int k;cin>>k;
node *head = NULL;
for(int i=0;i<n;i++){
	
		int v;cin>>v;
	if(head == NULL)
	insertAtHead(head,v);
	else
	insertAtTail(head,v);
	}
	int m=1;
	while(m <=n){
          //cout<<"run while"<<endl;
		node *head1 = ireverse(head,m,m+k-1);
		head = head1;
		m = m+k;
	}
print(head);
return 0;
}

