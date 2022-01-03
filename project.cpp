#include<iostream>
using namespace std;
struct node{
	
	int id;
	 string name;
	 string address;
	long long int phno;
	
	 node *next;
	 
	 node (){
	 id++;
	 }
	
};
class myclass{
	private:
		static long int idno;
		node *head,*tail,*temp;
	public:
		myclass(){
			head=NULL;
			tail=NULL;
		
		}
		bool isemty()
		{
			if (head==NULL && tail==NULL)
			return true;
			else
			return false;
		}
		
		void Enter_data()
		{
			int value;
			string nam,addr;
			long long int phone;
			
			cout<<"ENter the name :";
			cin>>nam;
			cout<<"Enter the ID  :";
			cin>>value;
			cout<<"ENter the Address :";
			cin>>addr;
			cout<<"ENter the phone no.";
			cin>>phone;
			node *ptr=new node();
			ptr->id=value;
			ptr->name=nam;
			ptr->address=addr;
			ptr->phno=phone;
			ptr->next=NULL;
			
			if (head==NULL)
			{
				head=ptr;
				tail=ptr;
			}
			else
			{
				tail->next=ptr;
				tail=ptr;
			}
			
		}
		
//  (------------deleting operation is performed-----------------)
void Delete() {
 
   temp = head;
   if (head == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<head->id<<endl;
     
	  delete(head);
      head = temp;
   } 
   
   
   else {
      cout<<"Element deleted from queue is : "<<head->id<<endl;
      delete(head);
      head = NULL;
      tail = NULL;
   }
}


//(--------------TO dispay the person info----------------------)
void Display() {
   temp = head;
   if ((head == NULL) && (tail == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   int n;
   
  	temp->id=0;

   
   cout<<"\t\t(-----Persons informetion-----)"<<endl;
   while (temp != NULL) {
   	
	idno++;
   	cout<<"------DIPLAYperson data --------";
	
      cout<<"\n 1) \t ID Card No. :"<<idno<<endl;
      cout<<"\n 2) \t Name of The Person:"<<temp->name<<endl;
      cout<<"\n 3) \t Address  of The Person:"<<temp->address<<endl;
	  cout<<"\n 4) \t Phone  NO. is:"<<temp->phno<<endl;  
	  cout<<"\n 5) \t Phone  NO. is:"<<temp->id<<endl;   	
 	

      temp = temp->next;
   }
   cout<<endl;

}

// (--------------searching ----------------------)

void search() {
   temp = head;
   if ((head == NULL) && (tail == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   int n;
   cout<<"ENter the no to search :";
   cin>>n;
   
   cout<<"\t\t(-----Persons informetion That is searched-----)\n"<<endl;
   while (temp != NULL) {

   	if (n==temp->id)
   	{
	  
      cout<<"\n 1)  \t Name of The Person:"<<temp->name<<endl;
      cout<<"\n 2) \t Address of The Person:"<<temp->address<<endl;
      cout<<"\n 3) \t The ID of THe person:"<<temp->id<<endl;
	  cout<<"\n 4) \t ID card No. :"<<idno<<" "<<endl;
	  cout<<"\n 5) \t Phone  NO. is:"<<temp->phno<<endl;   	

   	


  }
  temp = temp->next;
      
  

   }
   cout<<endl;

}

};

long int myclass::idno=34201;


int main() {

	myclass obj;
   int ch;


   cout<<"(------Remember these keys-------)"<<endl;
   cout<<"1) ENter your DAta"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the person "<<endl;
   cout<<"4) To display the searched peron :"<<endl;
   cout<<"5) Exit"<<endl;
      do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      
      system("cls");

      switch (ch) {

         case 1: obj.Enter_data();
         break;
         case 2: obj.Delete();
         break;
         case 3: obj.Display();
         break;
         case 4: obj.search();
		 break;
         case 5: cout<<"Exit"<<endl;
        
         default: cout<<"Invalid choice"<<endl;
      
	  
	  }
   } 
   
   while(ch!=5);
   
   return 0;
}
