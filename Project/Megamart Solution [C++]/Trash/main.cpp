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

void GotoXY(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
}


void welcome()
{


	GotoXY(0, 10);
	ifstream ifs ("welcome.txt");
	string Lines = "";

    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";

	    	Lines += TempLine;
		}

	cout << Lines;

    }
}


void exitArt()
{

	GotoXY(0, 50);
	ifstream ifs ("exit art.txt");
	string Lines = " ";

    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";

	    	Lines += TempLine;
		}

	cout << Lines;

	}
}



void art()
{

	GotoXY(0, 0);

	ifstream ifs ("art.txt");
	string Lines = "";

    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";

	    	Lines += TempLine;
		}

	cout << Lines;

	}

    ifs.close ();
}

void employeemenu()
{

            string user,pass,u,p;
            int choice;

            system("cls");

            art();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|        Employee Name : "<<user;
            cout<<"\t  |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|     Please Select Your Option       |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|  1.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  2.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  3.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  4.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  5.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  6.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  7.                                 |";
            cout<<"\n\t\t\t\t\t\t\t|  8.                                 |";
            cout<<"\n\t\t\t\t\t\t\t***************************************\n";
            cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
            cin>>choice;




}

                /*Emplyee Login*/
void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        art();
        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|   ENTER YOUR EMPLOYEE CREDENTIALS   |";
        cout<<"\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t USERNAME :\t";
        cin>>user;
        cout<<"\n\t\t\t\t\t\t\t PASSWORD :\t";
        cin>>pass;



        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        /*count=1;
                        system("cls");*/
                        employeemenu();
                        break;
                }
        }/*
        input.close();
        if(count==1)
        {
            employeemenu();

        }
        else
        {
                cout<<"\n\t\t\t\t\t\t\tLOGIN ERROR\n\t\t\t\t\t\t\tPlease check your username and password\n";

        }*/
}

void registr()
{

        string reguser,regpass,ru,rp,regname,regmobile;
        system("cls");

        cout<<"\n\n\t\t\t\t\t==========================================================";
        cout<<"\n\t\t\t\t\t|                 ADMINISTRATION PORTAL                  |";
        cout<<"\n\t\t\t\t\t|                 New Employee Sign-up                   |";
        cout<<"\n\t\t\t\t\t==========================================================\n\n";
        cout<<"\n\t\t\t\t\t**********************************************************";
        cout<<"\n\t\t\t\t\t|        Please Provide the Recquired Information        |";
        cout<<"\n\t\t\t\t\t**********************************************************";


        cout<<"\n\n\t\t\t\t\tEnter the Employee Name : ";
        cin>>regname;
        cout<<"\n\t\t\t\t\tEnter Mobile Number : ";
        cin>>regmobile;

        ofstream reg("database.txt",ios::app);
        reg<<regname<<' '<<regmobile<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";


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

                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();

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

                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();

                        }

                        break;
                }

                case 3:
                {
                        cin.get();

                }
                default:
                        cout<<"Sorry, You entered wrong choice. Kindly try again"<<endl;
                        forgot();
        }
}


void EmployeeLogin()
{
        int choice;
        do
        {
        cout<<"\n\n\n\t\t\t\t\t\t\t\t\tLoading\n\n\t\t\t\t\t\t";
        char x=219;
        for(int i=0;i<50;i++)
            {
                cout<<x;
            if(i<10)
                {
                    Sleep(2);
                }
            if(i>=10 && i<20)
                {
                    Sleep(2);
                }
            if(i>=10)
                {
                    Sleep(2);
                }
            }
        system("cls");
        art();
        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|   MEGAMART EMPLOYEE PORTAL LOGIN    |";
        cout<<"\n\t\t\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|  1. LOGIN                           |";
        //cout<<"\n\t\t\t\t\t|  2. REGISTER NEW EMPLOYE            |";
        cout<<"\n\t\t\t\t\t\t\t|  2. FORGOT PASSWORD (or) USERNAME   |";
        cout<<"\n\t\t\t\t\t\t\t|  3. RETURN TO MAIN MENU             |";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                /*case 2:
                        registr();
                        break;*/
                case 2:
                        forgot();
                        break;
                case 3:
                {
                    break;

                }
                default:
                {
                system("cls");
                cout<<"\n\n\t\t\t\t\t=======================================";
                cout<<"\n\t\t\t\t\t|  You've made a mistake,Try again..  |";
                cout<<"\n\t\t\t\t\t=======================================\n\n";

				break;
                }

        }
        }

        while(choice!=3);
        return ;
}

void adminmenu()
{
        /*int choice;
        cout<<"\n\n\n\t\t\t\t\t\t\tLoading\n\n\t\t\t\t";
        char x=219;
        for(int i=0;i<50;i++)
            {
                cout<<x;
            if(i<10)
                {
                    Sleep(2);
                }
            if(i>=10 && i<20)
                {
                    Sleep(2);
                }
            if(i>=10)
                {
                    Sleep(2);
                }
        system("cls");
        cout<<"\n\n\t\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t\t|       ADMINISTRATOR PORTAL          |";
        cout<<"\n\t\t\t\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t\t|  1. LOGIN                           |";
        cout<<"\n\t\t\t\t\t\t\t\t|  2. RETURN TO MAIN MENU             |";
        cout<<"\n\t\t\t\t\t\t\t\t***************************************\n";
        cout<<"\n\t\t\t\t\t\t\t\t Enter Your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                {
                        return;
                }
                case 2:
                {
                        return;
                }
                default:
                {
                system("cls");
                cout<<"You've made a mistake , Try again..\n"<<endl;
                return;
                }

        }

    }*/
        art();
            cout<<"\n\t\t\t\t\t\t\t=============================================";
            cout<<"\n\t\t\t\t\t\t\t|          ADMINISTRATION PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t=============================================";
            cout<<"\n\t\t\t\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t\t\t\t|        Please Select Your Option          |";
            cout<<"\n\t\t\t\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t\t\t\t|  1. View List of Employees                |";
            cout<<"\n\t\t\t\t\t\t\t|  2. View Individual Employee Details      |";
            cout<<"\n\t\t\t\t\t\t\t|  3. Add New Employee Details              |";
            cout<<"\n\t\t\t\t\t\t\t|  4. Remove an Employee Details            |";
            cout<<"\n\t\t\t\t\t\t\t|  5. Modify Existing Employee Details      |";
            cout<<"\n\t\t\t\t\t\t\t|  6. Employee Monitoring                   |";
            cout<<"\n\t\t\t\t\t\t\t|  7. Revenue                               |";
            cout<<"\n\t\t\t\t\t\t\t|  8.                                       |";
            cout<<"\n\t\t\t\t\t\t\t|  9. Return to main Menu                   |";
            cout<<"\n\t\t\t\t\t\t\t*********************************************\n";
            cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";

            int choice;
                cin>>choice;

                switch (choice) {
                    case 0:


                    case 1:


                    case 2:


                    case 3:
                        registr();
                        break;


                    case 4:


                    case 5:


                    default:
                        cout<<"\n Sorry! I don't understand that! \n";
                        break;
                }




}



void adlogin()
{

        int count;
        string user,pass,u,p;
        system("cls");
        art();
        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|    ENTER YOUR ADMIN CREDENTIALS     |";
        cout<<"\n\t\t\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t USERNAME :\t";
        cin>>user;
        cout<<"\n\t\t\t\t\t\t\t PASSWORD :\t";
        cin>>pass;



        ifstream input("admindatabase.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count>0)
        {

            adminmenu();

            /*
            art();
            cout<<"\n\t\t\t\t\t\t\t=============================================";
            cout<<"\n\t\t\t\t\t\t\t|          ADMINISTRATION PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t=============================================";
            cout<<"\n\t\t\t\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t\t\t\t|        Please Select Your Option          |";
            cout<<"\n\t\t\t\t\t\t\t*********************************************";
            cout<<"\n\t\t\t\t\t\t\t|  1. View List of Employees                |";
            cout<<"\n\t\t\t\t\t\t\t|  2. View Individual Employee Details      |";
            cout<<"\n\t\t\t\t\t\t\t|  3. Add New Employee Details              |";
            cout<<"\n\t\t\t\t\t\t\t|  4. Remove an Employee Details            |";
            cout<<"\n\t\t\t\t\t\t\t|  5. Modify Existing Employee Details      |";
            cout<<"\n\t\t\t\t\t\t\t|  6. Employee Monitoring                   |";
            cout<<"\n\t\t\t\t\t\t\t|  7. Revenue                               |";
            cout<<"\n\t\t\t\t\t\t\t|  8.                                       |";
            cout<<"\n\t\t\t\t\t\t\t|  9. Return to main Menu                   |";
            cout<<"\n\t\t\t\t\t\t\t*********************************************\n";
            cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";

            int choice;
                cin>>choice;

                switch (choice) {
                    case 0:


                    case 1:


                    case 2:


                    case 3:
                        registr();
                        break;


                    case 4:


                    case 5:


                    default:
                        cout<<"\n Sorry! I don't understand that! \n";
                        break;
                }*/

        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";

        }
}
void AdminLogin()
{
        int choice;
        cout<<"\n\n\n\t\t\t\t\t\t\tLoading\n\n\t\t\t\t";
        char x=219;
        for(int i=0;i<50;i++)
            {
                cout<<x;
            if(i<10)
                {
                    Sleep(2);
                }
            if(i>=10 && i<20)
                {
                    Sleep(2);
                }
            if(i>=10)
                {
                    Sleep(2);
                }
        system("cls");
        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|       ADMINISTRATOR LOGIN           |";
        cout<<"\n\t\t\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|  1. LOGIN                           |";
        cout<<"\n\t\t\t\t\t\t\t|  2. RETURN TO MAIN MENU             |";
        cout<<"\n\t\t\t\t\t\t\t***************************************\n";
        cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                {
                        adlogin();
                        break;
                }
                case 2:
                {
                        return;
                }
                default:
                {
                system("cls");
                cout<<"You've made a mistake , Try again..\n"<<endl;
                return;
                }

        }

    }
}



int main()
{

    int menu;
    welcome();
	do
    {
        cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tLoading\n\n\t\t\t\t\t\t";
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
        art();

		cout<<"\n\t\t\t\t\t\t\t         A Project by Astronauts";
        cout<<"\n\t\t\t\t\t\t\t      Supervised By SR Kohinoor Sir";
        cout<<"\n\t\t\t\t\t\t\t       Lecturer, Dept of CSE, LU";

        cout<<"\n\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|        1. EMPLOYEE LOGIN            |";
        cout<<"\n\t\t\t\t\t\t\t|        2. ADMINISTRATION LOGIN      |";
        cout<<"\n\t\t\t\t\t\t\t|        3. CONTRIBUTORS              |";
        cout<<"\n\t\t\t\t\t\t\t|        4. SHUT DOWN                 |";
        cout<<"\n\t\t\t\t\t\t\t***************************************\n";
        cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
		cin>>menu;
		switch (menu){
		case 1:
		    {
		        EmployeeLogin();
		        break;
		}

		case 2:
		    {
		        adlogin();
				break;
		}

        case 3:
            {
                break;

        }

        case 4:
            {
                break;

        }

        default:
            {
                system("cls");
                cout<<"You've made a mistake , Try again..\n"<<endl;
				break;
        }
		}
	}
	while(menu!=4);
	a:
	cout<<"\n\n\t\t\t\t\t\t\t      The Program is Shutting Down\n\n\t\t\t\t\t       ";
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
    cout<<"\n\n\t\t\t\t\t\t\t      Shutting Down Accomplished.\n\n\t\t\t\t\t\t\t\n   ";
    exitArt();
    cout<<"\n\n\t\t\t\t\t\t\t  ";
	system ("PAUSE");
	return 0;
}





////////////////////////////THE END OF PROGRAM//////////////////////////////////////////
