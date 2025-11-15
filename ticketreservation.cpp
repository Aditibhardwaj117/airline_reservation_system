#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();
class Management
{
    public:
    Management(){
        mainMenu();
    }
};

class Details{
	public:
		static string name , gender;
		int phnno;
		int age;
		string add;
		static int cId;
		char arr[100
        }
};
		
int Details::cId;
string Details::name;
string Details::gender;
class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flightN[] = {"paris" , "london", "UK", "USA" , "Dubai"};
			for(int a=0;a<5;a++)
			{
			cout<<(a+1)<<".flight to "<<flightN[a]<<endl;	
			}
			cout<<"\nWelcome to the airlines"<<endl;
			cout<<"press the number of which you want to book a flight :";
			cin>>choice;
	
			switch (choice)
			{
				case 1:
				{
					cout<<"_____Welcome to paris emricates____\n"<<endl;
					cout<<"Your comfort is our priority, enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<< "1.PAR-498"<<endl;
					cout<<"\t02-02-2024 8:00AM 10hrs Rs. 15000"<<endl;
					
					cout<< "1.PAR-555"<<endl;
					cout<<"\t03-02-2024 10:00AM 12hrs Rs. 20000"<<endl;
					
					cout<< "1.PAR-705"<<endl;
					cout<<"\t06-02-2024 12:00PM 10hrs Rs. 9000"<<endl;
					
					cout<<"\nSelect the flight you want to book:"<<	endl;
					cin>>choice1;
					
					if(choice1==1)
					{
						charges == 15000;
						cout<<"\n you have successfully booked the flight PAR-498"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges == 20000;
						cout<<"\n you have successfully booked the flight PAR-555"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else if(choice1==3){
						charges == 9000;
						cout<<"\n you have successfully booked the flight PAR-705"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else
					{
						cout<<"invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"press any key to go back  to main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}	
					else{
						mainMenu();	
					}				
					}
			    case 2:
					{
					cout<<"_____Welcome to London Airlines ____\n"<<endl;
					cout<<"Your comfort is our priority, enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					
					cout<< "1.LN-609"<<endl;
					cout<<"\t08-02-2024 9:00AM 8hrs Rs. 25000"<<endl;
					
					cout<< "1.LN-345"<<endl;
					cout<<"\t15-02-2024 11:00AM 11hrs Rs. 30000"<<endl;
					
					cout<< "1.LN-789"<<endl;
					cout<<"\t16-02-2024 10:00PM 10hrs Rs. 50000"<<endl;
					
					cout<<"\nSelect the flight you want to book:"<<	endl;
					cin>>choice1;
					
					if(choice1==1)
					{
						charges == 25000;
						cout<<"\n you have successfully booked the flight LN-609"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges == 30000;
						cout<<"\n you have successfully booked the flight LN-345"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else if(choice1==3){
						charges == 50000;
						cout<<"\n you have successfully booked the flight LN-789"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else
					{
						cout<<"invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"press any key to go back  to main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}	
					else{
						mainMenu();	
					}				
			}
				
		     	case 3:
				{
					cout<<"_____Welcome to UK Airways____\n"<<endl;
					cout<<"Your comfort is our priority, enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<< "1.UK-070"<<endl;
					cout<<"\t13-02-2024 8:00AM 14hrs Rs. 44000"<<endl;
					
					cout<<"\nSelect the flight you want to book:"<<	endl;
					cin>>choice1;
					
					if(choice1==1)
					{
						charges == 44000;
						cout<<"\n you have successfully booked the flight UK-070"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;
					}
				
					else
					{
						cout<<"invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"press any key to go back  to main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}	
					else{
						mainMenu();	
					}				
			}
		        case 4:
		        {
					cout<<"_____Welcome to USA Airlines____\n"<<endl;
					cout<<"Your comfort is our priority, enjoy the journey!"<<endl;
					
					cout<<"Following are the flights \n"<<endl;
					cout<< "1.USA-677"<<endl;
					cout<<"\t22-02-2024 10:00PM 10hrs Rs. 66000"<<endl;
					
					cout<< "1.USA-899"<<endl;
					cout<<"\t27-02-2024 03:00PM 12hrs Rs. 57000"<<endl;
					
					
					cout<<"\nSelect the flight you want to book:"<<	endl;
					cin>>choice1;
					
					if(choice1==1)
					{
						charges == 66000;
						cout<<"\n you have successfully booked the flight USA-677"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges == 57000;
						cout<<"\n you have successfully booked the flight USA-899"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else
					{
						cout<<"invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"press any key to go back  to main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}	
					else{
						mainMenu();	
					}				
			}			
					
                case 5:
		        {
					cout<<"_____Welcome to Dubai Emricates____\n"<<endl;
					cout<<"Your comfort is our priority, enjoy the journey!"<<endl;
					cout<<"Following are the flights \n"<<endl;
					cout<< "1.DUB-234"<<endl;
					cout<<"\t18-02-2024 9:00PM 15hrs Rs. 77000"<<endl;
					
					cout<< "1.DUB-245"<<endl;
					cout<<"\t20-02-2024 10:00AM 12hrs Rs. 22000"<<endl;
					
					cout<< "1.DUB-566"<<endl;
					cout<<"\t24-02-2024 12:00PM 10hrs Rs. 59000"<<endl;
					
					cout<<"\nSelect the flight you want to book:"<<	endl;
					cin>>choice1;
					
					if(choice1==1)
					{
						charges == 77000;
						cout<<"\n you have successfully booked the flight DUB-234"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges == 22000;
						cout<<"\n you have successfully booked the flight DUB-245"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else if(choice1==3){
						charges == 59000;
						cout<<"\n you have successfully booked the flight DUB-566"<<endl;
						cout<<"you can go back to main menu and take the ticket"<<endl;	
					}
					else
					{
						cout<<"invalid input, shifting to the previous menu"<<endl;
						flights();
					}
					
					cout<<"press any key to go back  to main menu:"<<endl;
					cin>>back;
					
					if(back==1)
					{
						mainMenu();
					}	
					else{
						mainMenu();	
					}				
	    	}		
			
			default :
			{
				cout<<"Invalid input , shifting you to the main menu !"<<endl;
		         mainMenu();
		         break;
			}		
       }
   } 
};
					
float registration::charges;
int registration::choice;
class ticket : public registration , Details
{
	public:
		void Bill()
		{
		string destination=" ";
		ofstream outf("records.txt");
		{
			outf<<"____INDIGO AIRLINES_____"<<endl;
			outf<<"____Ticket____"<<endl;
			outf<<"__________"<<endl;
			
			outf<<"Customer ID"<<Details::cId<<endl;
			outf<<"Customer Name"<<Details::name<<endl;
			outf<<"Customer Gender"<<Details::gender<<endl;
			outf<<"\tDescription"<<endl;
			if(registration::choice==1)
			{
				destination = "paris";
			}
			else if(registration::choice==2)
			{
				destination = "london";
			}
			else if(registration::choice==3)
			{
				destination = "UK";
			}
			else if(registration::choice==4)
			{
				destination = "USA";
			}
			else if(registration::choice==5)
			{
				destination = "Dubai";
			}
			
			outf<<"Destination\t\t"<<destination<<endl;
			outf<<"flight cost \t\t"<<registration :: charges<<endl;
			
			}
			
			outf.close();	
		}
		
		void display()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs){
					cout<<"error"<<endl;
				}
				while( !ifs.eof())
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
		}
		ifs.close();
	}
};
					
			
			
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    cout<<"\t  INDIGO AIRLINES \n"<<endl;
    cout<<"\t_______Main Menu_______"<<endl;
    cout<<"\t__________________"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;

    cout<<"\t|\t press 1 to add the customer details  \t|"<<endl;
    cout<<"\t|\t press 2 for flight registrations     \t|"<<endl;
    cout<<"\t|\t press 3 for ticket and charges       \t|"<<endl;
    cout<<"\t|\t press 4 for exit                     \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_________________"<<endl;

   cout<<"enter the choice:";
   cin>>lchoice;

   Details d;
   registration r;
   ticket t;

   switch(lchoice)
    {
    case 1 :
    {
    cout<<"______Custromers______\n"<<endl;
    
    d.information();
    cout<<"press any key to go back to Main menu";
    cin>>back;
    
  if(back==1){
    mainMenu();
    }
    else {
    	mainMenu();
	}
	break;
  }
  case 2 :
  {  
   cout<<"__book a flight  using this system____\n"<<endl;	
   r.flights();
   break;
  }
  case 3:
  	{
  		cout<<"____GET YOUR TICKET___\n"<<endl;
  		t.Bill();
  		cout<<"your ticket is printed, you can collect it \n"<<endl;
  		cout<<"press 1 to display your ticket";
  		cin>>back;
  		
  		if(back == 1)
		  { 
		  t.display();
		  cout<<"press any key to go back to main menu ";
		  cin>>back;
		  if(back ==1)
		  {
		  	mainMenu();
		  }
	}
		  else 
		  {
		  	mainMenu();
		  }
		  break;
    }
	case 4:
		{
			cout<<"\n\n\n\t_______THANK YOU_____"<<endl;
			break;
		}
		
		default :
		{
			cout<<"invalid input, please try again !! \n"<<endl;
			mainMenu();
			break;
		}
    }
	
}
int main()
{
Management Mobj;
return 0;
}