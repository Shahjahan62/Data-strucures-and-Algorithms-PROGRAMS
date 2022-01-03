#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;              
};
void show(node *ptr){

	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main(){
	node *head=NULL;
	node *second=NULL;
	node *tail=NULL;

	head= new node;                                                
	second= new node;
	tail=new node;
	head->data=2;
	head->next= second;
	second->data=4;
	second->next=tail;
	tail->data=6;
	tail->next= NULL;
	show(head);
	
	return 0;
}
