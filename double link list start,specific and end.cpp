#include<iostream>
using namespace std;
int no;
struct node {
	int data;
	node *next;
	node *prev;
};
node *head=NULL;
node *tail=NULL;
void insert(int x){
	node *temp= new node;
	temp->data=x;
	temp->prev=	tail;
	temp->next=NULL;

	if(head==NULL){
	head=temp;
	tail=temp;
	}
	else 
	{
	tail->next=temp;
	tail=temp;
	}
}
/*void insertAtStart(int x){
	node *temp= new node;
	temp->data=x;
	temp->prev=	NULL;
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void insertAtEnd(int x){
	node *temp= new node;
	temp->data=x;
	temp->prev=	tail;
	temp->next=NULL;
	tail->next=temp;
	tail=tail->next;
}*/
void insertAtSpec(int x, int loc){
	if(loc==1)
	{
	node *temp= new node;
	temp->data=x;
	temp->prev=	NULL;
	head->prev=temp;
	temp->next=head;
	head=temp;	
	}
	else if(loc==no+1)
	{
	node *temp= new node;
	temp->data=x;
	temp->prev=	tail;
	temp->next=NULL;
	tail->next=temp;
	tail=tail->next;
	}
	else
	{
	node *ptr= new node;
	ptr=head;
	for(int i=1; i<loc-1 && ptr!=NULL; i++ ){
		ptr=ptr->next;
	}
	node *temp= new node;
	temp->data=x;
	temp->next=ptr->next;
	ptr->next->prev=temp;
	temp->prev=	ptr;
	ptr->next=temp;
}

}
void display(){
	node *ptr= new node;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->data<<"\t";
		ptr=ptr->next;
	}
	cout<<endl;

}
void display_r(){
	node *ptr= new node;
	ptr=tail;
	while(ptr!=NULL){
		cout<<ptr->data<<"\t";
		ptr=ptr->prev;
	}
	cout<<endl;
}
int main(){
	//int no,n,v,l;
	int n,v,l;
cout<<"How many numbers you want to add"<<endl;
cin>>no;
for(int i=1; i<=no; i++){
	cout<<"Enter data value for node # "<<i <<endl;
	cin>>n;
	insert(n);
}
	cout<<"The Element list "<<endl;
	display();

/*cout<<"After insertion at start "<<endl;
insertAtStart(1);
	display();
cout<<"After insertion at END "<<endl;
insertAtEnd(9);
	display();*/
cout<<"enter the data value you want to enter"<<endl;
cin>>v;
cout<<"enter the location where you want to add node"<<endl;
cin>>l;
cout<<"After insertion at specific "<<endl;
insertAtSpec(v,l);
	display();
cout<<"here is the reverse of data elements"<<endl;
	display_r();
//cout<<"4th node"<<head->data->next->next->next->prev->data<<endl;

	
	return 0;
}
