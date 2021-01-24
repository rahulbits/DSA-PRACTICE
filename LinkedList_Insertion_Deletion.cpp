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
//Insert At Head we are accepting here the value of head as reference so any change in head will be reflected back
// in main head pointer
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
// Insert At tail we are not accepting here the value of head as reference so any change in head will not be reflected back
// in main head pointer
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
// Insert in middle
void insertMiddle(node *head,int d, int pos) /* pos -> position where to insert if entered position is greater than no of element it will
insert at end*/
{
while(pos-- && head->next !=NULL){
	head = head->next;
}
node *n = new node(d);
n->next = head->next;
head->next = n;
} 
// Delete Node similarly we can Write For other Positions ___(delete head ) this will release the memory
void deleteHead(node*&head){
	if(head == NULL)
	cout<<"empty Node"<<endl;
	node*temp = head->next;
	delete head;
	head = temp;
 return;
}
/* Searching An Element In the Linked List Here Binary Search has no any meaning because we will have to iterate over the whole linked
list to get the size of linked list and it will become order of N So binary search Of no Use*/
bool search(node*head, int key){
	if(head == NULL)
	return false;
	else
	{
		while(head!=NULL){
			if(head -> data == key)
			return true;
		head = head-> next ;
		}
	}
	return false;
}
// Recursive Search
bool rec_search(node*head, int key){
if(head == NULL)
return false;
if(head->data==key)
return true;
rec_search(head->next,key);
}
///
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
node *head = NULL;
insertAtHead(head,3);
insertAtHead(head,2);
insertAtHead(head,1);
insertAtHead(head,0);
insertAtTail(head,4);
insertAtTail(head,1098);
print(head);
cout<<"\n";
deleteHead(head);
insertAtHead(head,9087);
insertAtTail(head,987624);
print(head);
cout<<endl;
int key; cin>>key;
if(rec_search(head,key)){
	cout<<"found"<<endl;
}
else
cout<<"Not Found"<<endl;
//int pos;cin>>pos;// pos >0 and should be less tha max element;
//insertMiddle(head,198,pos-1);
//print(head);
return 0;
}

