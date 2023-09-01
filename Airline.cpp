#include<iostream>
#include<fstream>
#include<iomanip>//for floting number

using namespace std;

void MAINMENU();

class Management
{
	public:
		
		Management()
		{
			MAINMENU();
		}
};


class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;
		static int CutomerID;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the customer ID:";
			cin>>CutomerID;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\n Address :";
			cin>>add;
			cout<<"\n Gender :";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}
};

int Details::CutomerID;//variable agin used
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Indore","Bhopal","Delhi","Mumbai","Kolkata","Bangalore"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;//0+1 one by one 
				
			}
			
			cout<<"\nWelcome to the Airlines!"<<endl;
			cout<<"Press ther number of the country of which you want to book the flight:";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						cout<<"_______________________Welcome to Indore Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. IND - 498"<<endl;
						cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<endl;
						cout<<"2. IND - 658"<<endl;
						cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
						cout<<"3. IND - 508"<<endl;
						cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=14000;
							cout<<"\nYou have successfully booked the flight IND - 498"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=10000;
							cout<<"\nYou have successfully booked the flight IND - 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=9000;
							cout<<"\nYou have successfully booked the flight IND - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
							
							
						}
						
						cout<<"Press any  number key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
			}
			
			case 2:
				{
					cout<<"_______________________Welcome to Bhopal Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. BHP - 198"<<endl;
						cout<<"\t09-01-2022 2:00PM 20hrs Rs. 3400"<<endl;
						cout<<"2. BHP - 158"<<endl;
						cout<<"\t11-01-2022 6:00AM 23hrs Rs. 2900"<<endl;
						cout<<"3. BHP - 208"<<endl;
						cout<<"\t14-01-2022 12:00AM 21hrs Rs. 4000"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=3400;
							cout<<"\nYou have successfully booked the flight BHP- 198"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=2900;
							cout<<"\nYou have successfully booked the flight BHP - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=4000;
							cout<<"\nYou have successfully booked the flight  BHP - 208"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any  number key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
						
				}
				
				case 3:
				{
					
					cout<<"_______________________Welcome to Delhi Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. Delhi - 798"<<endl;
						cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;
						
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=44000;
							cout<<"\nYou have successfully booked the flight Delhi - 798"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any number  key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
					
				}
				case 4:
					{
						cout<<"_______________________Welcome to Mumbai Airways____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. Mumbai - 567"<<endl;
						cout<<"\t10-01-2022 9:00AM 22hrs Rs. 3700"<<endl;
						cout<<"2. Mumbai - 658"<<endl;
						cout<<"\t09-01-2022 6:00AM 22hrs Rs. 3900"<<endl;
						cout<<"3. Mumbai - 508"<<endl;
						cout<<"\t12-01-2022 10:00AM 21hrs Rs. 4200"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=3700;
							cout<<"\nYou have successfully booked the flight Mumbai - 567"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=3900;
							cout<<"\nYou have successfully booked the flight Mumbai- 658"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=4200;
							cout<<"\nYou have successfully booked the flight Mumbai - 508"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any  number key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
					}
				case 5:
					{
						cout<<"_______________________Welcome to Kolkata Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. Kolkata - 698"<<endl;
						cout<<"\t018-01-2022 9:00AM 20hrs Rs. 4400"<<endl;
						cout<<"2. Kolkata - 158"<<endl;
						cout<<"\t019-01-2022 4:00AM 22hrs Rs. 3400"<<endl;
						cout<<"3. Kolkata - 708"<<endl;
						cout<<"\t17-01-2022 10:00AM 21hrs Rs. 4200"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=4400;
							cout<<"\nYou have successfully booked the flight Kolkata - 698"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=3400;
							cout<<"\nYou have successfully booked the flight Kolkata - 158"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=4200;
							cout<<"\nYou have successfully booked the flight Kolkata - 708"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any  number key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
					}
					case 6:
						{
							cout<<"_______________________Welcome to Bangalore Airlines____________________\n"<<endl;
						
						cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
						
						cout<<"Following are the flights \n"<<endl;
						
						cout<<"1. Bangalore - 898"<<endl;
						cout<<"\t02-01-2022 2:00AM 18hrs Rs. 3600"<<endl;
						cout<<"2. Bangalore - 958"<<endl;
						cout<<"\t03-01-2022 6:00AM 19hrs Rs. 3700"<<endl;
						cout<<"3. Bangalore - 608"<<endl;
						cout<<"\t12-01-2022 10:00AM 20hrs Rs. 3900"<<endl;
						
						cout<<"\nSelect the flight you want to book :";
						cin>>choice1;
						
						if(choice1==1)
						{
							charges=3600;
							cout<<"\nYou have successfully booked the flight Bangalore - 898"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						
						else if(choice1==2)
						{
							charges=3700;
							cout<<"\nYou have successfully booked the flight Bangalore - 958"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else if(choice1==3)
						{
							charges=3900;
							cout<<"\nYou have successfully booked the flight Bangalore - 608"<<endl;
							cout<<"You can go  back to menu and take the ticket"<<endl;
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						
						cout<<"Press any  number key to go back to the main menu:"<<endl;
						cin>>back;
						
						if(back==1)
						{
							MAINMENU();
							
						}
						else
						{
							MAINMENU();
							
						}
						}
						default :
							{
								cout<<"Invalid input, Shifting you to the main menu !"<<endl;
								MAINMENU();
								break;
							}
		}
	}
};
float registration::charges;//use variable agian
int registration::choice;


class ticket : public registration, Details//multiple inheritance
{
	public:
		
		void Bill()
		{
			string destination="";
			ofstream outf("store.txt");  //is used to create or write information in file
			{
				outf<<"_____________Rajput Airlines____________"<<endl;
				outf<<"______________Ticket_________________"<<endl;
				outf<<"_____________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::CutomerID<<endl;//use previously used varible
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Indore";
				}
				
				else if(registration::choice==2)
				{
					destination="Bhopal";
				}
				else if(registration::choice==3)
				{
					destination="Delhi";
				}
				else if(registration::choice==4)
				{
					destination="Mumbai";
				}
				else if(registration::choice==5)
				{
					destination="Kolkata";
				}
				else if(registration::choice==6)
				{
					destination="Bangalore";
				}
				
				outf<<"Destination\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
				
			}
			outf.close();//object of file
			
		}
		void dispBill()
		{
			ifstream ifs("store.txt");//is used to read from the file
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())//end of file
				{
					ifs.getline(arr, 100);//to read contenet from the file
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};




void MAINMENU()
{
	int YourChoice;
	int schoice;
	int back;
	
	cout<<"\t            Welcome to Rajput Airlines System \n"<<endl;
	cout<<"\t______________Main Menu______________"<<endl;
	
	cout<<"\t____________________________________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t" <<endl;
	
	cout<<"\t\t Press 1 TO ADD THE CUSTOMER DETAILS   \t"<<endl;
	cout<<"\t\t Press 2 FOR  FLIGHT REGISTRATION    \t"<<endl;
	cout<<"\t\t Press 3 FOR TICKET AND CHARGES     \t"<<endl;
	cout<<"\t\t Press 4 FOR EXIT                    \t"<<endl;
	cout<<"\t\t\t\t\t\t\t" <<endl;
	cout<<"\t_____________________________________________________"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>YourChoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(YourChoice)
	{
		
		case 1:
			{
			   cout<<"__________Customers__________\n"<<endl;
			   	d.information();
			   	cout<<"Press any number key to go back to Main menu ";
			   	cin>>back;
			   	
			   	if(back==1)
			   	{
			   		MAINMENU();
				   }
				   else
				   {
				   	MAINMENU();
				   }
				  break;
			}
			
			case 2:
				{
					cout<<"________Book a flight using this  system ____________\n"<<endl;
					r.flights();
					break;
				}
				
				case 3:
					{
					
				cout<<"_____GET YOUR TICKET____\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed, you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				
				cin>>back;
				
					if(back==1)
					{
						t.dispBill();
						cout<<"Press any number key to go back to main menu:";
						cin>>back;
						if(back==1)
						{
							MAINMENU();
						}
						else
						{
							MAINMENU();
						}
						
					}
					else
					{
						MAINMENU();
					}
					break;
				}
		
		case 4:
			{
				cout<<"\n\n\t_________Thank-you_______"<<endl;
				break;
			}
			
			default :
				{
					cout<<"Invalid input, Please try again!\n"<<endl;
					MAINMENU();
					break;
				}
	}
	
	
	
	
}




int main()
{
	Management Mobj;
	return 0;
}