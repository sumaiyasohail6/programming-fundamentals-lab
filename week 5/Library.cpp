#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int choice;
    string book;
    int totalBooks = 0;

    while (true) {
        cout << "\n--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if(choice==1){
            cout<<"Enter Book Name : ";
            cin>>book;
            cout<<"You Added Book "<<book;
        }        
        else if(choice==2){
           cout<<"Enter the Book Name you want to View: ";
            cin>>book;
            cout<<"Book is  "<<book;
        }        
        else if(choice==3){
            cout<<"Enter Book Name you want to Borrow : ";
            cin>>book;
            cout<<"You Borrow Book "<<book;
        }        
        else if(choice==4){
            cout<<"Enter Book Name You want to issue: ";
            cin>>book;
            cout<<"You issue book"<<book;
        }        
         if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
            break; 
        }
        else {
            cout << "Invalid choice! Please select between 1-5." << endl;
        }
    }

}