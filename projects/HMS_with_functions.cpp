#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

const int SIZE = 1000;

// ===== FUNCTIONS =====

void registerPatient(string names[], int ages[], string diseases[], int &index, string history[], int &historyCount)
{
    system("cls");

    cout << "===== REGISTER PATIENT =====\n";

    cout << "Enter Name: ";
    cin >> names[index];

    cout << "Enter Age: ";
    cin >> ages[index];

    cout << "Enter Disease: ";
    cin >> diseases[index];

    history[historyCount++] = "Registered: " + names[index];

    index++;

    cout << "\nPatient Registered Successfully!";
    getch();
}

void viewPatients(string names[], int ages[], string diseases[], int index)
{
    system("cls");

    cout << "===== PATIENT LIST =====\n\n";

    if (index == 0)
    {
        cout << "No Patients Found!";
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            cout << i + 1 << ". "
                 << names[i]
                 << " | Age: " << ages[i]
                 << " | Disease: " << diseases[i] << endl;
        }
    }

    getch();
}

void searchPatient(string names[], int ages[], string diseases[], int index)
{
    system("cls");

    string searchName;
    bool found = false;

    cout << "Enter Name to Search: ";
    cin >> searchName;

    for (int i = 0; i < index; i++)
    {
        if (names[i] == searchName)
        {
            cout << "\nRecord Found!\n";
            cout << "ID: " << i + 1
                 << " | Name: " << names[i]
                 << " | Age: " << ages[i]
                 << " | Disease: " << diseases[i] << endl;

            found = true;
        }
    }

    if (!found)
        cout << "\nNo Record Found!";

    cout << "\n\nPress any key to continue...";
    getch();
}

void sortPatients(string names[], int ages[], string diseases[], int index)
{
    system("cls");

    for (int i = 0; i < index - 1; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (ages[i] > ages[j])
            {
                swap(ages[i], ages[j]);
                swap(names[i], names[j]);
                swap(diseases[i], diseases[j]);
            }
        }
    }

    cout << "===== SORTED PATIENTS (BY AGE) =====\n\n";

    for (int i = 0; i < index; i++)
    {
        cout << i + 1 << ". "
             << names[i]
             << " | Age: " << ages[i]
             << " | Disease: " << diseases[i] << endl;
    }

    cout << "\nPress any key to continue...";
    getch();
}

void updatePatient(string names[], string diseases[], int index, string history[], int &historyCount)
{
    system("cls");

    int id;
    cout << "Enter Patient ID: ";
    cin >> id;

    if (id <= 0 || id > index)
    {
        cout << "Invalid ID!";
    }
    else
    {
        cout << "Enter New Disease: ";
        cin >> diseases[id - 1];

        history[historyCount++] = "Updated: " + names[id - 1];

        cout << "Updated Successfully!";
    }

    getch();
}

void deletePatient(string names[], int ages[], string diseases[], int &index, string history[], int &historyCount)
{
    system("cls");

    int id;
    cout << "Enter Patient ID to Discharge: ";
    cin >> id;

    if (id <= 0 || id > index)
    {
        cout << "Invalid ID!";
    }
    else
    {
        history[historyCount++] = "Discharged: " + names[id - 1];

        for (int i = id - 1; i < index - 1; i++)
        {
            names[i] = names[i + 1];
            ages[i] = ages[i + 1];
            diseases[i] = diseases[i + 1];
        }

        index--;

        cout << "Patient Discharged!";
    }

    getch();
}

void viewHistory(string history[], int historyCount)
{
    system("cls");

    cout << "===== HISTORY =====\n\n";

    if (historyCount == 0)
        cout << "No History Found!";
    else
    {
        for (int i = 0; i < historyCount; i++)
        {
            cout << i + 1 << ". " << history[i] << endl;
        }
    }

    getch();
}

// ===== MAIN FUNCTION =====

int main()
{
    int index=3;
    int historyCount=3;
    string names[SIZE]={"ali","sara","ahmed"};
    int ages[SIZE]={20,25,30};
    string diseases[SIZE]={"flu","fever","cough"};
    string history[historyCount++]={"registered ali","registered sara","registered ahmed"};

    string mainChoice;

    while (true)
    {
        system("cls");

        cout << "===== HOSPITAL MANAGEMENT SYSTEM =====\n";
        cout << "1. Admin Panel\n";
        cout << "2. User Panel\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> mainChoice;

        // ===== ADMIN =====
        if (mainChoice == "1")
        {
            string choice;

            while (true)
            {
                system("cls");

                cout << "===== ADMIN MENU =====\n";
                cout << "1. Register Patient\n";
                cout << "2. View Patients\n";
                cout << "3. Update Patient\n";
                cout << "4. Discharge Patient\n";
                cout << "5. View History\n";
                cout << "6. Exit\n";
                cout << "Enter choice: ";
                cin >> choice;

                if (choice == "1")
                    registerPatient(names, ages, diseases, index, history, historyCount);
                else if (choice == "2")
                    viewPatients(names, ages, diseases, index);
                else if (choice == "3")
                    updatePatient(names, diseases, index, history, historyCount);
                else if (choice == "4")
                    deletePatient(names, ages, diseases, index, history, historyCount);
                else if (choice == "5")
                    viewHistory(history, historyCount);
                else if (choice == "6")
                    break;
            }
        }

        // ===== USER =====
        else if (mainChoice == "2")
        {
            string choice;

            while (true)
            {
                system("cls");

                cout << "===== USER MENU =====\n";
                cout << "1. Search Patient\n";
                cout << "2. Sort Patients\n";
                cout << "3. Exit\n";
                cout << "Enter choice: ";
                cin >> choice;

                if (choice == "1")
                    searchPatient(names, ages, diseases, index);
                else if (choice == "2")
                    sortPatients(names, ages, diseases, index);
                else if (choice == "3")
                    break;
            }
        }

        else if (mainChoice == "3")
            break;
    }

    return 0;
}