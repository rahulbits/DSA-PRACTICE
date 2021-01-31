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
bool palindrome(node *head, int k ){
	if(head == NULL or head->next == NULL )
	return true;
	int n = k/2;
	node* curr = head;
	node *prev = NULL;
	node* head1 = NULL;
	node*head2 = head;
   while(n--)
   {
   	head1 = curr;
   	curr = curr->next;
   }
   curr = head;
   if(k%2 == 0)
   head2 = head1->next;
   else
   head2 = head1->next->next;
  
   head1 -> next = NULL;
//   cout<<"head2---"<<head2->data<<endl;
//   cout<<"head1----"<<head1->data<<endl;
   node *temp;
	while(curr!=NULL){
		temp = curr->next;
    	curr->next = prev;
    	prev = curr;
		curr = temp; 
	}
	///cout<<prev->data<<endl;
	while(prev!=NULL or head2 != NULL)
	{
		if(head2->data != prev->data){
			return false;
		}
	prev = prev->next;
	head2 = head2->next;
	}
	return true;
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
//print(head);
bool r = palindrome(head,n);
if(r==true)
cout<<"true"<<endl;
else
cout<<"false"<<endl;
cout<<endl;

return 0;
}
