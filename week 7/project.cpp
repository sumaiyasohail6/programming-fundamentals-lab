#include <iostream>
#include <conio.h>
using namespace std;

main()
{

    int total_students = 1000; // total size
    int index = 5;

    // data structures

    string nameArray[total_students] = {"ali", "ammar", "sara", "ahmad", "zain"};
    int ageArray[total_students] = {19, 20, 21, 21, 20};
    float matricArray[total_students] = {1050, 980, 940, 960, 880};
    float interArray[total_students] = {980, 850, 900, 870, 820};
    float ecatArray[total_students] = {350, 280, 300, 330, 270};
    string pref1Array[total_students] = {"CE", "CS", "IT", "CS", "EE"};
    string pref2Array[total_students] = {"CS", "CE", "CE", "IT", "CS"};
    string pref3Array[total_students] = {"EE", "CS", "CS", "CE", "EE"};
    float aggregateArray[total_students];

    while (true)
    {
        // main header of UMS
        system("cls");
        cout << "--------------------------------------------------" << endl;
        cout << "------University Admission Management System------" << endl;
        cout << "--------------------------------------------------" << endl;

        cout << "User Menu " << endl;
        cout << "1 Admin " << endl;
        cout << "2 Student" << endl;
        cout << "3 to exit" << endl;
        cout << "Choose option:";
        string userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // write admin code here
            int countattempt = 0;

            for (int i = 0; i < 3; i++)
            {

                system("cls");
                cout << "Admin menu : login attempt:" << i + 1 << endl;
                cout << "Enter Username: ";
                string username;
                cin >> username;
                cout << "Enter password :";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Login Successful " << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students " << endl;
                        cout << "2 Search Student " << endl;
                        cout << "3 Update Student record " << endl;
                        cout << "4 Generate Merit list " << endl;
                        cout << "5 Delete Record by name" << endl;
                        cout << " 6 Logout " << endl;
                        cout << "Choose Option : ";
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tECAT\tPref1\tPref2\tPref3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption =="2")
                        {
                            // find student by name
                            cout << "Enter name you want to search :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update record
                            cout << "Enter name you want to update record :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "-----Old Record------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tECAT\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update" << endl;

                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter your age: ";
                                int age;
                                cin >> age;
                                cout << "Enter your matric marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter your FSC marks: ";
                                float inter;
                                cin >> inter;
                                cout << "Enter your ECAT marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS ,CE ,EE as your preferences " << endl;
                                cout << "Enter your 1st pref: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd pref: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd pref: ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = inter;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminOption == "4")
                        { // generate Merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100.0 * 0.3;
                                aggregateArray[i] = aggregate;
                            }

                            // sorting data on basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i +1 ; j < index; j++)
                                {
                                    if (aggregateArray[i] < aggregateArray[j])
                                    {

                                        // swapping name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping matric
                                        float tempmatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempmatric;

                                        // swapping inter
                                        float tempinter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempinter;

                                        // swapping ecat

                                        float tempecat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempecat;

                                        //swpping pref1
                                        string temppref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j]= temppref1;

                                        //swapping pref2
                                        string temppref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j]= temppref2;

                                        //swapping pref3
                                        string temppref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j]= temppref3;

                                        // swapping aggregate
                                        float tempaggre= aggregateArray[i];
                                        aggregateArray[i] = aggregateArray[j];
                                        aggregateArray[j] = tempaggre;

                                    }
                                }
                            }
                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggregateArray[i] << endl;
                                }
                            }
                        }
                        else if (adminOption =="5")
                        {
                            // delete student record
                            cout << "Enter name you want to delete record :";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << "Record of " << name << " Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected" << endl;
                        }
                        cout << "Press any key to continue..";
                        getch();
                    }
                    cout << "Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "Press any key to continue..";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write student code here
            system("cls");
            cout << "Welcome to UMS Student Menu " << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter your age: ";
            int age;
            cin >> age;
            cout << "Enter your matric marks: ";
            float matric;
            cin >> matric;
            cout << "Enter your FSC marks: ";
            float inter;
            cin >> inter;
            cout << "Enter your ECAT marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS ,CE ,EE as your preferences " << endl;
            cout << "Enter your 1st pref: ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd pref: ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd pref: ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = inter;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your data has been saved" << endl;
            cout << "Press any key to continue..";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }
    }
    cout << "Thanks for using this software";
}