#include<iostream>
#include<istream>
#include<stdlib.h>
#include<string>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;

                /*Emplyee Login*/
void EmployeeLogin()
{
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Thanks for using this program.\nThis program is created by @InhaleCode(rxn)\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        main();
        }

}

void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello"<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                main();
        }
}

void registr()
{

        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        main();


}

void forgot()
{
        int ch;
        system("cls");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;

                        ifstream searchu("database.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;

                        ifstream searchp("database.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }

                        break;
                }

                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}

int main()
{

    int menu;
	do
    {
        cout<<"\n\n\n\t\t\t\t\t\t\tLoading\n\n\t\t\t\t";
        char x=219;
        for(int i=0;i<50;i++)
            {
                cout<<x;
            if(i<10)
                {
                    Sleep(150);
                }
            if(i>=10 && i<20)
                {
                    Sleep(20);
                }
            if(i>=10)
                {
                    Sleep(5);
                }

        }
		system("cls");
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t A Project by Astronauts";
        cout<<"\n\n\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t|            MEGAMART SOLUTION        |";
        cout<<"\n\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t|        1. EMPLOYEE LOGIN            |";
        cout<<"\n\t\t\t\t\t|        2. ADMINISTRATION LOGIN      |";
        cout<<"\n\t\t\t\t\t|        3. SHUT DOWN                 |";
        cout<<"\n\t\t\t\t\t***************************************\n";
        cout<<"\n\t\t\t\t\t Enter Your choice: ";
		cin>>menu;
		switch (menu){
		case 1:
		    {
		        EmployeeLogin();
		        break;
		}

		case 2:
		    {
				break;
		}

        case 3:
            {
        }

        default:
            {

				break;
        }
		}
	}
	while(menu!=3);
	a:
	cout<<"\n\n\t\t\t\t\t\tThe Program is Shutting Down\n\n\t\t\t\t";
	char x=219;
        for(int i=0;i<58;i++)
            {
                cout<<x;

            if(i<10)
                {
                    Sleep(200);
                }
            if(i>=10 && i<20)
                {
                    Sleep(150);
                }
            if(i>=10)
                {
                    Sleep(25);
                }

        }
    cout<<"\n\n\t\t\t\t\t\tShutting Down Accomplished.\n\n\t\t\t\t\t\t";
	system ("PAUSE");
	return 0;
}


                    /* END Of Home Menu*/




////////////////////////////THE END OF PROGRAM//////////////////////////////////////////
