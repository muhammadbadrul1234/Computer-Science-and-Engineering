//  Team : Astranauts
//  Project Tittle : Megamart Solution
//  Members : 2012020216,2012020204,2012020212

#include<bits/stdc++.h>

#include<stdlib.h>
#include<string>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<fstream>
#include<iomanip>
#include<windows.h>


//Contribution
//Badrul
//2012020216
//From Line 1-1500



//UI DESIGN
//Badrul 2012020216
void GotoXY();
void add();
void megamartlogo();
void welcome();
void exitArt();
void loading();
void about();
void shutdown();
//ADMINISTRATOR MENU
//Badrul 2012020216
void adlogin();
void AdminLogin();
void adminmenu();
void employeelist();
void individual_details();
void registr();
void remove_employee();
void employee_monitoring();
void Individuial_Monitoring();
void revenue();
//EMPLOYEE MENU
//Badrul 2012020216
void employeemenu();
void login();
void EmployeeLogin();
void payment_details_of_an_invoice();
void invoice_query();
void stock();
void forgot();
void edit_employee();


//Contribution
//Niloy Singha
//2012020204
//From Line 1-700
//EMPLOYEE MENU
//Niloy Singha 2012020204
void customer_invoice();
void create_new_invoice();
void refund_invoice();
void return_payment();



//Contribution
//Ananna Saha
//2012020212
//From Line 1-700
//EMPLOYEE MENU
//Ananna Saha 2012020212
void productmanagement();








using namespace std;



int main()
{

    int menu;

    system("cls"); 

    welcome();

	do
    {
        loading();

		system("cls");

        megamartlogo();



		cout<<"\n\t\t\t\t\t\t\t         A Project by Astronauts";
        cout<<"\n\t\t\t\t\t\t\t      Supervised By SR Kohinoor Sir";
        cout<<"\n\t\t\t\t\t\t\t       Lecturer, Dept of CSE, LU";

        cout<<"\n\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|        1. ADMINISTRATION LOGIN      |";
        cout<<"\n\t\t\t\t\t\t\t|        2. EMPLOYEE LOGIN            |";
        cout<<"\n\t\t\t\t\t\t\t|        3. ABOUT US                  |";
        cout<<"\n\t\t\t\t\t\t\t|        4. SHUT DOWN                 |";
        cout<<"\n\t\t\t\t\t\t\t***************************************\n";
        cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
		
        cin>>menu;


		switch (menu)
        {

		    case 1:
		    {
                //adminmenu();
                AdminLogin();
		        

		        break;

		    }

		    case 2:
		    {
                EmployeeLogin();
                //employeemenu();
		        

				break;

		    }

            case 3:
            {

                about();

                break;

            }

            case 4:
            {

                break;

            }

            default:
            {
                
                cout<<"\n\t\t\t\t\t\t\t You've made a mistake , Try again..\n"<<endl;

				break;

            }

		}

	}

	while(menu!=4);
    {
    
        shutdown();
        
    }
	        
	
}



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



void megamartlogo()
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

void loading()
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

}



void adminmenu()
{
       
            
           
    string user,pass,u,p;
    
    int choice;
    
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

    megamartlogo();

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
    cout<<"\n\t\t\t\t\t\t\t|  5. Employee Monitoring                   |";
    cout<<"\n\t\t\t\t\t\t\t|  6. Revenue                               |";
    cout<<"\n\t\t\t\t\t\t\t|  7. Return to main Menu                   |";
    cout<<"\n\t\t\t\t\t\t\t*********************************************\n";
    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";

            
    cin>>choice;
    
    string reguser,regpass,ru,rp,regname,regmobile,regnid,repassport,regcity,regdoj,regdept,regref,regid,regmail;

    switch (choice) 
    {

        case 1:
        {

            employeelist();
            
            break;


        }
        
        case 2:
        {

            individual_details();
        
            break;


        }

        case 3:
        {

            registr();

            break;
                        

        }

        case 4:
        {
                        
            remove_employee();

            break;


        }


        case 5:
        {
            employee_monitoring();

            //edit_employee();

            break;


        }
        case 6:
        {

            revenue();

            break;


        }
        case 7:
        {

            main();

            break;


        }


        default:
        {
                        
            adminmenu();

            cout<<"\n\t\t\t\t\t\t\t Sorry! I don't understand that! \n";
            
            break;
        }    
                         
    }

}



void employeelist()
{
               
    string name,nid,id,passport,city,mobile,dept,doj,email;
                               
    int choice;
    
    loading();
    
    system("cls");

    megamartlogo();
                    
    cout<<"\n\t\t\t\t\t\t==========================================================";
    cout<<"\n\t\t\t\t\t\t|                 ADMINISTRATION PORTAL                  |";
    cout<<"\n\t\t\t\t\t\t|                   List Of Employees                    |";
    cout<<"\n\t\t\t\t\t\t==========================================================";
                    
                    
    cout<<"\n\t_________________________________________________________________________________________________________________________________________________________";
    cout<<"\n\t|  ID   |         NAME          |      NID      |    PASSPORT   |     CITY      |    PHONE NO   | DEPT. |  DATE OF JOIN |          EMAIL                |";
    cout<<"\n\t_________________________________________________________________________________________________________________________________________________________\n";
    
    ifstream input("employeedirectory.txt");
    
    while(input>>id>>name>>nid>>passport>>city>>mobile>>email>>dept>>doj)
    {
        cout<<"\t|  "<<id<<"\t|  "<<name<<"\t\t|  "<<nid<<" \t|  "<<passport<<" \t|  "<<city<<" \t|  "<<mobile<<" \t|  "<<dept<<" \t|  "<<doj<<" \t|  "<<email<<"\t|"<<endl<<"\t---------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                                  
    }
    
    
    cout<<"\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

    cin.get();

    cin.get();

    adminmenu();


}



void individual_details()
{
    int ch;

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
    cout<<"\n\t\t\t\t\t\t\t|     Individual Employee Details     |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|        1. Search By NAME            |";
    cout<<"\n\t\t\t\t\t\t\t|        2. Search By ID              |";
    cout<<"\n\t\t\t\t\t\t\t|        3. Return                    |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter your choice : ";
    
    cin>>ch;

    switch(ch)
    {
        case 1:
        {

            int count=0;

            string name,nid,id,passport,city,mobile,dept,doj,email;

            string searchuser;

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee Name : ";
            cin>>searchuser;

            ifstream input("employeedirectory.txt");

            while(input>>id>>name>>nid>>passport>>city>>mobile>>email>>dept>>doj)
            {
                if(name==searchuser)
                {
                    cout<<"\n\t\t\t\t\t\tDetails found\n";

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t|             ADMINISTRATION PORTAL           |";
                    cout<<"\n\t\t\t\t\t\t\t|         Individual Employee Details         |";
                    cout<<"\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t***********************************************";
                    cout<<"\n\t\t\t\t\t\t\t        Personal Information of " <<name;
                    cout<<"\n\t\t\t\t\t\t\t***********************************************"; 


                    cout<<"\n\t\t\t\t\t\t\t\t      Personal Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t ID\t\t:   \t  "<<id;

                    cout<<"\n\t\t\t\t\t\t\t Name\t\t: \t  "<<name;
                    
                    cout<<"\n\t\t\t\t\t\t\t NID No\t\t: \t  "<<nid;

                    cout<<"\n\t\t\t\t\t\t\t Passport No\t: \t  "<<passport;

                    cout<<"\n\t\t\t\t\t\t\t City\t\t: \t  "<<city;

                    cout<<"\n\n\t\t\t\t\t\t\t\t      Contact Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t Mobile No\t: \t  "<<mobile;

                    cout<<"\n\t\t\t\t\t\t\t Email\t\t: \t  "<<email;

                    
                    cout<<"\n\n\t\t\t\t\t\t\t\t      Job Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t Department     : \t  "<<dept;

                    cout<<"\n\t\t\t\t\t\t\t Date of Joining: \t  "<<doj;
                   
                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();
                    cin.get();

                    adminmenu();




                }
                else
                {

                    cout<<"\n\t\t\t\t\t\t\t\t   Details not found!\n";

                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();

                    cin.get();

                    adminmenu();  
                }

            }

        break;

        }

        case 2:
        {
            int count=0;

            string name,nid,id,passport,city,mobile,dept,doj,email;

            string searchuser;

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee ID : ";
            cin>>searchuser;

            ifstream input("employeedirectory.txt");

            while(input>>id>>name>>nid>>passport>>city>>mobile>>email>>dept>>doj)
            {
                if(id==searchuser)
                {
                    cout<<"\n\t\t\t\t\t\tDetails found\n";

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t|             ADMINISTRATION PORTAL           |";
                    cout<<"\n\t\t\t\t\t\t\t|         Individual Employee Details         |";
                    cout<<"\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t***********************************************";
                    cout<<"\n\t\t\t\t\t\t\t        Personal Information of " <<id;
                    cout<<"\n\t\t\t\t\t\t\t***********************************************"; 


                    cout<<"\n\t\t\t\t\t\t\t\t      Personal Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t ID\t\t:   \t  "<<id;

                    cout<<"\n\t\t\t\t\t\t\t Name\t\t: \t  "<<name;
                    
                    cout<<"\n\t\t\t\t\t\t\t NID No\t\t: \t  "<<nid;

                    cout<<"\n\t\t\t\t\t\t\t Passport No\t: \t  "<<passport;

                    cout<<"\n\t\t\t\t\t\t\t City\t\t: \t  "<<city;

                    cout<<"\n\n\t\t\t\t\t\t\t\t      Contact Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t Mobile No\t: \t  "<<mobile;

                    cout<<"\n\t\t\t\t\t\t\t Email\t\t: \t  "<<email;

                    
                    cout<<"\n\n\t\t\t\t\t\t\t\t      Job Information: ";

                    cout<<"\n\n\t\t\t\t\t\t\t Department     : \t  "<<dept;

                    cout<<"\n\t\t\t\t\t\t\t Date of Joining: \t  "<<doj;
                   
                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();

                    cin.get();

                    adminmenu();





                }

                else
                {

                    cout<<"\n\t\t\t\t\t\t\t\t   Details not found!\n";

                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();

                    cin.get();

                    adminmenu();  


                }

            }

        break;

        }

        case 3:
        {
            adminmenu();

            break;


        }


        default:
        
        cout<<"\n\t\t\t\t\t\t\tSorry, You entered wrong choice. Kindly try again"<<endl;

        individual_details();

        break;
                        
        }

}



void registr()
{

    string regname,regnid,regid;

    string reguser,regpass,ru,rp,regmobile,repassport,regcity,regdoj,regdept,regref,regmail;
        

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t==========================================================";
    cout<<"\n\t\t\t\t\t\t|                 ADMINISTRATION PORTAL                  |";
    cout<<"\n\t\t\t\t\t\t|                 New Employee Sign-up                   |";
    cout<<"\n\t\t\t\t\t\t==========================================================";
    cout<<"\n\t\t\t\t\t\t**********************************************************";
    cout<<"\n\t\t\t\t\t\t|        Please Provide the Recquired Information        |";
    cout<<"\n\t\t\t\t\t\t**********************************************************";


    cout<<"\n\t\t\t\t\t\tEnter the Employee Name  : ";
    cin>>regname;

    cout<<"\t\t\t\t\t\tEmployee NID Number      : ";
    cin>>regnid;

    cout<<"\t\t\t\t\t\tEmployee Passport Number : ";
    cin>>repassport;

    cout<<"\t\t\t\t\t\tEnter the Employee City  : ";
    cin>>regcity;

    cout<<"\t\t\t\t\t\tEmployee Date of Joining : ";
    cin>>regdoj;

    cout<<"\t\t\t\t\t\tEnter the Employee Dept. : ";
    cin>>regdept;

    cout<<"\t\t\t\t\t\tReffered By              : ";
    cin>>regref;

    cout<<"\t\t\t\t\t\tEnter Mobile Number      : ";
    cin>>regmobile;

    cout<<"\t\t\t\t\t\tEnter Email              : ";
    cin>>regmail;

    cout<<"\t\t\t\t\t\tEnter a New Employee ID  : ";
    cin>>regid;

    cout<<"\t\t\t\t\t\tCreate a User Name       : ";
    cin>>reguser;

    cout<<"\t\t\t\t\t\tCreate a Password        : ";
    cin>>regpass;

    ofstream reg("employeedirectory.txt",ios::app);
    reg<<'\n'<<regid<<' '<<regname<<' '<<regnid<<' '<<repassport<<' '<<regcity<<' '<<regmobile<<' '<<regmail<<' '<<regdept<<' '<<regdoj<<endl;
        
    ofstream reg2("database.txt",ios::app);
    reg2<<reguser<<' '<<regpass<<endl;
    
    cout<<"\n\t\t\t\t\t\tRegistration Sucessful\n";

    loading();

    system("cls");

    adminmenu();

}



void remove_employee()
{
    int choice;


    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
    cout<<"\n\t\t\t\t\t\t\t|       Remove Employee Details       |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|        1. Search By NAME            |";
    cout<<"\n\t\t\t\t\t\t\t|        2. Search By ID              |";
    cout<<"\n\t\t\t\t\t\t\t|        3. Return                    |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter your choice : ";

    cin>>choice;

    switch(choice)
    {
        case 1:
        {

            int count=0;

            string nid,id,passport,city,mobile,dept,doj,email;

            char searchuser[10];

            char name[10];

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee Name : ";
            cin>>searchuser;


            FILE *file, *tempfile;
            file= fopen("employeedirectory.txt", "r");
            tempfile= fopen("newemployeedirectory.txt", "w");
            
            while(fscanf(file, "%s %s %s %s %s %s %s %s %s", &id, &name, &nid, &passport, &city, &mobile, &email, &dept, &doj)!=EOF)       
            {
                if(strcmp(searchuser,name)==0)
                {

                    cout<<"\n\n\t\t\t\t\t\t\tEmployee Data Found On Database";


                }
                if(strcmp(searchuser,name)!=0)
                {
                    fprintf(tempfile, "%s %s %s %s %s %s %s %s %s\n", &id, &name, &nid, &passport, &city, &mobile, &email, &dept, &doj);
                   
                }

            }


            fclose(file);
            fclose(tempfile);

                
            cout<<"\n\n\t\t\t\t\t\t\tData Deletation Successfull";

            cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();

            cin.get();

            adminmenu();


        }

        case 2:
        {
            int count=0;

            string nid,name,passport,city,mobile,dept,doj,email;

            char searchuser[10];

            char id[10];

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee ID : ";
            cin>>searchuser;


            FILE *file, *tempfile;
            file= fopen("employeedirectory.txt", "r");
            tempfile= fopen("newemployeedirectory.txt", "w");
            
            while(fscanf(file, "%s %s %s %s %s %s %s %s %s", &id, &name, &nid, &passport, &city, &mobile, &email, &dept, &doj)!=EOF)       
            {
                if(strcmp(searchuser,id)==0)
                {
                    cout<<"\n\n\t\t\t\t\t\t\tEmployee Data Found On Database";


                }
                if(strcmp(searchuser,id)!=0)
                {
                        fprintf(tempfile, "%s %s %s %s %s %s %s %s %s\n", &id, &name, &nid, &passport, &city, &mobile, &email, &dept, &doj);
                   
                   
                }
                
            }
                
                
            fclose(file);
            fclose(tempfile);
                
            cout<<"\n\n\t\t\t\t\t\t\tData Deletation Successfull";

            cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();
            
            cin.get();

            adminmenu();

        }

        case 3:
        {
            adminmenu();

            break;


        }
        
        default:
        {  
            cout<<"\n\t\t\t\t\t\t\tSorry, You entered wrong choice. Kindly try again"<<endl;

            individual_details();

            break;


        }

    }

}


void employee_monitoring()
{
    int ch;

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
    cout<<"\n\t\t\t\t\t\t\t|      Employee Monitoring Panel      |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|    1. All Monitoring Database       |";
    cout<<"\n\t\t\t\t\t\t\t|    2. Individuial Monitoring        |";
    cout<<"\n\t\t\t\t\t\t\t|    3. Return to Previous Menu       |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t Enter your choice : ";
    
    cin>>ch;

    switch(ch)
    {
        case 2:
        {

            Individuial_Monitoring();

            break;

            
        }
        case 1:
        {

            system("cls");

            megamartlogo();

            loading();

            string id,name,designation,doj,wh,jan,feb,march,april,may,june,july,aug,sept,oct,sal;
            int wh1,jan1,feb1,march1,april1,may1,june1,july1,aug1,sept1,oct1;
            

            cout<<"\n\t\t\t__________________________________________________________________________________________________________________";
            cout<<"\n\t\t\t|  ID  |\tNAME\t\t|WORKING HOUR|JANUARY|FEBRUARY|MARCH|APRIL|MAY|JUNE|JULY|AUGUST|SEPTEMBER|OCTOBER|";
            cout<<"\n\t\t\t__________________________________________________________________________________________________________________\n";
                       
                     

            fstream file;
            file.open("Employee_Monitoring.txt",ios::in);

            while(file>>id>>name>>designation>>doj>>sal>>wh>>jan>>feb>>march>>april>>may>>june>>july>>aug>>sept>>oct)
            {
                cout<<"\t\t\t| "<<id<<" |\t\t"<<name<<"\t\t|     "<<wh<<"     |  "<<jan<<"   |   "<<feb<<"   |  "<<march<<" |  "<<april<<" | "<<may<<"| "<<june<<" | "<<july<<" |  "<<aug<<"  |    "<<sept<<"   |  "<<oct<<"   |"<<endl<<"\t\t\t------------------------------------------------------------------------------------------------------------------"<<endl;
                                        
            }
            
            cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        

            cin.get();

            cin.get();

            employee_monitoring();
        }
        case 3:
        {

            adminmenu();

            break;


        }

        default:
        {
        
            cout<<"\n\t\t\t\t\t\t\tSorry, You entered wrong choice. Kindly try again"<<endl;

            employee_monitoring();

            break;

        }
                        
    }

}



void Individuial_Monitoring()
{

    int ch;

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
    cout<<"\n\t\t\t\t\t\t\t|    Individual Employee Monitoring   |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|        1. Search By NAME            |";
    cout<<"\n\t\t\t\t\t\t\t|        2. Search By ID              |";
    cout<<"\n\t\t\t\t\t\t\t|        3. Return                    |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter your choice : ";
    
    cin>>ch;

    switch(ch)
    {
        case 1:
        {

            string id,name,designation,doj;
            int wh,jan,feb,march,april,may,june,july,aug,sept,oct;
            int wh1,jan1,feb1,march1,april1,may1,june1,july1,aug1,sept1,oct1;
            int saljan1,salfeb1,salmarch1,salapril1,salmay1,saljune1,saljuly1,salaug1,salsept1,saloct1;

            int sal,salsal,saltotal,salwh;

            string searchuser;

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee Name : ";
            cin>>searchuser;

            fstream file;
            file.open("Employee_Monitoring.txt",ios::in);

            while(file>>id>>name>>designation>>doj>>sal>>wh>>jan>>feb>>march>>april>>may>>june>>july>>aug>>sept>>oct)
            {

                if(name==searchuser)
                    {

                        cout<<"\n\t\t\t\t\t\tDetails found\n";

                        loading();

                        system("cls");

                        megamartlogo();

                        cout<<"\n\n\t\t\t\t\t\t\t===============================================";
                        cout<<"\n\t\t\t\t\t\t\t|             ADMINISTRATION PORTAL           |";
                        cout<<"\n\t\t\t\t\t\t\t|         Individual Monitoring Details       |";
                        cout<<"\n\t\t\t\t\t\t\t===============================================";
                        cout<<"\n\t\t\t\t\t\t\t***********************************************";
                        cout<<"\n\t\t\t\t\t\t\t      2021 Monitoring Information of " <<name;
                        cout<<"\n\t\t\t\t\t\t\t***********************************************"; 


                        jan1=jan*wh;
                        saljan1=jan*sal;

                        feb1=feb*wh;
                        salfeb1=feb*sal;

                        march1=march*wh;
                        salmarch1=march*sal;

                        april1=april*wh;
                        salapril1=april*sal;

                        may1=may*wh;
                        salmay1=may*sal;

                        june1=june*wh;
                        saljune1=june*sal;

                        july1=july*wh;
                        saljuly1=july*sal;

                        aug1=aug*wh;
                        salaug1=aug*sal;

                        sept1=sept*wh;
                        salsept1=sept*sal;

                        oct1=oct*wh;
                        saloct1=oct*sal;

                        saltotal=jan+feb+march+april+may+june+july+aug+sept+oct;
                        salwh=jan1+feb1+march1+april1+may1+june1+july1+aug1+sept1+oct1;
                        salsal=saljan1+salfeb1+salmarch1+salapril1+salmay1+saljune1+saljuly1+salaug1+salsept1+saloct1;
                        
                        
                        
                        
                        
                        
                        
                        cout<<"\n\n\t\t\t\t\t\t\t           Breif Information: ";
                        cout<<"\n\t\t\t\t\t\t\t Total Attendance  : "<<saltotal;
                        cout<<"\n\t\t\t\t\t\t\t Total Work Hour   : "<<salwh<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Total Salary      : BDT "<<salsal;

                        cout<<"\n\n\t\t\t\t\t\t\t         Monthwise Information: ";
                        
                        cout<<"\n\n\t\t\t\t\t\t\t January :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<jan;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<jan1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljan1;

                        cout<<"\n\n\t\t\t\t\t\t\t February :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 28";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<feb;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<feb1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salfeb1;

                        cout<<"\n\n\t\t\t\t\t\t\t March :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<march;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<march1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salmarch1;

                        cout<<"\n\n\t\t\t\t\t\t\t April :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<april;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<april1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salapril1;

                        cout<<"\n\n\t\t\t\t\t\t\t May :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<may;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<may1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salmay1;

                        cout<<"\n\n\t\t\t\t\t\t\t June :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<june;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<june1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljune1;

                        cout<<"\n\n\t\t\t\t\t\t\t July :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<july;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<july1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljuly1;

                        cout<<"\n\n\t\t\t\t\t\t\t August :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<aug;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<aug1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salaug1;

                        cout<<"\n\n\t\t\t\t\t\t\t September :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<sept;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<sept1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salsept1;

                        cout<<"\n\n\t\t\t\t\t\t\t October :";

                        cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                        cout<<"\n\t\t\t\t\t\t\t Attended     : "<<oct;
                        cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<oct1<<" HOUR";
                        cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saloct1;
                    
                        cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                        cin.get();
                        cin.get();

                        Individuial_Monitoring();




                    }
                    else
                    {

                        cout<<"\n\t\t\t\t\t\t\t\t   Details not found!\n";

                        cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                        cin.get();

                        cin.get();

                        Individuial_Monitoring();
                    }

            }
        }
        case 2:
        {
            string id,name,designation,doj;
            int wh,jan,feb,march,april,may,june,july,aug,sept,oct;
            int wh1,jan1,feb1,march1,april1,may1,june1,july1,aug1,sept1,oct1;
            int saljan1,salfeb1,salmarch1,salapril1,salmay1,saljune1,saljuly1,salaug1,salsept1,saloct1;

            int sal,salsal,saltotal,salwh;

            string searchuser;

            cout<<"\n\t\t\t\t\t\t\t Enter The Employee ID : ";
            cin>>searchuser;

            fstream file;
            file.open("Employee_Monitoring.txt",ios::in);

            while(file>>id>>name>>designation>>doj>>sal>>wh>>jan>>feb>>march>>april>>may>>june>>july>>aug>>sept>>oct)
            {

                if(id==searchuser)
                {

                    cout<<"\n\t\t\t\t\t\tDetails found\n";

                    loading();

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t|             ADMINISTRATION PORTAL           |";
                    cout<<"\n\t\t\t\t\t\t\t|         Individual Monitoring Details       |";
                    cout<<"\n\t\t\t\t\t\t\t===============================================";
                    cout<<"\n\t\t\t\t\t\t\t***********************************************";
                    cout<<"\n\t\t\t\t\t\t\t      2021 Monitoring Information of " <<name;
                    cout<<"\n\t\t\t\t\t\t\t***********************************************"; 


                    jan1=jan*wh;
                    saljan1=jan*sal;

                    feb1=feb*wh;
                    salfeb1=feb*sal;

                    march1=march*wh;
                    salmarch1=march*sal;

                    april1=april*wh;
                    salapril1=april*sal;

                    may1=may*wh;
                    salmay1=may*sal;

                    june1=june*wh;
                    saljune1=june*sal;

                    july1=july*wh;
                    saljuly1=july*sal;

                    aug1=aug*wh;
                    salaug1=aug*sal;

                    sept1=sept*wh;
                    salsept1=sept*sal;

                    oct1=oct*wh;
                    saloct1=oct*sal;

                    saltotal=jan+feb+march+april+may+june+july+aug+sept+oct;
                    salwh=jan1+feb1+march1+april1+may1+june1+july1+aug1+sept1+oct1;
                    salsal=saljan1+salfeb1+salmarch1+salapril1+salmay1+saljune1+saljuly1+salaug1+salsept1+saloct1;
                    
                    
                    
                    
                    
                    
                    
                    cout<<"\n\n\t\t\t\t\t\t\t           Breif Information: ";
                    cout<<"\n\t\t\t\t\t\t\t Total Attendance  : "<<saltotal;
                    cout<<"\n\t\t\t\t\t\t\t Total Work Hour   : "<<salwh<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Total Salary      : BDT "<<salsal;

                    cout<<"\n\n\t\t\t\t\t\t\t         Monthwise Information: ";
                    
                    cout<<"\n\n\t\t\t\t\t\t\t January :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<jan;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<jan1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljan1;

                    cout<<"\n\n\t\t\t\t\t\t\t February :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 28";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<feb;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<feb1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salfeb1;

                    cout<<"\n\n\t\t\t\t\t\t\t March :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<march;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<march1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salmarch1;

                    cout<<"\n\n\t\t\t\t\t\t\t April :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<april;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<april1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salapril1;

                    cout<<"\n\n\t\t\t\t\t\t\t May :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<may;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<may1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salmay1;

                    cout<<"\n\n\t\t\t\t\t\t\t June :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<june;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<june1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljune1;

                    cout<<"\n\n\t\t\t\t\t\t\t July :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<july;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<july1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saljuly1;

                    cout<<"\n\n\t\t\t\t\t\t\t August :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<aug;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<aug1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salaug1;

                    cout<<"\n\n\t\t\t\t\t\t\t September :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 31";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<sept;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<sept1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<salsept1;

                    cout<<"\n\n\t\t\t\t\t\t\t October :";

                    cout<<"\n\t\t\t\t\t\t\t Work Days    : 30";
                    cout<<"\n\t\t\t\t\t\t\t Attended     : "<<oct;
                    cout<<"\n\t\t\t\t\t\t\t Hours Worked : "<<oct1<<" HOUR";
                    cout<<"\n\t\t\t\t\t\t\t Salary       : BDT "<<saloct1;
                
                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();
                    cin.get();

                    Individuial_Monitoring();




                }
                else
                {

                    cout<<"\n\t\t\t\t\t\t\t\t   Details not found!\n";

                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();

                    cin.get();

                    Individuial_Monitoring();
                }

            }
        }

        case 3:
        {

            employee_monitoring();

            break;



        }
        default:
        {
        
            cout<<"\n\t\t\t\t\t\t\tSorry, You entered wrong choice. Kindly try again"<<endl;

            Individuial_Monitoring();

            break;

        }

    }



}



void revenue()
{

    int ch;

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
    cout<<"\n\t\t\t\t\t\t\t|              Revenue                |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|        1. Revenue By Employee       |";
    cout<<"\n\t\t\t\t\t\t\t|        2. Revenue By Customer       |";
    cout<<"\n\t\t\t\t\t\t\t|        3. Revenue By Date           |";
    cout<<"\n\t\t\t\t\t\t\t|        4. Return                    |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter your choice : ";
    
    cin>>ch;

    switch(ch)
    {
        case 1:
        {

            string Employee_ID1,Employee_ID,Name,Phone_No,date,number;
            cout<<"\n\t\t\t\t\t\t\t Enter Employee ID: ";
            cin>>Employee_ID1;

            int sales2;
            int sales=0;

            int sum2;
            int sum=0;

            fstream rev;
            rev.open("Revenue.txt",ios::in);
            /*
            ofstream Revenue("Revenue.txt",ios::app);
            Revenue<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<sum2<<' '<<Phone_No<<' '<<Name;*/

            cout<<"\n\t\t\t\t\t\tDetails found\n";

            loading();

            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
            cout<<"\n\t\t\t\t\t\t\t|              Revenue                |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";

            cout<<"\n\t\t\t\t\t\t\t Revenue Data From Employee ID : "<<Employee_ID1;

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t|  SOLD BY   |         SOLD TO          |    INVOICE NUMBER     |      DATE     |   PROFIT | SELLING PRICE |";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                

            

                while(rev>>date>>number>>Employee_ID>>sum2>>sales2>>Phone_No>>Name)
                {
                    if(Employee_ID==Employee_ID1)
                    {
                        
                        cout<<"\n\t\t\t|     "<<Employee_ID<<"    |\t\t"<<Name<<"\t\t|\t"<<number<<"\t\t|  "<<date<<" \t|    "<<sum2<<"\t   |"<<"      "<<sales2<<"\t   |"<<endl<<"\t\t\t------------------------------------------------------------------------------------------------------------";

                        sum+=sum2+0;
                            
                        sales+=sales2+0; 

                    }

                    
    
                }

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t\t               Total Revenue Data Generated From Employee: "<<Employee_ID1<<" is BDT "<<sum<<" TK";
            cout<<"\n\t\t\t\t                Total Sales Data Generated From Employee: "<<Employee_ID1<<" is BDT "<<sales<<" TK";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                            

                    
        

            cout<<"\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();

            cin.get();

            revenue();


        }

        case 2:
        {
            string Employee_ID1,Employee_ID,Name,Phone_No,date,number;
            cout<<"\n\t\t\t\t\t\t\t Enter Customer Name: ";
            cin>>Employee_ID1;

            int sales2;
            int sales=0;

            int sum2;
            int sum=0;

            fstream rev;
            rev.open("Revenue.txt",ios::in);
            /*
            ofstream Revenue("Revenue.txt",ios::app);
            Revenue<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<sum2<<' '<<Phone_No<<' '<<Name;*/

            cout<<"\n\t\t\t\t\t\tDetails found\n";

            loading();

            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
            cout<<"\n\t\t\t\t\t\t\t|              Revenue                |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";

            cout<<"\n\t\t\t\t\t\t\t Revenue Data From Customer: "<<Employee_ID1;

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t|  SOLD BY   |         SOLD TO          |    INVOICE NUMBER     |      DATE     |   PROFIT | SELLING PRICE |";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                

            

                while(rev>>date>>number>>Employee_ID>>sum2>>sales2>>Phone_No>>Name)
                {
                    if(Name==Employee_ID1)
                    {
                        
                        cout<<"\n\t\t\t|     "<<Employee_ID<<"    |\t\t"<<Name<<"\t\t|\t"<<number<<"\t\t|  "<<date<<" \t|    "<<sum2<<"\t   |"<<"      "<<sales2<<"\t   |"<<endl<<"\t\t\t------------------------------------------------------------------------------------------------------------";

                        sum+=sum2+0;
                            
                        sales+=sales2+0; 

                    }

                    
    
                }

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t\t               Total Revenue Data Generated From Customer: "<<Employee_ID1<<" is BDT "<<sum<<" TK";
            cout<<"\n\t\t\t\t                Total Sales Data Generated From Customer: "<<Employee_ID1<<" is BDT "<<sales<<" TK";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                            

                    
        

            cout<<"\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();

            cin.get();

            revenue();
            


        }


        case 3:
        {

            string Employee_ID1,Employee_ID,Name,Phone_No,date,number;
            cout<<"\n\t\t\t\t\t\t\t Enter Date: ";
            cin>>Employee_ID1;

            int sales2;
            int sales=0;

            int sum2;
            int sum=0;

            fstream rev;
            rev.open("Revenue.txt",ios::in);
            /*
            ofstream Revenue("Revenue.txt",ios::app);
            Revenue<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<sum2<<' '<<Phone_No<<' '<<Name;*/

            cout<<"\n\t\t\t\t\t\tDetails found\n";

            loading();

            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|        ADMINISTRATION PORTAL        |";
            cout<<"\n\t\t\t\t\t\t\t|              Revenue                |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";

            cout<<"\n\t\t\t\t\t\t\t Revenue Data From Date: "<<Employee_ID1;

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t|  SOLD BY   |         SOLD TO          |    INVOICE NUMBER     |      DATE     |   PROFIT | SELLING PRICE |";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                

            

                while(rev>>date>>number>>Employee_ID>>sum2>>sales2>>Phone_No>>Name)
                {
                    if(date==Employee_ID1)
                    {
                        
                        cout<<"\n\t\t\t|     "<<Employee_ID<<"    |\t\t"<<Name<<"\t\t|\t"<<number<<"\t\t|  "<<date<<" \t|    "<<sum2<<"\t   |"<<"      "<<sales2<<"\t   |"<<endl<<"\t\t\t------------------------------------------------------------------------------------------------------------";

                        sum+=sum2+0;
                            
                        sales+=sales2+0; 

                    }

                    
    
                }

            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
            cout<<"\n\t\t\t\t               Total Revenue Data Generated From Date: "<<Employee_ID1<<" is BDT "<<sum<<" TK";
            cout<<"\n\t\t\t\t                Total Sales Data Generated From Date: "<<Employee_ID1<<" is BDT "<<sales<<" TK";
            cout<<"\n\t\t\t____________________________________________________________________________________________________________";
                            

                    
        

            cout<<"\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();

            cin.get();

            revenue();

        }

        case 4:
        {

            adminmenu();


            break;
        }

        default:
        {
                        
                        
            cout<<"\n\t\t\t\t\t\t\t Sorry! I don't understand that! \n";

            revenue();
            
            break;
        }    


    }
    
        
}

    












//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

void forgot()
{
    int ch;

    loading();

    system("cls");

    megamartlogo();

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





void employeemenu()
{

            string user,pass,u,p;
            int choice;

            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|        Employee Name : "<<user;
            cout<<"\t  |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|     Please Select Your Option       |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|  1.  Customer Invoice               |";
            cout<<"\n\t\t\t\t\t\t\t|  2.  Payment and Transactions       |";
            cout<<"\n\t\t\t\t\t\t\t|  3.  Product Management             |";
            cout<<"\n\t\t\t\t\t\t\t|  4.  Stocks                         |";
            cout<<"\n\t\t\t\t\t\t\t|  5.  Invoice Details                |";
            cout<<"\n\t\t\t\t\t\t\t|  6.  Return to Previous Menu        |";
            cout<<"\n\t\t\t\t\t\t\t***************************************\n";
            cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
            cin>>choice;
            switch (choice) 
    {

        case 1:
        {
            customer_invoice();

            
            
            break;


        }
        
        case 2:
        {

            payment_details_of_an_invoice();

            
        
            break;


        }

        case 3:
        {

            productmanagement();

            break;
                        

        }

        case 4:
        {

            stock();
                        
            

            break;


        }


        case 5:
        {

            invoice_query();

            

            break;


        }

        case 6:
        {

            main();

            break;

        }


        default:
        {
                        
                        
            cout<<"\n\t\t\t\t\t\t\t Sorry! I don't understand that! \n";

            employeemenu();
            
            break;
        }    
                         
    }





}

                /*Emplyee Login*/
void login()
{
    int count;
    string user,pass,u,p;
    system("cls");
    megamartlogo();
    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|   ENTER YOUR EMPLOYEE CREDENTIALS   |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t USERNAME :\t";

    cin>>user;

    ifstream input("database.txt");
    while(input>>u>>p)
    {
        if(u==user)
        {
            cout<<"\n\t\t\t\t\t\t\t Employee Found\t";
                        
            system("cls");
            megamartlogo();
            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|   ENTER YOUR EMPLOYEE CREDENTIALS   |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t Employee Data of 'user'Found\t";
            cout<<"\n\t\t\t\t\t\t\t PASSWORD :\t";
            cin>>pass;

            ifstream input("database.txt");
            while(input>>u>>p)
            {
                if(p==pass)
                {
                    employeemenu();
                        
                    }
                else
                {
                    cout<<"\n\t\t\t\t\t\t\t WRONG PASSWORD!!!";
                    break;

                }
            }
        }

        else
        {
            cout<<"\n\t\t\t\t\t\t\t Employee Not Found!!!";
            break;


        }                  
    }
}





        










/*
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
*/


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
        megamartlogo();
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



void payment_details_of_an_invoice()
{
    system("cls");

    loading();

    megamartlogo();

    

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|        Payment Details Query        |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|  1. Individual Payment Details      |";
    cout<<"\n\t\t\t\t\t\t\t|  2. All Payment And Transaction     |";
    cout<<"\n\t\t\t\t\t\t\t|  3. Returned Payment And Transaction|";
    cout<<"\n\t\t\t\t\t\t\t|  4. Return to Previous Menu         |";
    cout<<"\n\t\t\t\t\t\t\t***************************************\n";
    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
                
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
        {

    //ofstream Payment_Directory("Payment_Directory.txt",ios::app);
    //Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" American_Express_Card";
    //Payment_Directory.close();

            string date,number,Employee_ID,Name,Phone_No,sum,card,cardno,otp;

            string searchuser;

            string searchmobile;

            cout<<"\n\t\t\t\t\t\t\t Enter The Customer Name : ";
            cin>>searchuser;

            cout<<"\n\t\t\t\t\t\t\t Enter The Mobile Number : ";
            cin>>searchmobile;

            ifstream Payment_Directory1("Payment_Directory.txt");

            while(Payment_Directory1>>date>>number>>Employee_ID>>Name>>Phone_No>>sum>>card>>cardno>>otp)
            {
                if(Name==searchuser)
                {
                    cout<<"\n\t\t\t\t\t\tDetails found\n";

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
                    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
                    cout<<"\n\t\t\t\t\t\t\t|        Payment Details Query        |";
                    cout<<"\n\t\t\t\t\t\t\t=======================================";

                    cout<<"\n\n\t\t\t\t\t\t\t          Query of "<<Name;

                    cout<<"\n\n\t\t\t\t\t\t\t        Personal Information: ";

                    cout<<"\n\t\t\t\t\t\t\t Name        : "<<Name;

                    cout<<"\n\n\t\t\t\t\t\t\t        Contact Information: ";

                    cout<<"\n\t\t\t\t\t\t\t Mobile No   : "<<Phone_No;

                    cout<<"\n\n\t\t\t\t\t\t\t       Transaction Information: ";

                    cout<<"\n\t\t\t\t\t\t\t Date        : "<<date;

                    cout<<"\n\t\t\t\t\t\t\t Sold by     : "<<Employee_ID;

                    cout<<"\n\t\t\t\t\t\t\t Payment Type: "<<card;

                    cout<<"\n\t\t\t\t\t\t\t Number      : "<<cardno;

                    cout<<"\n\t\t\t\t\t\t\t Total Paid  : TK "<<sum;
                   
                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();
                    cin.get();

                    payment_details_of_an_invoice();




                }
                else
                {

                    cout<<"\n\t\t\t\t\t\t\t\t   Details not found!\n";

                    cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

                    cin.get();

                    cin.get();

                    payment_details_of_an_invoice();
                }

            }

        break;

        }

        case 2:
        {
            loading();
    
            system("cls");

            megamartlogo();

            string date,number,Employee_ID,Name,Phone_No,sum,card,cardno,otp;

            string searchuser;

            string searchmobile;

            cout<<"\n\t\t\t\t\t\t==========================================================";
            cout<<"\n\t\t\t\t\t\t|                    Employee PORTAL                     |";
            cout<<"\n\t\t\t\t\t\t|                All Payment And Transaction             |";
            cout<<"\n\t\t\t\t\t\t==========================================================";
                            
                            
            cout<<"\n_________________________________________________________________________________________________________________________________________________________________";
            cout<<"\n|  ID   |         NAME          |        MOBILE         |    PAYMENT METHOOD    |         NUMBER        |   TOTAL PAID  |SOLD BY|      DATE     |  INVOICE NO   |";
            cout<<"\n_________________________________________________________________________________________________________________________________________________________________\n";
            
            ifstream Payment_Directory1("Payment_Directory.txt");
            
            while(Payment_Directory1>>date>>number>>Employee_ID>>Name>>Phone_No>>sum>>card>>cardno>>otp)
            {
                cout<<"|  "<<Employee_ID<<"\t|  "<<Name<<"\t\t|     "<<Phone_No<<"\t|    "<<card<<"\t\t|  "<<cardno<<" \t|  \t"<<sum<<" \t|  "<<Employee_ID<<" \t|  "<<date<<" \t|  "<<number<<" \t|  "<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
                                        
            }
            
            
            cout<<"\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();

            cin.get();

            payment_details_of_an_invoice();

        }

        case 3:
        {

            loading();
    
            system("cls");

            megamartlogo();

            string date,number,Employee_ID,Name,Phone_No,sum,card,cardno,otp;

            string searchuser;

            string searchmobile;

            cout<<"\n\t\t\t\t\t\t==========================================================";
            cout<<"\n\t\t\t\t\t\t|                    Employee PORTAL                     |";
            cout<<"\n\t\t\t\t\t\t|             Refund Payment And Transaction             |";
            cout<<"\n\t\t\t\t\t\t==========================================================";
                            
                            
            cout<<"\n\t_________________________________________________________________________________________________________________________________________________";
            cout<<"\n\t|  ID   |         NAME          |        MOBILE         |     REFUND METHOOD    |         NUMBER        |   TOTAL PAID  |SOLD BY|      DATE     |";
            cout<<"\n\t_________________________________________________________________________________________________________________________________________________\n";
            
            ifstream Payment_Directory2("Payment_Directory_Refund.txt");
            
            while(Payment_Directory2>>date>>number>>Employee_ID>>Name>>Phone_No>>sum>>card>>cardno)
            {
                cout<<"\t|  "<<Employee_ID<<"\t|  "<<Name<<"\t\t|     "<<Phone_No<<"\t|    "<<card<<"\t\t|  "<<cardno<<" \t|  \t"<<sum<<" \t|  "<<Employee_ID<<" \t|  "<<date<<" \t|  "<<endl<<"\t-------------------------------------------------------------------------------------------------------------------------------------------------\n";
                                        
            }

            cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

            cin.get();
            cin.get();

            payment_details_of_an_invoice();




        }

        case 4:
        {
            employeemenu();

            break;


        }
        default:
        {
                
            cout<<"\n\t\t\t\t\t\t\t You've made a mistake , Try again..\n"<<endl;

            payment_details_of_an_invoice();

			break;

        }








   // ofstream Payment_Directory("Payment_Directory.txt",ios::app);
    //Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" American_Express_Card";
   // Payment_Directory.close();


    }
}

void invoice_query()
{
    string user,pass,u,p;
    int choice;

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|           Invoice Query             |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Show All Sold Invoices         |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Show All Returned Invoices     |";
    cout<<"\n\t\t\t\t\t\t\t|  3.  Show Invoices By Customer      |";
    cout<<"\n\t\t\t\t\t\t\t|  4.  Show Invoices By Mobile Number |";
    cout<<"\n\t\t\t\t\t\t\t|  5.  Show Invoices By Date          |";
    cout<<"\n\t\t\t\t\t\t\t|  6.  Return to Previous Menu        |";
    cout<<"\n\t\t\t\t\t\t\t***************************************\n";
    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
    cin>>choice;
    switch (choice) 
    {
        case 1:
        {


        }
    }



}


void stock()
{

    int ch;

    string user,pass,u,p;

    string ID,product_name,Unit_price,buying_price,selling_price,Quantity,profit_per_unit,weight;

   

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|            Stock Query              |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Show All Stocks                |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Show Stockes By Name           |";
    cout<<"\n\t\t\t\t\t\t\t|  3.  Return to Previous Menu        |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";

    cout<<"\n\t\t\t\t\t\t\t Enter Your Choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {

            ifstream Stock_Directory1("productinfo.txt");

            //fprintf(Productfile1_8, "\n%d %s %.2lf %.2lf %.2lf %d %.2f" ,ID,product_name,Unit_price,buying_price,selling_price,Quantity,profit_per_unit);
            
            while(Stock_Directory1>>ID>>product_name>>weight>>Unit_price>>buying_price>>selling_price>>Quantity>>profit_per_unit)
            {

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
                    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
                    cout<<"\n\t\t\t\t\t\t\t|         Stock Information           |";
                    cout<<"\n\t\t\t\t\t\t\t=======================================";
                    //cout<<"\n\t\t\t\t\t\t\t Stock Information of : "<<product;
                    cout<<"\n\t\t_____________________________________________________________________________________________________________";
                    cout<<"\n\t\t|  ID   |         NAME          |    WEIGHT     |TOTAL BOUGHT UNIT|    AVAILABE UNIT   |         UNITS      |";
                    cout<<"\n\t\t_____________________________________________________________________________________________________________\n";
                    
                    while(Stock_Directory1>>ID>>product_name>>weight>>Unit_price>>buying_price>>selling_price>>Quantity>>profit_per_unit)
                    {
                        cout<<"\t\t|  "<<ID<<"\t|  "<<product_name<<"\t\t|     "<<weight<<"\t|\t"<<Quantity<<"\t  |    "<<endl<<"\t\t-------------------------------------------------------------------------------------------------------------\n";
                                                
                    }

                    
                //cout<<product_name;

                    

                // employeemenu();
                

                cout<<"\t\t\t\t\t\t\t Press Enter to Return to Previous Page";

                cin.get();

                cin.get();

                stock();




            }


        }

        case 2:
        {
            string product;
            cout<<"\n\t\t\t\t\t\t\t Enter Product Name : ";
            cin>>product;

            ifstream Stock_Directory1("productinfo.txt");

            //fprintf(Productfile1_8, "\n%d %s %.2lf %.2lf %.2lf %d %.2f" ,ID,product_name,Unit_price,buying_price,selling_price,Quantity,profit_per_unit);
            
            while(Stock_Directory1>>ID>>product_name>>weight>>Unit_price>>buying_price>>selling_price>>Quantity>>profit_per_unit)
            {
                if(product==product_name)
                {

                    system("cls");

                    megamartlogo();

                    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
                    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
                    cout<<"\n\t\t\t\t\t\t\t|            Stock Query              |";
                    cout<<"\n\t\t\t\t\t\t\t=======================================";
                    cout<<"\n\t\t\t\t\t\t\t Stock Information of : "<<product;
                    cout<<"\n\t\t_____________________________________________________________________________________________________________";
                    cout<<"\n\t\t|  ID   |         NAME          |    WEIGHT     |TOTAL BOUGHT UNIT|    AVAILABE UNIT   |         UNITS      |";
                    cout<<"\n\t\t_____________________________________________________________________________________________________________\n";
                    
                    while(Stock_Directory1>>ID>>product_name>>weight>>Unit_price>>buying_price>>selling_price>>Quantity>>profit_per_unit)
                    {
                        cout<<"\t\t|  "<<ID<<"\t|  "<<product_name<<"\t\t|     "<<weight<<"\t|\t"<<Quantity<<"\t  |    "<<endl<<"\t\t-------------------------------------------------------------------------------------------------------------\n";
                                                
                    }

                    
                //cout<<product_name;

                    

                // employeemenu();
                }

                cout<<"\t\t\t\t\t\t\t Press Enter to Return to Previous Page";

                cin.get();

                cin.get();

                stock();




            }


        }

        case 3:
        {
            
            employeemenu();

            break;


        }
        default:
        {
                
            cout<<"\n\t\t\t\t\t\t\t You've made a mistake , Try again..\n"<<endl;

            stock();

			break;

        }

    }


    
      






}








void adlogin()
{

        int count;
        string user,pass,u,p;
        system("cls");
        megamartlogo();
        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|    ENTER YOUR ADMIN CREDENTIALS     |";
        cout<<"\n\t\t\t\t\t\t\t=======================================\n\n";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t USERNAME :\t";
        cin>>user;
        cout<<"\n\t\t\t\t\t\t\t PASSWORD :\t";
        cin>>pass;
/*
        ifstream input("admindatabase.txt");
        while(input>>u>>p)
        {*/
                if(user=="1" && pass=="1")
                {
                        /*count=1;
                        system("cls");*/
                        adminmenu();
                        
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

void about()
{
    system("cls");
    megamartlogo();


}

void shutdown()
{
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

}





void productmanagement()
{

    system("cls");

    megamartlogo();

    FILE *Productfile1_8;

    char product_name[100];

    int Quantity, ID,choice,choice1,editpart_no,Q1,Q2,del_ID, edition_choice;

    float Unit_price, buying_price, selling_price, current_BP, current_SP, edited_sp, edited_bp, edited_quantity;

    float profit_per_unit = selling_price - buying_price;

    //int edited_quantity = Q1-Q2;

    Productfile1_8 = fopen("productinfo.txt" , "a");


     /*
    printf("Product Managing Section\n\n");
    printf("01.Add a New Product\n");
    printf("02.Edit a Product\n");
    printf("03.Remove a Product\n");
    printf("04.Return to main menu\n\n");
    printf("Please Enter your choice:");*/

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|     Please Select Your Option       |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Add a New Product              |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Edit a Product                 |";
    cout<<"\n\t\t\t\t\t\t\t|  3.  Remove a Product               |";
    cout<<"\n\t\t\t\t\t\t\t|  4.  Return to main menu            |";
    cout<<"\n\t\t\t\t\t\t\t***************************************\n";
            
    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
    scanf("%d" , &choice1);

    if (Productfile1_8==NULL)
    {
        printf("\n\t\t\t\t\t\t\tSorry!!No Information exist! ");

    }
    //product add part

    else if(choice1==1)
    {

        system("cls");

        megamartlogo();

        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
        cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
        cout<<"\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|            Add Prouct               |";
        cout<<"\n\t\t\t\t\t\t\t***************************************";

        //printf("\n\t\t\t\t\t\t\tAdd Product:");

        printf("\n\t\t\t\t\t\t\t Enter product name: ");

        fflush(stdin); //as gets not work
        gets(product_name);

        printf("\t\t\t\t\t\t\t Product Id: ");
        scanf("%d" , &ID);

        printf("\t\t\t\t\t\t\t Unit Price: ");
        scanf("%f", &Unit_price);

        printf("\t\t\t\t\t\t\t Buying Price per unit: ");
        scanf("%f", &buying_price);

        printf("\t\t\t\t\t\t\t Selling Price per unit: ");
        scanf("%f", &selling_price);

        printf("\t\t\t\t\t\t\t Quantity: ");
        scanf("%d",&Quantity);

        printf("\t\t\t\t\t\t\t Successfully added !");



        printf("\n\t\t\t\t\t\t\t Your profit per unit = %.2f\n" ,profit_per_unit);

        fprintf(Productfile1_8, "\n%d %s %.2lf %.2lf %.2lf %d %.2f" ,ID,product_name,Unit_price,buying_price,selling_price,Quantity,profit_per_unit);
        
        

        cout<<"\n\t\t\t\t\t\t\t Press Enter to Return to Previous Page\n";

        cin.get();

        cin.get();

        loading();

    }

    //Edition Part
    else if(choice1==2)
    {
        system("cls");

        megamartlogo();

        Productfile1_8 = fopen("productinfo.txt" , "a");

        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
        cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
        cout<<"\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|            Edit product             |";
        cout<<"\n\t\t\t\t\t\t\t***************************************";      
        cout<<"\n\t\t\t\t\t\t\t|  1.  Edit product by name.          |";
        cout<<"\n\t\t\t\t\t\t\t|  2.  Edit product by ID             |";
        cout<<"\n\t\t\t\t\t\t\t***************************************";

        printf("\n\t\t\t\t\t\t\t Enter your choice: ");
        scanf("%d" , &choice);

        //edit by product name
        
        if(choice==1 || choice==2)
        {

            if(choice ==1 )
            {

                //printf("\nEdit by Product Name:\n\n");
                printf("\n\t\t\t\t\t\t\t Enter the product name: ");
                
                fflush(stdin); //as gets not work
                gets(product_name);
            }

            else if(choice==2)
            {
                //printf("\nEdit by Product ID\n\n");

                printf("\n\t\t\t\t\t\t\t Enter the Product ID: ");
                scanf("%d" , &ID);

            }

        printf("\n\t\t\t\t\t\t\t You can edit these parts:\n\n");
        printf("\n\t\t\t\t\t\t\t 01.Quantity\n");
        printf("\n\t\t\t\t\t\t\t 02.Buying price per unit\n");
        printf("\n\t\t\t\t\t\t\t 03.Selling Price per unit\n\n");
        printf("\n\t\t\t\t\t\t\t Enter the number of the part that you want to edit:");

        scanf("%d" , &editpart_no);

        if(editpart_no==1)
        {
            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|       Edit Product Quantity         |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";      
            cout<<"\n\t\t\t\t\t\t\t|  1.  Reduce Product Quantity        |";
            cout<<"\n\t\t\t\t\t\t\t|  2.  Increase product Quantity      |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";

            printf("\n\t\t\t\t\t\t\t Enter your choice: ");

            scanf("%d" , &edition_choice);

            if(edition_choice==1)
            {

                printf("\n\t\t\t\t\t\t\t Current quantity: ");//need manually showed
                scanf("%d" , &Q1);

                printf("\n\t\t\t\t\t\t\t Enter how much quantity you reduce: ");
                scanf("%d" ,&Q2);

                

                printf("\n\t\t\t\t\t\t\t Edited quantity = %d\n" , edited_quantity);

                if(choice==1)
                {
                    ofstream Productfile1_1("productinfo.txt",ios::app);
                    Productfile1_1<<'\n'<<ID<<' '<<product_name<<' '<<Unit_price<<' '<<buying_price<<' '<<selling_price<<' '<<edited_quantity<<' '<<profit_per_unit;
/*
                    Productfile1_8 = fopen("productinfo.txt" , "a");
                    fprintf(Productfile1_8, "\n%d %s %.2lf %.2lf %.2lf %d %.2f" ,ID,product_name,Unit_price,buying_price,selling_price,edited_quantity,profit_per_unit);
        */

                }
                
                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %s %.2lf %.2lf %.2lf %d %.2f" ,ID,product_name,Unit_price,buying_price,selling_price,edited_quantity,profit_per_unit);
           
                }

            }

            else if(edition_choice == 2)
            {
                printf("\n\t\t\t\t\t\t\t Current quantity : ");
                scanf("%d" , &Q1);

                printf("\n\t\t\t\t\t\t\t How much quantity you want to Increase:");
                scanf("%d" ,&Q2);

                int edited_quantity = Q1+Q2;

                printf("Edited quantity = %d\n",edited_quantity );

                if(choice==1)
                {
                    fprintf(Productfile1_8, "\n%s %d" ,product_name,edited_quantity);

                }

                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %d" ,ID,edited_quantity);

                }

            }

            printf("\n\t\t\t\t\t\t\t Quantity edited successfully!\n");

            cout<<"\n\t\t\t\t\t\t\t Press Enter to Return to Previous Page\n\t\t\t\t\t\t\t ";

            cin.get();

            cin.get();

            loading();

        }


        else if(editpart_no==2)
        {


            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|         Edit Product Price          |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";      
            cout<<"\n\t\t\t\t\t\t\t|  1.  Reduce Product Buying Price    |";
            cout<<"\n\t\t\t\t\t\t\t|  2.  Increase product Buying Price  |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";

            printf("\n\t\t\t\t\t\t\t Enter your choice: ");

            scanf("%d" , &edition_choice);

            if(edition_choice==1)
            {
                printf("\n\t\t\t\t\t\t\t Current Buying price per unit: ");
                scanf("%f" , &current_BP);

                printf("\t\t\t\t\t\t\t Enter Buying price per unit to reduce: ");
                scanf("%f" ,&buying_price);

                float edited_bp = current_BP - buying_price;

                printf("\n\t\t\t\t\t\t\t Edited Buying price per unit = %.2f\n" ,edited_bp );
                
                if(choice==1)
                {
                    fprintf(Productfile1_8, "\n%s %.2f" ,product_name,edited_bp);

                }

                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %.f" ,ID,edited_bp);

                }

            }

            else if(edition_choice == 2)
            {

                printf("\n\t\t\t\t\t\t\t Current Buying price per unit: ");
                scanf("%f" , &current_BP);

                printf("\t\t\t\t\t\t\t Enter Buying price per unit to Increase: ");
                scanf("%f" ,&buying_price);

                float edited_bp = current_BP + buying_price;

                printf("\n\t\t\t\t\t\t\t Edited Buying price per unit = %.f\n" ,edited_bp );
                
                if(choice==1)
                {
                    fprintf(Productfile1_8, "\n%s %.2f" ,product_name,edited_bp);

                }
            
                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %.2f" ,ID,edited_bp);

                }

            }

            printf("\n\t\t\t\t\t\t\t Buying price per unit edited successfully!\n");

            cout<<"\n\t\t\t\t\t\t\t Press Enter to Return to Previous Page\n\t\t\t\t\t\t\t ";

            cin.get();

            cin.get();

            loading();


        }


        else if(editpart_no==3)
        {
            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            cout<<"\n\t\t\t\t\t\t\t|          Edit Product Price         |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";      
            cout<<"\n\t\t\t\t\t\t\t|  1.  Reduce Product Selling Price    |";
            cout<<"\n\t\t\t\t\t\t\t|  2.  Increase product Selling Price  |";
            cout<<"\n\t\t\t\t\t\t\t***************************************";
            
            printf("\n\t\t\t\t\t\t\t Enter your choice please: ");
            scanf("%d" , &edition_choice);

            if(edition_choice==1)
            {
                printf("\n\t\t\t\t\t\t\t Current Selling price per unit: ");
                scanf("%f" , &current_SP);

                printf("\n\t\t\t\t\t\t\t Enter Selling price per unit to reduce:");
                scanf("%f" ,&selling_price);

                float edited_sp = current_SP - selling_price;
                
                printf("\n\t\t\t\t\t\t\t Edited Selling price per unit = %.2f\n" ,edited_sp );
                
                if(choice==1)
                {
                    fprintf(Productfile1_8, "\n%s %.2f" ,product_name,edited_sp);
            
                }
                
                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %.2f" ,ID,edited_sp);
            
                }
            
            
            }
            
            else if(edition_choice == 2)
            {
                printf("\n\t\t\t\t\t\t\t Current Selling price per unit: ");
                scanf("%f" , &current_SP);

                printf("\n\t\t\t\t\t\t\t Enter Selling price per unit to reduce: ");
                scanf("%f" ,&selling_price);
            
                float edited_sp = current_SP + selling_price;

                printf("\n\t\t\t\t\t\t\t Edited Selling price per unit = %.2f\n" ,edited_sp );

                if(choice==1)
                {
                    fprintf(Productfile1_8, "\n%s %.2f" ,product_name,edited_sp);

                }
            
                else if(choice==2)
                {
                    fprintf(Productfile1_8, "\n%d %.2f" ,ID,edited_sp);
            
            
                }
            }

            printf("Selling price per unit edited successfully!\n");

            cout<<"\n\t\t\t\t\t\t\t Press Enter to Return to Previous Page\n\t\t\t\t\t\t\t ";

            cin.get();

            cin.get();

            loading();

        }
    //fprintf(Productfile1_8, "\n%s %d %.2lf %.2lf" ,product_name,edited_quantity,edited_bp,edited_sp);//quantity file open
    }


    }

    //Remove Product
    else if(choice1==3)
    {

        system("cls");

        megamartlogo();

        cout<<"\n\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
        cout<<"\n\t\t\t\t\t\t\t|         Product Management          |";
        cout<<"\n\t\t\t\t\t\t\t=======================================";
        cout<<"\n\t\t\t\t\t\t\t***************************************";
        cout<<"\n\t\t\t\t\t\t\t|           Remove Product            |";
        cout<<"\n\t\t\t\t\t\t\t***************************************"; 

       // printf("Remove Product:\n");

        char ID1[1];

        char ID2[1];

        string weight,unit_price;

        printf("\n\t\t\t\t\t\t\t Enter Product ID :");
        scanf("%d" , &ID1);

        FILE *file1, *tempfile1;
        file1= fopen("productinfo.txt", "r");
        tempfile1= fopen("tempproductinfo.txt", "w");


        while(fscanf(file1,  "%s %s %s %s %s %s %s", &ID2, &product_name, &weight,&unit_price,&buying_price, &selling_price, &edited_quantity, &profit_per_unit)!=EOF)       
        {
            if(strcmp(ID1,ID2)==0)
            {

                cout<<"\n\n\t\t\t\t\t\t\tProduct Data Found On Database";


            }
            if(strcmp(ID1,ID2)!=0)
            {
                fprintf(tempfile1, "%s %s %s %s %s %s %s\n", &ID2, &product_name, &weight,&unit_price,&buying_price, &selling_price, &edited_quantity, &profit_per_unit);
                   
            }



        }
        fclose(file1);
        fclose(tempfile1);

                
        cout<<"\n\n\t\t\t\t\t\t\tData Deletation Successfull";

        cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Return to Previous Page";

        cin.get();

        cin.get();

        productmanagement();









        /*
        fflush(stdin);
        gets(product_name);*/
        
        // printf("Product Id: ");
        











    /*char filename[100];
    char str[100];
    FILE *fp1 , *fp2;
    //filename="productinfo.txt";
    int del_lineNo, cu_lineNo=0;
    printf("Enter file name: ");
    scanf("%s" , filename);
    fp1 = fopen(filename, "r");

    rewind(fp1);

   printf("\n\nEnter delete line no. :");
   scanf("%d" , &del_lineNo);

    fp2 = fopen("replica.txt" , "w");

    while ( fgets(str, 99, fp1) != NULL )
    {
        cu_lineNo++;
        if(cu_lineNo != del_lineNo ){
            fputs(str, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("replica.txt" , filename);
    fp1 = fopen(filename, "r");
    fclose(fp1);*/

    
    }
    else if(choice1==4)
    {
      employeemenu();

    }
    else
    {

        productmanagement();

    }

  
  
}



///////////////////////////////Niloy Singha 2012020204//////////////////////////////////////////////////////////

void customer_invoice()
{

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|         Customer Invoice            |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Create New Invoice             |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Refund of Invoice              |";
    cout<<"\n\t\t\t\t\t\t\t|  3.  Return to previous Menu        |";
    cout<<"\n\t\t\t\t\t\t\t***************************************\n";
    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";
                
    int choice;
    cin>>choice;

    switch (choice) 
    {

        case 1:
        {
           
           create_new_invoice(); 
 
            
            break;


        }
        
        case 2:
        {

            refund_invoice();
        
            break;


        }

        case 3:
        {
                        
            employeemenu();

            break;


        }


        default:
        {
                        
                        
            cout<<"\n\t\t\t\t\t\t\t Sorry! I don't understand that! \n";

            customer_invoice();
            
            break;
        }    
                         
    }





}



void create_new_invoice()
{

    system("cls");

    loading();

    megamartlogo();

    

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|        New Customer Invoice         |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";

    string x1;

    string Employee_ID;
    cout<<"\n\t\t\t\t\t\t\t Employee_ID: ";
    cin>>Employee_ID;

    string Number;
    cout << "\t\t\t\t\t\t\t Type Order no: ";
    cin >>Number;
	
    string date;
	cout<<"\t\t\t\t\t\t\t Enter Date : ";
	cin>>date;

    string Name;
    cout<< "\t\t\t\t\t\t\t Enter Customer Name: ";
    cin>>Name;

    string Phone_No;
    cout<<"\t\t\t\t\t\t\t Phone No: ";
    cin>>Phone_No;

    int Product;
    cout << "\t\t\t\t\t\t\t How many Product would you like to order: ";
	cin >>Product;

    string id,name,net,sellingprice,buyingprice,quantity,profit,sellingprice1;
    
    double sellingprice2;
    double buyingprice2;
    double profit2;

    

    cout<<"\n\t\t\t\t_________________________________________________________________________________________";
    cout<<"\n\t\t\t\t|  ID   |         NAME          |      WEIGHT      |      PRICE         |    QUANTITY   |";
    cout<<"\n\t\t\t\t_________________________________________________________________________________________\n";
                       
                     

    fstream file;
    file.open("productinfo.txt",ios::in);


    
    while(file>>id>>name>>net>>sellingprice>>buyingprice>>sellingprice1>>quantity>>profit)
    {
        cout<<"\t\t\t\t|  "<<id<<"\t|  "<<name<<"\t\t|      "<<net<<"\t   |      "<<sellingprice<<" \t|    "<<quantity<<" \t|"<<endl<<"\t\t\t\t-----------------------------------------------------------------------------------------"<<endl;
                                  
    }
    

    

    
    //order taking

    int x, menu2[10];

	int i;

	double amount[100];

    int quantity1;

    string id1;

    int sum=0;
    int sum1=0;
    int sum2=0;

    int Unit_Total;
    int Unit_Total2;
        
    for (i=0; i<Product; i++)
    {
        
        cout << "\n\t\t\t\t\t\t\t Please enter your selection : ";
        cin>> id1;

        fstream file;
        file.open("productinfo.txt",ios::in);

        while(file>>id>>name>>net>>sellingprice>>buyingprice2>>sellingprice2>>quantity>>profit2)
        {
            if(id==id1)
            {
                cout << "\n\t\t\t\t\t\t\t Product Name: " <<name;
                cout << "\n\t\t\t\t\t\t\t How many Product do you want: ";
                
                cin >> quantity1;
                sum+=quantity1 * sellingprice2;
                Unit_Total=quantity1 * sellingprice2;
                Unit_Total2=quantity1 * profit2;
                sum2+= Unit_Total-Unit_Total2;
                //sum;
                //sum1++;

                ofstream temp_invoice("temporary_invoice.txt",ios::app);
                temp_invoice<<'\n'<<id1<<' '<<name<<' '<<sellingprice<<' '<<quantity1<<' '<<Unit_Total;

                ofstream invoicedirectory("invoicedirectory.txt",ios::app);
                invoicedirectory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum;

                ofstream Revenue("Revenue.txt",ios::app);
                Revenue<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Unit_Total2<<' '<<sum<<' '<<Phone_No<<' '<<Name;

            }

        }
    }

    //sum2=sum-sum1;

    cout<<"\n\t\t\t\t_________________________________________________________________________________________";
    cout<<"\n\t\t\t\t                       The amount You need to pay is: "<<sum<<" TK"<<endl;
    cout<<"\n\t\t\t\t_________________________________________________________________________________________";
    cout<<"\n\t\t\t\t|                             Order Taken Successfully                                  |";
    cout<<"\n\t\t\t\t|                        Go to Reciept Menu and Pay The Bill                            |";
    cout<<"\n\t\t\t\t|                         Press Enter to Go to Recipt Menu                              |";
    cout<<"\n\t\t\t\t|_______________________________________________________________________________________|";

    cin.get();

    cin.get();

    system("cls") ;

    loading();

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|        Bill Payment Portal          |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t_________________________________________________________________________________________";
    cout<<"\n\t\t\t\t|\t   NAME   \t|\tUNIT PRICE\t|\tQUANTITY\t|\tPRICE\t|";
    cout<<"\n\t\t\t\t_________________________________________________________________________________________";



    fstream file1;
    file1.open("temporary_invoice.txt",ios::in);


    
    while(file1>>id1>>name>>sellingprice>>quantity1>>Unit_Total)
    {
        cout<<"\n\t\t\t\t|\t"<<name<<"\t|\t  "<<sellingprice<<"\t\t|\t    "<<quantity1<<"\t\t|\t"<<Unit_Total<<"\t|"<<endl<<"\t\t\t\t-----------------------------------------------------------------------------------------";
   

    }
    
    cout<<"\n\t\t\t\t_________________________________________________________________________________________";
    cout<<"\n\t\t\t\t                       The amount You need to pay is: "<<sum<<" TK";
    cout<<"\n\t\t\t\t                         Press Enter to Go to Payment Menu                              ";
    cout<<"\n\t\t\t\t_________________________________________________________________________________________"; 

    cin.get();

    cin.get();

    system("cls") ;

    loading();

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|             Payment                 |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|     Select Your Payment Methood     |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";      
    cout<<"\n\t\t\t\t\t\t\t|  1.  Visa                           |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Mastercard                     |";
    cout<<"\n\t\t\t\t\t\t\t|  1.  American Express               |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  bKash                          |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Nagad                          |";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Rocket                         |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";

    int pc;
    string card, otp;
    cin>>pc;

    



    if(pc==1)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Visa Card Number: ";
        cin>>card;

        cout<<"\n\t\t\t\t\t\t\t Please Swipe Your Visa Card To the Pos Macthine And then Press Enter ";

        cin.get();

        cin.get();

        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" Visa_Card "<<card<<' '<<otp;
        Payment_Directory.close();

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==2)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Master Card Number: ";
        cin>>card;

        cout<<"\n\t\t\t\t\t\t\t Please Swipe Your Master Card To the Pos Macthine And then Press Enter ";

        cin.get();

        cin.get();

        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" Master_Card "<<card<<' '<<otp;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==3)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your American Express Card Number: ";
        cin>>card;

        cout<<"\n\t\t\t\t\t\t\t Please Swipe Your American Express Card To the Pos Macthine And then Press Enter ";

        cin.get();

        cin.get();

        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" American_Express_Card "<<card<<' '<<otp;
        Payment_Directory.close();

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==4)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your bKash Number: ";
        cin>>card;



        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" bKash "<<card<<' '<<otp;
        Payment_Directory.close();

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==5)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Nagad Number: ";
        cin>>card;


        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" Nagad "<<card<<' '<<otp;
        Payment_Directory.close();

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==6)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Rocket Number: ";
        cin>>card;


        loading();
        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Enter OTP Sent to The RMN: ";
        cin>>otp;

        loading();
        loading();

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream Payment_Directory("Payment_Directory.txt",ios::app);
        Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" Rocket "<<card<<' '<<otp;
        Payment_Directory.close();

        cin.get();

        cin.get();

        customer_invoice();


    }
    else
    {
        

    }

    

}


void refund_invoice()
{

    string user,pass,u,p;

    char mobile1[15];

    char Phone_No[15];

    char Name[15],name2[15],Employee_ID[15],Number[15],date[15],sum[15];

    system("cls");

    megamartlogo();

    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|              REFUND                 |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
 
    cout<<"\n\t\t\t\t\t\t\t Please Enter the Mobile Number: ";
    cin>>mobile1;

    cout<<"\n\t\t\t\t\t\t\t Please Enter the Name: ";
    cin>> name2;


    FILE *refund;
    refund= fopen("invoicedirectory.txt", "r");
    //refund2= fopen("invoicedirectorytemp.txt", "w");

    
    /*
    ofstream invoicedirectory("invoicedirectory.txt",ios::app);
                invoicedirectory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum;

*/  
    while(fscanf(refund, "%s %s %s %s %s %s", &date, &Number, &Employee_ID, &Name, &Phone_No, &sum)!=EOF)       
    {
        if(strcmp(mobile1,Phone_No)==0)
        {
            cout<<"\n\t\t\t\t\t\tDetails found\n";

            loading();

            system("cls");

            megamartlogo();

            cout<<"\n\n\t\t\t\t\t\t\t=======================================";
            cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
            cout<<"\n\t\t\t\t\t\t\t|              REFUND                 |";
            cout<<"\n\t\t\t\t\t\t\t=======================================";


            cout<<"\n\t\t\t\t\t\t\t        Personal Information: ";

            cout<<"\n\t\t\t\t\t\t\t Name            : "<<Name;

            cout<<"\n\n\t\t\t\t\t\t\t        Contact Information: ";

            cout<<"\n\t\t\t\t\t\t\t Mobile No       : "<<Phone_No;

            
            cout<<"\n\n\t\t\t\t\t\t\t        Invoice Information: ";

            cout<<"\n\t\t\t\t\t\t\t Sold By         : "<<Employee_ID;

            cout<<"\n\t\t\t\t\t\t\t Invoice Number  : "<<Number;

            cout<<"\n\t\t\t\t\t\t\t Date of Purchase: "<<date;

            cout<<"\n\t\t\t\t\t\t\t Ammount         : "<<sum;
            
            cout<<"\n\n\t\t\t\t\t\t\tPress Enter to Initiate Return";

            cin.get();

            cin.get();

            ofstream refund21("Payment_Directory_Refund.txt",ios::app);
            
            refund21<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum;



            return_payment();

            

            

        }
        if(strcmp(mobile1,Phone_No)!=0)
        {
            ofstream refund2("invoicedirectorytemp.txt",ios::app);
            refund2<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum;

            //fprintf(refund2, "%s %s %s %s %s %s", &date, &Number, &Employee_ID, &Name, &Phone_No, &sum);
        }



    }

    fclose(refund);

    remove("invoicedirectory.txt");
    rename("invoicedirectorytemp.txt","invoicedirectory.txt");

        

}



void return_payment()
{
    system("cls") ;

    loading();

    megamartlogo();

    



    cout<<"\n\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t|          EMPLOYEE PORTAL            |";
    cout<<"\n\t\t\t\t\t\t\t|              Refund                 |";
    cout<<"\n\t\t\t\t\t\t\t=======================================";
    cout<<"\n\t\t\t\t\t\t\t***************************************";
    cout<<"\n\t\t\t\t\t\t\t|     Select Your Refund Methood      |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";      
    cout<<"\n\t\t\t\t\t\t\t|  1.  Visa                           |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Mastercard                     |";
    cout<<"\n\t\t\t\t\t\t\t|  1.  American Express               |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  bKash                          |";
    cout<<"\n\t\t\t\t\t\t\t|  2.  Nagad                          |";
    cout<<"\n\t\t\t\t\t\t\t|  1.  Rocket                         |";
    cout<<"\n\t\t\t\t\t\t\t***************************************";

    cout<<"\n\t\t\t\t\t\t\t Enter Your choice: ";

    int pc;
    int card, otp;
    cin>>pc;

    if(pc==1)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Visa Card Number: ";
        cin>>card;

        ofstream refund22("Payment_Directory_Refund.txt",ios::app);
            
        refund22<<" Visa_Card"<<' '<<card;



        loading();
        loading();
        loading();

        

        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==2)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Master Card Number: ";
        cin>>card;

        loading();
        loading();
        loading();


        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream refund23("Payment_Directory_Refund.txt",ios::app);
            
        refund23<<" Master_Card"<<' '<<card;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==3)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your American Express Card Number: ";
        cin>>card;

        loading();
        loading();
        loading();


        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream refund24("Payment_Directory_Refund.txt",ios::app);
            
        refund24<<" American_Express"<<' '<<card;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==4)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your bKash Number: ";
        cin>>card;



        loading();
        loading();
        loading();



        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream refund25("Payment_Directory_Refund.txt",ios::app);
            
        refund25<<" bKash"<<' '<<card;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==5)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Nagad Number: ";
        cin>>card;


        loading();
        loading();
        loading();


        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream refund26("Payment_Directory_Refund.txt",ios::app);
            
        refund26<<" Nagad"<<' '<<card;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else if(pc==6)
    {
        cout<<"\n\t\t\t\t\t\t\t Enter Your Rocket Number: ";
        cin>>card;


        loading();
        loading();
        loading();


        cout<<"\n\t\t\t\t\t\t\t Transaction Successfull!";

        cout<<"\n\t\t\t\t\t\t\t Press Enter To Return";

        ofstream refund27("Payment_Directory_Refund.txt",ios::app);
            
        refund27<<" Rocket"<<' '<<card;

        cin.get();

        cin.get();

        customer_invoice();


    }
    else
    {
        

    }

    

}


   // ofstream Payment_Directory("Payment_Directory.txt",ios::app);
    //Payment_Directory<<'\n'<<date<<' '<<Number<<' '<<Employee_ID<<' '<<Name<<' '<<Phone_No<<' '<<sum<<" American_Express_Card";
   // Payment_Directory.close();







            
            


////////////////////////////THE END OF PROGRAM//////////////////////////////////////////
