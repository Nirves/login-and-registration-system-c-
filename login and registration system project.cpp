#include <iostream>
#include <fstream> 
#include <cstring>
using namespace std;
bool IsloggedIn()
{
    string username, password, un, pw; 

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
    cin >> password;

    
    ifstream read("data.txt"); 
    getline(read, un);
    getline(read, pw); 

    

    if (un == username && pw == password)
    {
        return true;   
    }
    else
    {
        return false;
    }
}

int main()
{
   
    int choice;

    cout << "1 : Register \n2 :Login\nYour choice :";
    cin >> choice;
    if (choice == 1)
    {
        string username, password;

        cout << "select a username :";
        cin >> username;
        cout << "select a password :";
        cin >> password;

        

        ofstream file;
        
        file.open("data.txt");

  
        file<<username<<endl;
        file<<password<<endl; //the data is registered into our file
        file.close();

    
    main();
    }


    else if(choice==2)
    {
        
       bool status =IsloggedIn();

       if(!status) 
       {
          cout<<"Invalid user name password :"<<endl;
          system("PAUSE");


          return 0;
       }
       else 
       {
           cout<<"Successfully Logged in"<<endl;
           system("pause");
           return 1;
       }
    }
}
