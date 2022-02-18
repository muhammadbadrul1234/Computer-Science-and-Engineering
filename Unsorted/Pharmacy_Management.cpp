#include<iostream>
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
    cout<<"1: Login \n2: Register\n3: Forgot Password";
    if(choice==1)
    {
        string un,pw;
        string username,password;

        cout<<"\t\t\t\t\t        Enter Username: ";
        cin>>username;
        cout<<"\t\t\t\t\t        Enter Password: ";
        cin>>password;

        ifstream read("data\\" + username + ".txt");
        getline(read,un);
        getline(read,pw);

        if(un==username && pw==password)
        {
            cout<<"Login Successfull!"<<endl;
            system("PAUSE");
        }
        else
        {
            cout<<"Login Error"<<endl;
            system("PAUSE");
        }


    }
    else if(choice==2)
    {
        string username,password;
        cout<<"Select a Username: ";
        cin>>username;
        cout<<"Select a Password: ";
        cin>>password;

        ofstream file;
        file.open("data\\" + username + ".txt");
        file<<username<<endl<<password;
        file.close();



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
