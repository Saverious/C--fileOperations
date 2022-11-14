// A C++ program for file-system operations

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void readFile(){
    string cred;
    ifstream Read("credentials.txt");

    while(getline(Read,cred)){
        cout<<cred<<endl;
    }

    Read.close();
}

void writeFile(){
    string name;
    int password;

    cout<<"Name:\n";
    cin>>name;

    cout<<"Password:\n";
    cin>>password;

    // create a file and open it in append mode
    ofstream Write;
    Write.open("credentials.txt",ios_base::app);

    // write into the file
    Write<<"                      \n   "<<name<<"          "<<password; 

    // close the file
    Write.close();
}

int main()
{
    int choice;

    cout<<"Main menu\n1. Read\n2. Write\n3. Login\n0. Exit\n";
    cin>>choice;

    switch(choice){
        case 1:
        readFile();
        main();
        break;

        case 2:
        writeFile();
        main();
        break;

        case 0:
        return 0;
        break;

        default:
        return 0;
        break;
    }
}
