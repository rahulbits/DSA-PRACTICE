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
////////////////////
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
////////////////
node* findmid(node* head){
	if(head==NULL or head->next == NULL)
	return head;
	
	node* fast = head;
	node*slow = head;
	while( fast!= NULL  and fast->next != NULL ){
		fast = fast->next->next;
		slow = slow->next;		
	}
	return slow;
}
///////////////////////////
int main(){
node *head = NULL;
//insertAtHead(head,4);
insertAtHead(head,4);
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
insertAtHead(head,0);
print(head);
cout<<"\n";
node *mid = findmid(head);
cout<<mid->data<<endl;
return 0;
}
