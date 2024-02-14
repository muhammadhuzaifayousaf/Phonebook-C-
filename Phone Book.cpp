#include<iostream>
#include<windows.h>
using namespace std;
int start();   //for sleep function used for loading bar
int menu();    //for main menu
int k=0;       //k is index number
int main()
{
	start(); //calling fuctions
	string name[100];
	string number[100];
	string address[100];
	string email[100];
	int check=0;
	int total_contacts=0;
    check=menu();
    do
    {
    	if (check==1) //adding contacts
    	{
    		cout<<"\t\t\t\t\t\t Create Contact";
		    cout<<"\n\t\t\t\t\t\t ==============================\n";
    		cout<<"\t\t\t\t\t\t Enter Name :";
    		cin>>name[k];
    		cout<<"\t\t\t\t\t\t Enter Phone Number :";
    		checker:
			cin>>number[k];
			if((number[k]==number[k-1] && name[k]==name[k-1]) || (number[k]==number[k-1] && name[k]!=name[k-1]))
		{	cout<<"\t\t\t\t\t\t Phone Number Already Exists...";
				name[k]="\0";
				number[k]="\0";
				address[k]="\0";
				email[k]="\0";
		}
		else
		{
			if(number[k].size()==11)
			{
				cout<<"\t\t\t\t\t\t Enter Address: ";
			    cin>>address[k];
			    cout<<"\t\t\t\t\t\t Enter Email: ";
			    cin>>email[k];
			    cout<<"\t\t\t\t\t\t Contact Added Successfully...";
    		}
			else
			{
				cout<<"\t\t\t\t\t\t Phone Number must be of 11 digits only...\n";
				cout<<"\t\t\t\t\t\t Enter Correct Phone Number: ";
				goto checker;
			}
			k++;
			total_contacts++;
		}
		}
		else if (check==2) //display contacts
		{
			int check2=0;
			cout<<"\t\t\t\t\t=================================\n";
			cout<<"\t\t\t\t\tTotal Number of Contacts : "<<total_contacts<<endl; //Display number of contacts
			cout<<"\t\t\t\t\t=================================\n";
			cout<<"\t\t\t\t\t|        LIST OF CONTACTS        |\n\n";
			for (int i=0; i<100; i++) //looping is used to display all contacts
			{
				if(name[i]!="\0") //"\0" means null. if contacts are available then it will:
				{
				cout<<"\t\t\t\t\t Name :"<<name[i]<<endl;
				cout<<"\t\t\t\t\t Phone Number:"<<number[i]<<endl;
				cout<<"\t\t\t\t\t Address :"<<address[i]<<endl;
				cout<<"\t\t\t\t\t Email: "<<email[i]<<'\n'<<endl;
				check2++;
				}
		    }
			if(check2==0)
			{
				cout<<"\t\t\t\t\tContact list is empty...\n";
			}
		}
		else if (check==3) //Search contact by number
		{
			string temp;
			cout<<"\t\t\t\t\t Find Contact";
		    cout<<"\n\t\t\t\t\t ====================================================\n";
			cout<<"\t\t\t\t\t Enter Phone Number of Contact to Search: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==number[i])
				{
					cout<<"\t\t\t\t\t Phone Number is Found\n";
					cout<<"\t\t\t\t\t|=======Contact Details=======|"<<'\n';
					cout<<"\t\t\t\t\t Name :"<<name[i]<<endl;
				    cout<<"\t\t\t\t\t Phone Number:"<<number[i]<<endl;
				    cout<<"\t\t\t\t\t Address :"<<address[i]<<endl;
				    cout<<"\t\t\t\t\t Email: "<<email[i]<<'\n'<<endl;
				    check2++;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t Phone Number does not exists...\n";
			}
		}
		else if (check==4) //Search by name
		{
			string temp;
			cout<<"\t\t\t\t\t Find Contact";
		    cout<<"\n\t\t\t\t\t ===========================================\n";
			cout<<"\t\t\t\t\t Enter Name of Contact to Search: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\t Contact Name is Found\n";
					cout<<"\t\t\t\t\t|=======Contact Details=======|"<<'\n';
					cout<<"\t\t\t\t\t Name :"<<name[i]<<endl;
				    cout<<"\t\t\t\t\t Phone Number:"<<number[i]<<endl;
				    cout<<"\t\t\t\t\t Address :"<<address[i]<<endl;
				    cout<<"\t\t\t\t\t Email: "<<email[i]<<'\n'<<endl;
				    check2++;
				}	
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t Contact Name does not exists...\n";
			}
		}
		else if (check==5) //Edit contact
		{
			cout<<"\t\t\t\t\t Update Contact";
		    cout<<"\n\t\t\t\t\t ==================================================\n";
			string temp,temp2,temp3, temp4, temp5;
			cout<<"\t\t\t\t\t Enter Phone Number of Contact to Edit: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==number[i])
				{
					cout<<"\t\t\t\t\t Enter New Name : ";
					cin>>temp2;
					cout<<"\t\t\t\t\t Enter New Number : ";
					find:
			        cin>>temp3;
			        if((temp3==number[k-1] && temp2==name[k-1]) || (temp3==number[k-1] && temp2!=name[k-1]))
		            {	cout<<"\t\t\t\t\t Phone Number Already Exists...";
				        temp2="\0";
				        temp3="\0";
				        temp4="\0";
				        temp5="\0";
				        ++check2;
		            }
		            else
		            {
			        if(temp3.size()==11)
			        {
					    cout<<"\t\t\t\t\t Enter New Address : ";
					    cin>>temp4;
					    cout<<"\t\t\t\t\t Enter New Email : ";
					    cin>>temp5;
					    name[i]=temp2;
					    number[i]=temp3;
					    address[i]=temp4;
					    email[i]=temp5;
					    ++check2;
					    cout<<"\t\t\t\t\t Contact Edited Successfully...";
    		        }
			        else
			        {
				        cout<<"\t\t\t\t\t New Phone Number must be of 11 digits only...\n";
				        cout<<"\t\t\t\t\t Enter Correct New Phone Number: ";
				        goto find;
			        }
			        }
			    }
		    }
		    if(check2==0)
			{
				cout<<"\t\t\t\t\t Phone Number does not exists...\n";
			}
		}
		else if (check==6) //Delete contact
		{
			string temp;
			cout<<"\t\t\t\t\tDelete Contact";
			cout<<"\n\t\t\t\t\t====================================================\n";
			cout<<"\t\t\t\t\tEnter Phone Number of contact to delete: ";
			cin>>temp;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==number[i])
				{
					cout<<"\t\t\t\t\tDeleted Successfully\n";
					cout<<"\t\t\t\t\t|=======Deleted Contact Details=======|"<<'\n';
					cout<<"\t\t\t\t\t Name :"<<name[i]<<endl;
				    cout<<"\t\t\t\t\t Phone Number:"<<number[i]<<endl; 
				    cout<<"\t\t\t\t\t Address :"<<address[i]<<endl;
				    cout<<"\t\t\t\t\t Email: "<<email[i]<<'\n'<<endl;
					name[i]="\0";
					number[i]="\0";
					address[i]="\0";
					email[i]="\0";
					check2++;
					total_contacts--;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\tPhone Number does not exists...\n";
			}
		}
		else if (check==7) //Delete All contacts
		{	
		    cout<<"\t\t\t\t\t All Contacts Deleted Successfully...\n";
		    for(int i=0;i<k;i++)
			{
				name[i]="\0";
				number[i]="\0";
				address[i]="\0";
				email[i]="\0";
			}
			k=0;
			total_contacts=0;
		}
		else if (check==8)
		{
			cout<<"\n\t\t\t\t\tTHANK YOU FOR USING PHONEBOOK APPLICATION...\n";
			break;
		}
		check=menu();
	}
	while(true);
}
int menu()  //Creating Menu
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t\t|          PHONEBOOK APPLICATION          |\n";
	cout<<"\t\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t\t|       [1]  Add Contacts                 |\n";
	cout<<"\t\t\t\t\t\t|       [2]  Display All Contacts         |\n";
	cout<<"\t\t\t\t\t\t|       [3]  Search By Number             |\n";
	cout<<"\t\t\t\t\t\t|       [4]  Search By Name               |\n";
	cout<<"\t\t\t\t\t\t|       [5]  Edit Contact                 |\n";
	cout<<"\t\t\t\t\t\t|       [6]  Delete Contact               |\n";
	cout<<"\t\t\t\t\t\t|       [7]  Delete All Contact           |\n";
	cout<<"\t\t\t\t\t\t|                                         |\n";
	cout<<"\t\t\t\t\t\t-------------------------------------------\n";
	cout<<"\t\t\t\t\t\t|       [8]  Exit                         |\n";
	cout<<"\t\t\t\t\t\t-------------------------------------------\n";
	
	int a;
	cout<<"\t\t\t\t\t\tEnter your choice: ";
	cin>>a;
	system("cls");
	return a;
}

int start()
{
	system("Color 0B"); //0~~9 Background color __ A~~F Text Color __0B[Black, Bringht White]
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t----------------------------\n";
	cout<<"\t\t\t\t\t\t----------------------------\n";
	cout<<"\t\t\t\t\t\t    PHONEBOOK APPLICATION   \n";
	cout<<"\t\t\t\t\t\t----------------------------\n\n";
	cout<<"\t\t\t\t\tLoading ";
	char x=219; //ASCII of 219 is "█(Block)"
	for (int i=0; i<30; i++)
	{
		cout<<x;
		if (i<10)
		   Sleep(200); //sleep() is used for delay time. (200) milisecond
		if (i>=10 && i<15)
		   Sleep(100);
		if (i>=15)
		   Sleep(25);	
	}
	system("cls");
}