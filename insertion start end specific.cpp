#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class myclass{
	private:
		node *head, *tail;
	public:
		myclass(){
			head=NULL;
			tail=NULL;
		}
		void add(int n){
			node *temp= new node;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL){
				head=temp;
				tail=temp;
			}
			else {
				tail->next=temp;
				tail=tail->next;
			}
		}
		void insert(int n, int pos){
			if(pos==1){
				node *temp= new node;
				temp->data=n;
				temp->next=head;
				head=temp;
			}
		//	else if(pos==5){
				
		//	}
			else {
			node *temp = new node;
			temp=head;
			for(int i=1; i<pos-1 && temp!=NULL; i++ ){
				temp=temp->next;
			}	
			node *ptr= new node;
			ptr->data=n;
			ptr->next= temp->next;
			temp->next=ptr;
			}
		}
		void show(){
			node *ptr= new node;
			ptr=head;
			while(ptr!=NULL){
				cout<<ptr->data<<endl;
				ptr=ptr->next;
			}
		}
};
int main(){
myclass obj;
int no,c,p;
cout<<"how many nodes you want to enter"<<endl;
cin>>no;
for(int i=1; i<=no; i++){
	cout<<"Enter value of the node # = "<<i<<endl;
	cin>>c;
	obj.add(c);
}
cout<<"The nodes in the link list are follwoing"<<endl;
obj.show();
cout<<"Add the value of the node "<<endl;
cin>>c;
cout<<"Add the position of the node "<<endl;
cin>>p;
obj.insert(c,p);
cout<<"After insertion of the element"<<endl;
obj.show();
return 0;
}
