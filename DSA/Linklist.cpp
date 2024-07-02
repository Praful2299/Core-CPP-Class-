#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

node * createhead(int d){
	node *n=new node;    // heap memory mein node type ka pointer banane ke liye 
	n->data=d;
	n->next=NULL;
	return n;
}

node * insert(node *h,int d){
	node *temp=h;
	while(temp->next!=NULL)
		temp=temp->next;
		node * n= new node;
		n->data=d;
		n->next=NULL;
		temp->next=n;
		return h;
}

void traverse(node *h){
	node *t=h;
	while(t->next!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	} 
	cout<<t->data;
}


int main(){
	node *head=createhead(90);
	head=insert(head,94);
	head=insert(head,95);
	head=insert(head,96);
	head=insert(head,98);
	traverse(head);
	
}
