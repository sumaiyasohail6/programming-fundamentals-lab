#include<iostream>
using namespace std;
int main()
{
    int n;
    string book[100];
    string name;
    while(true)
    {
        cout<<"LIBRARY MANAGEMENT SYSTEM "<<endl;
        cout<<"1. Add Books"<<endl;
        cout<<"2. View Books"<<endl;
        cout<<"3. Borrow Books"<<endl;
        cout<<"4. View Books"<<endl;
        cout<<"5. Exit "<<endl;
        int choice;
        cout<<"Enter the choice(1-5) ";
        cin >> choice;
        if(choice==1)
        {
            cout<<"How many books you want to entered ";
            cin >> n;
            cout<<"The name "<<n<<" books should written below: "<<endl;
            for(int i=0 ; i < n ; i++)
            {
                cin >> book[i];
            }
        }
        
        else if(choice==2)
        {
            cout<<"These books are available in library "<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<book[i]<<endl;
            }
        }
        else if(choice==3)
        {
            bool found=false;
            cout<<"Enter the book name, you want to borrow "<<endl;
            cin >> name;
            for(int i=0 ; i< n ; i++)
            {
                if(book[i]==name)
                {
                    cout<<"Book Found "<<endl;
                    cout<<"You Borrowed"<<name<<"  book from library "<<endl;
                    book[i]={};
                    found=true;
                    break;
                }
                
            }
            if(!found)
                {
                    cout<<"Book is not available now"<<endl;
                }
        }
        else if(choice==4)
        {
          cout<<"These books are available in library "<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<book[i]<<endl;
            }
        }
        else if(choice==5)
        {
            cout<<"Thanks for your visting "<<endl;
            break;
        }
        else 
        {
            cout<<"Invalid .Enter the valid choice (1-6)"<<endl;
        }
        
    }
    
}