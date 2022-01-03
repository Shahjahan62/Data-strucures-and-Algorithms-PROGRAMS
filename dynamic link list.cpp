#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class myclass
{
	private:
		node *head, *tail;
	public:
	myclass()
	{
		head=NULL;
		tail=NULL;
		}
	add(int n)
	{
		node *temp=new node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}
		
			}		
		
		void show()
		{
			node *ptr;
			for(ptr=head; ptr!=NULL; ptr=ptr->next)
			{
				cout<<ptr->data<<endl;
			}
		}
		
};

int main()
{
	myclass obj;
	obj.add(5);
	obj.add(9);
	obj.add(3);
	obj.add(8);
	obj.add(7);
	obj.add(2);
	obj.add(1);
	obj.show();
	
	
	
	
	
	return 0;
}
