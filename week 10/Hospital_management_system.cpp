#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    int total_patients = 1000; // size
    int index = 5;

    // parallel arrays to store patient data
    // Data Structures
    string patientNames[total_patients] = {"ali", "amna", "sara", "ahmad", "zain"};
    int patientAges[total_patients] = {20, 32, 50, 60, 46};
    string diseases[total_patients] = {"flu", "fever", "injury", "cold", "allergy"};
    string appointmentHistory[total_patients] = {"System Started", "Admin Logged in"};

    // variable to track counts
    int patientCount = 0;
    int historyCount = 2;
    string mainChoice;
    // Main application loop
    while (true)
    {
        system("cls");
        cout << "------------------------------------------------------" << endl;
        cout << "-------------HOSPITAL MANAGEMENT SYSTEM---------------" << endl;
        cout << "------------------------------------------------------" << endl;

        cout << " 1. Admin " << endl;
        cout << " 2. User " << endl;
        cout << " 3. Exit " << endl;
        cout << " Select option:";
        cin >> mainChoice;
        cout << "You choose " << mainChoice << endl;

        if (mainChoice == "1")
        {
            // write admin code here
            string adminChoice;
            while (true)
            {
                system("cls");
                cout << "Admin Menu" << endl;

                cout << "1. Register New Patient" << endl;       // create
                cout << "2. View All Patients" << endl;          // read
                cout << "3. Update Patient Information" << endl; // update
                cout << "4. Discharge Patient" << endl;          // delete
                cout << "5. View Treatment History" << endl;
                cout << "6. Logout" << endl;
                cout << "Choose OPtion:";
                cin >> adminChoice;
                if (adminChoice == "1")
                {
                    cout << "Enter Name: " << endl;
                    cin >> patientNames[index];
                    cout << "Enter Age: " << endl;
                    cin >> patientAges[index];
                    cout << "Enter Disease: " << endl;
                    cin >> diseases[index];
                    appointmentHistory[historyCount++]="Registered Patient:"+ patientNames[index];
                    index++;
                    cout << "Patient Registered!" << endl;
                    getch();
                }
                else if (adminChoice == "2")
                { // Read
                    system("cls");
                    cout << "---Current Patients Record---" << endl;

                    cout << "Name\tAge\tDisease" << endl;
                    for (int i = 0; i < index; i++)
                    {
                        if (patientNames[i] != " ")
                        {
                            cout << patientNames[i] << "\t" << patientAges[i] << "\t" << diseases[i] << endl;
                        }
                    }
                    cout << "\nPress any key to Continue...";
                    getch();
                
                }
                else if (adminChoice == "3")
                { // Update
                    int id;
                    cout << "Enter Patient ID to Update:" << endl;
                    cin >> id;
                    cout << "Enter Updated Disease: " << endl;
                    cin >> diseases[id - 1];
                    cout << "Record Updated!" << endl;
                    getch();
                }
                else if (adminChoice == "4")
                { // Delete
                    int id;
                    cout << "Enter Patient ID to Discharge:" << endl;
                    cin >> id;
                    if(id<=0 ||id>index)
                    {
                        cout<<"Invalid ID";
                    }
                    else
                    {
                        appointmentHistory[historyCount++]="Discharged Patient:"+ patientNames[id-1];
                    
                    }
                    for (int i = id - 1; i < index - 1; i++)
                    {
                        patientNames[i] = patientNames[i + 1];
                        patientAges[i] = patientAges[i + 1];
                        diseases[i] = diseases[i + 1];
                    }
                    index--;
                    cout << "Patient Discharged!" << endl;
                    getch();
                }
                else if (adminChoice == "5")
                { // History
                    system("cls");
                    cout << "---Treatment and Appointment History---" << endl;
                    if (historyCount == 0)
                    {
                        cout << "No History Records Found" << endl;
                    }
                    else
                    {
                        for (int i = 0; i < historyCount; i++)
                        {
                            cout << i + 1 << "." << appointmentHistory[i] << endl;
                        }
                    }
                    cout << "Enter any key to Continue...";
                    getch();
                }
                else if (adminChoice == "6")
                {
                    break;
                }
            }
        }
        else if (mainChoice == "2")
        {
            string userOption;
            while (true)
            {
                
                cout << "---Patient Portal---" << endl;
                cout << "1. Search for Record" << endl;
                cout << "2. Sort Patients by Age" << endl;
                cout << "3. Book Appointment" << endl;
                cout << "4. Logout" << endl;
                cout << "Choose Option:" ;
                cin >> userOption;

                if (userOption == "1")
                { // Search
                    string searchName;
                    bool found=false;
                    cout << "Enter Name to Search: ";
                    cin >> searchName;
                    for (int i = 0; i < index; i++)
                    {
                        if (patientNames[i] == searchName)
                        {
                            cout << "Record Found! "<< endl;
                            cout<<"ID: "<<i+1<<"\tName: "<<patientNames[i]<<"\tAge: "<<patientAges[i]<<diseases[i]<<endl;
                            found = true;
                        }
                    }
                    if (!found)
                    {
                        cout<<"No Record found with that name"<<endl;
                    }
                    cout<<"Press any key to continue..."<<endl;
                    getch();
                }
                else if (userOption == "2")
                { // Sorting data on basis of age
                    for (int i = 0; i < index-1; i++)
                    {
                        for (int j = i + 1; j < index; j++)
                        {
                            if (patientAges[i] > patientAges[j])
                            {
                                // swapping name
                                string temp = patientNames[i];
                                patientNames[i] = patientNames[j];
                                patientNames[j] = temp;

                                // swappimg age
                                int tempAge = patientAges[i];
                                patientAges[i] = patientAges[j];
                                patientAges[j] = tempAge;

                                // swapping diseases
                                string tempdisease = diseases[i];
                                diseases[i] = diseases[j];
                                diseases[j] = tempdisease;
                            }
                        }
                    }
                    cout<<"Sorted Patients"<<endl;
                    for(int i=0;i<index;i++)
                    {
                        cout<<i+1<<"."<<patientNames[i]<<"\tage: "<<patientAges[i]<<"\tDisease:"<<diseases[i]<<endl;
                    }
                    cout << "Patients Sorted By Age!" << endl;
                    getch();
                }
                else if (userOption == "3")
                { 
                
                    appointmentHistory[historyCount++] = "New Appointment Booked";
                    cout << "Appointment Booked!"<<endl;
                }
                else if (userOption == "4")
                {
                    break;
                }
            }
        }
        else if (mainChoice == "3")
        {
            cout<<"Exiting Program...."<<endl;
            break;
        }
    }
    return 0;
}
