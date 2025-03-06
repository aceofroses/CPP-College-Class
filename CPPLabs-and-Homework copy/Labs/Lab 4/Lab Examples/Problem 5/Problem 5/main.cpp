#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 1. Declare variables and constants
    int age1, age2, age3;
    char option;
    string name1, name2, name3;
    fstream ifs;
    ofstream ofs;
    // 2. Open and read the file
    ifs.open( "student.txt" );
    
    ifs >> age1;
    ifs.ignore();
    getline( ifs, name1);
    
    ifs >> age2;
    ifs.ignore();
    getline( ifs, name2);
    
    ifs >> age3;
    ifs.ignore();
    getline( ifs, name3);
    
    ifs.close();
    // 3. Repeat forever
    while( true )
    {
        // 3.1 Display Menu
        cout<< "1: Modify 1\n"
        << "2: Modify 2\n"
        << "3: Modify 3\n"
        << "4: Display Data\n"
        << "5: Save Data\n"
        << "6: Quit" << endl;
        // 3.2 Read option
        cout << "Option: ";
        cin >> option;
        // 3.3 Select Option
        switch(option)
        {
                //If option is modify 1
            case '1':
                // Modify 1
                cout << "Enter a new age: ";
                cin >> age1;
                cin.ignore();
                cout << "Enter a new name: ";
                getline(cin, name1);
                break;
                //If option is modify 2
            case '2':
                // Modify 2
                cout << "Enter a new age: ";
                cin >> age2;
                cin.ignore();
                cout << "Enter a new name: ";
                getline(cin, name2);
                break;
                //If option is modify 3
            case '3':
                // modify 3
                cout << "Enter a new age: ";
                cin >> age3;
                cin.ignore();
                cout << "Enter a new name: ";
                getline(cin, name3);
                break;
                //If option is 4
            case '4':
                //Display Data
                if (!ifs)
                {
                    cout << "Error opening flle\n\n" << endl;
                }
                else
                {
                    cout << age1 << ":" << name1 << endl;
                    cout << age2 << ":" << name2 << endl;
                    cout << age3 << ":" << name3 << endl;
                    ifs.close();
                }
                break;
                //If option is 5
            case '5':
                ofs.open("student.txt"); // This will append by default instead of truncating
                if (!ofs)
                {
                    cout << "Error opening file for writing!\n\n" << endl;
                }
                else
                {
                    ofs << age1 << endl
                    << name1 << endl
                    << age2 << endl
                    << name2 << endl
                    << age3 << endl
                    << name3 << endl;
                    ofs.close();
                    cout << "Data saved successfully!" << endl;
                }
                break;
                //If option is 6
                
            case '6':
                //Quit
                ifs.close();
                return 0;
        }
    }
}
