#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	long long data;
	node *next;
	node(long long d){
		data = d;
		next = NULL;
	}
};
//////////////////
void insertAtTail(node* head,long long d){

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
void insertAtHead(node*&head , long long d)
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
		//cout<<"Empty Node"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head-> next;
	}
}
///////////////////////
node * merge(node*head1,node*head2){
	if(head1 == NULL)
	return head2;
	if(head2 == NULL)
	return head1;
	node * c;
	if(head1->data < head2->data)
	{
		c = head1;
		c->next = merge(head1->next,head2);
	}
	else{
	c = head2;
	c->next = merge(head1,head2->next);
	}
	return c;
}
///////
int main(){
	int t; cin>>t;
	while(t--){
long long n; cin>>n;
node *head1 = NULL;
node *head2 = NULL;
for(int i=0;i<n;i++){
		long long v;cin>>v;
	if(head1 == NULL)
	 insertAtHead(head1,v);
	else
	insertAtTail(head1,v);
}
long long m ; cin>>m;
for(int i=0;i<m;i++){
		long long v;cin>>v;
	if(head2 == NULL)
	 insertAtHead(head2,v);
	else
	insertAtTail(head2,v);
}
node*head = merge(head1,head2);
print(head);

}
return 0;
}
