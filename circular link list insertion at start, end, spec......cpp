#include<iostream>
using namespace std;
struct node
{
   int data;
   node *next;
};

node *last = NULL;
void create_node(int num)
{
    node *temp=new node;
    temp->data = num;
    if (last == NULL)
    {
        last = temp;
        temp->next = last;   
    }
    else
    {
        temp->next = last->next; 
        last->next = temp;
        last = temp;
    }

}

//Insertion of element at beginning 

void insert_begin(int value)
{
	if (last == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    node *temp=new node;
    temp->data = value;
    temp->next = last->next;
    last->next = temp;
}

//Insertion of element at a particular place

void insert_after(int val, int loc)
{
	 if (last == NULL)
    {
        cout<<"First Create the list."<<endl;
        return;
    }
    node *temp, *s;
    s = last->next;
    for (int i = 1;i<loc-1;i++)
    {
        s = s->next;
        if (s == last->next)
        {
            cout<<"There are less than ";
            cout<<loc<<" in the list"<<endl;
            return;
        }
    }
    temp = new node;
    temp->next = s->next;
    temp->data = val;
    s->next = temp;
    /*Element inserted at the end*/
    if (s == last)
    { 
        last=temp;
    }

}

//Display Circular Link List 

void display()
{
	node *s;
    if (last == NULL)
    {
        cout<<"List is empty, nothing to display"<<endl;
        return;
    }
    s = last->next;
    cout<<"Circular Link List: "<<endl;
    while (s != last)
    {
        cout<<s->data<<"->";
        s = s->next;
    }
    cout<<s->data<<endl;
}

int main()
{
	
	int n,v,l,x,no;
cout<<"How many nodes you want to add"<<endl;
cin>>no;
for(int i=1; i<=no; i++){
	cout<<"Enter data value for node # "<<i <<endl;
	cin>>n;
	create_node(n);
}
	cout<<"The Element list "<<endl;
	display();

cout<<"enter the data value to insert at begin:"<<endl;
cin>>x;
insert_begin(x);
cout<<"After insertion at begin "<<endl;
	display();

cout<<"enter the data value to insert at spec. loc."<<endl;
cin>>v;
cout<<"enter the location where you want to add node"<<endl;
cin>>l;
insert_after(v,l);
cout<<"After insertion at specific "<<endl;
	display();
	
return 0; 
}

