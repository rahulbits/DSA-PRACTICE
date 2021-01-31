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
node* K_Append(node*head,int k,int n){
	if(k==0)
	return head;
	if(k>n){
		k = k%n;
	}
	node*fast = head;
	node*slow = head;
	while(k-- && fast != NULL){
		fast = fast->next;
	}
	node*prevf = NULL;
	node*prevs = NULL;
	while(fast!=NULL){
		prevf = fast;
		fast = fast->next;
		prevs = slow;
		slow = slow->next;
	}
	if(prevs == NULL )
	return head;
	prevf->next =head;
	prevs->next = NULL;
	head = slow; 
	return head; 
}
///////
int main(){
	
long long n; cin>>n;
node *head = NULL;
for(int i=0;i<n;i++){
		long long v;cin>>v;
	if(head == NULL)
	 insertAtHead(head,v);
	else
	insertAtTail(head,v);
}
int k ; cin>>k;
node*head1 = K_Append(head,k,n);
print(head1);
cout<<endl;

return 0;
}
