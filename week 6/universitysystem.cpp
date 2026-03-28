#include <iostream>
using namespace std;

main()
{
    string username, password;

    string studentName[3] ;
    int studentAge[3] ;
    int count = 0;
    string courseName[3] ;

    int choice;

    
    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;

        if(username == "admin" && password == "1234")
        {
            cout << "Login Successful"<<endl;
            break;
        }
        else
        {
            cout << "Wrong Login"<<endl;
        }

        if(i == 3 && !(username == "admin" && password == "1234"))
        {
            cout << "Too many attempts. Program End."<<endl;
            return 0;
        }
    }

    for(int i = 1; i <= 5; i++)
    {
        cout << endl<<"---- University Management System ----"<<endl;
        cout << "1. Add Student"<<endl;
        cout << "2. View Student"<<endl;
        cout << "3. Add Courses"<<endl;
         cout << "4. view Courses"<<endl;
        cout << "5. Exit"<<endl;

        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {  
        
            cout << "Enter Student Name: ";
           cin >> studentName[count];

            cout << "Enter Student Age: ";
            cin >> studentAge[count];
           count++;
            cout << "Student Added Successfully"<<endl;
            
        }
        else if(choice == 2)
        {for( int j=0; j<count; j++){
          cout <<j+1<< ": " <<studentName[j]<<"  :    "<<studentAge[j]<< endl;
        }
        }
        
    
         else if(choice == 3)
        {
            for(int m=0;m<3; m++){
            cout << "Enter Course Name: ";
            cin >> courseName[m];

            cout << "Course Added: " << courseName[m] << endl;}
        }
        else if(choice == 4){
            cout<<"Added courses are:  "<<endl;
            for(int n=0; n<3; n++){
                cout <<courseName[n]<<endl;
            }
        }
        else if(choice == 5)
        {
            cout << "Program Exit"<<endl;
            break;
        }
        else
        {
            cout << "Invalid Choice"<<endl;
        }
    }

}
