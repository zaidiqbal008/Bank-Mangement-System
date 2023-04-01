 #include<iostream>

#include <iomanip>

#include<conio.h>

#include<windows.h>

using namespace std;

class Bank{

	private: 

	    int total;

	    string id;

	    struct person{

	    	string name,ID,address;

	    	int contact,cash;

		}person[100];

	public:

		Bank(){

			total=0;

		}

		void start();
		void choice();

		void perData();

		void show();

		void update();

		void search();

		void transactions();

};

void start() 
{
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout << "\t\t\t\t\t\t-------------------------------------\n";
	cout << "\t\t\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t\t\t|       BANK MANAGMENT SYSTEM       |\n";
	cout << "\t\t\t\t\t\t|    SYSTEM START PLEASE WAIT.....  |\n";
	cout << "\t\t\t\t\t\t|       THANKS FOR PATIENCE :)      |\n";
	cout << "\t\t\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t\t\t|                                   |\n";
	cout << "\t\t\t\t\t\t-------------------------------------\n";
	Sleep(3000);
	system("cls");
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout << "\t\t\t\t\t|      WELCOME TO GROUP BANK LTD        |" << endl;
	cout << "\t\t\t\t\t-----------------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout<<"\n\t\t\t\t\t\tPress Any Button To Start ...";    
    getch();

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	Sleep(200);
	system("cls");
}

void Bank::choice()
{

	char ch;

	while(1)
	{

		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    1.   Open Account                              |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    2. View customers list                         |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    3. Update information of existing account      |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    4. Check the details of an existing account    |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    5. For transactions                            |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << "\t\t\t\t|    6. Exit                                        |" << endl;
		cout << "\t\t\t\t-----------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout<<"\t\t\t\t Press Any One From Above: ";
		ch=getch();
	
		system("CLS");
	
		switch(ch)
		{
	
			case '1':
	
				Bank::perData();
				system("CLS");
				break;
			case '2':
	
				if(total==0)
				{
	
					cout<<"No data is entered"<<endl;
				}
				else
				{
					Bank::show();
					break;
					system("CLS");
			  	}
			case '3':
				{
					if(total==0)
						cout<<"No data is entered"<<endl;
					else
		 			{
						Bank::update();
						system("CLS");
					}
				break;
				}
			case '4':
				{
					if(total==0)
						cout<<"No data is entered"<<endl;
					else
						{
							Bank::search();
							
							break;
						}
					break;
				}
			case '5':
				{
					if(total==0)
						cout<<"No data is entered"<<endl;
					else
					{
						Bank::transactions();
						
						break;
					}
					break;
				}
			case '6':
				{
					exit(0);
					system("CLS");
					break;
				}
			default:
				{
					cout<<"Invalid input"<<endl;
					break;
				}
		}
    }

}

void Bank::perData(){

	cout<<"Enter data of person "<<total+1<<endl;

	cout<<"Enter name: ";

	cin>>person[total].name;

	cout<<"ID: ";

	cin>>person[total].ID;

	cout<<"Address: ";

	cin>>person[total].address;

	cout<<"Contact: ";

	cin>>person[total].contact;

	cout<<"Total Cash: ";

	cin>>person[total].cash;

	total++;

}

void Bank::show()
{
	 	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << "| NO OF PERSON | PERSON NAME  | PERSON ID     | PERSON ADDRESS      | PERSON CONTACT      | PERSON CASH        |" << endl;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < total; i++) 
		{
			cout << "|" << setw(14) << i+1 << "|" << setw(14) << person[i].name << "|" << setw(15) << person[i].ID << "|" << setw(21) << person[i].address << "|" << setw(21) <<person[i].contact << "|" << setw(21) << person[i].cash << endl;
		}
			cout << "------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;		
	}
void Bank::update(){

	cout<<"Enter id of student those data you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++)
	{

		if(id==person[i].ID)
		{

			cout<<"Previous data"<<endl;
		 	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
			cout << "| NO OF PERSON | PERSON NAME  | PERSON ID     | PERSON ADDRESS      | PERSON CONTACT      | PERSON CASH        |" << endl;
			cout << "----------------------------------------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < total; i++) 
			{
				cout << "|" << setw(14) << i+1 << "|" << setw(14) << person[i].name << "|" << setw(15) << person[i].ID << "|" << setw(21) << person[i].address << "|" << setw(21) <<person[i].contact << "|" << setw(21) << person[i].cash << endl;
			}
				cout << "------------------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;		
		}
			cout<<"\nEnter new data"<<endl;
	
			cout<<"Enter name: ";
	
			cin>>person[i].name;
		
			cout<<"ID: ";
		
			cin>>person[i].ID;
		
			cout<<"Address: ";
		
			cin>>person[i].address;
		
			cout<<"Contact: ";
		
			cin>>person[i].contact;
		
			cout<<"Total Cash: ";
		
			cin>>person[i].cash;
		break;

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}
		}

	}



void Bank::search()
{

	cout<<"Enter id of student those data you want to search"<<endl;
	
	cin>>id;
for(int i=0;i<total;i++)
{

	if(id==person[i].ID)
	{
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << "| NO OF PERSON | PERSON NAME  | PERSON ID     | PERSON ADDRESS      | PERSON CONTACT      | PERSON CASH        |" << endl;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < total; i++) 
		{
			cout << "|" << setw(14) << i+1 << "|" << setw(14) << person[i].name << "|" << setw(15) << person[i].ID << "|" << setw(21) << person[i].address << "|" << setw(21) <<person[i].contact << "|" << setw(21) << person[i].cash << endl;
		}
			cout << "------------------------------------------------------------------------------------------------------------" << endl;
		break;

	}
	if(i==total-1){

		cout<<"No such record found"<<endl;

	}
}
}
void Bank::transactions()
{

	int cash;

	char ch;

	cout<<"Enter id of student those data you want to transaction"<<endl;

     cin>>id;

     

     	cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		cout << "| NO OF PERSON | PERSON NAME  | PERSON ID     | PERSON ADDRESS      | PERSON CONTACT      | PERSON CASH        |" << endl;
		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < total; i++) 
		{
     		if(id==person[i].ID)
			{
				for (int i = 0; i < total; i++) 
				{
					cout << "|" << setw(14) << i+1 << "|" << setw(14) << person[i].name << "|" << setw(15) << person[i].ID << "|" << setw(21) << person[i].address << "|" << setw(21) <<person[i].contact << "|" << setw(21) << person[i].cash << endl;
				}
		}
			cout << "------------------------------------------------------------------------------------------------------------" << endl;
	

			ch=getch();
		     switch(ch)
			 {

		     	case '1':
				{
		     		cout<<"How much cash you want to deposit??"<<endl;

		     		cin>>cash;

		     		person[i].cash+=cash;

		     		cout<<"Your new cash is "<<person[i].cash<<endl;

		     		break;
				}	
		     	case '2':
				{

		     		back:

		     		cout<<"How much cash you want to withdraw??"<<endl;

		     		cin>>cash;

		     		if(cash>person[i].cash){

		     			cout<<"Your existing cash is just "<<person[i].cash<<endl;

		     			Sleep(3000);

		     			goto back;

					 }

					 person[i].cash-=cash;

					 cout<<"Your new cash is "<<person[i].cash<<endl;

					 break;
				}
				default:

					cout<<"Invalid input"<<endl;

					break;
			 }
			break;
		
			if(i==total-1){

		 	cout<<"No such record found"<<endl;

	}
}
}
int main()
{
	system("color 71");
	start();	
	Bank b;

	b.choice();

	return 0;

}
