//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//prototypes
void modify1();
void modify2();
void modify3();
void displayData();
void save();

//globals
int age1, age2, age3, option=0;

string name1, name2, name3;

ifstream ifile;
ofstream ofile;
bool saved;

int main()
{

    ifile.open( "students.txt" );
    //ADD YOUR CODE FROM HERE, INCLUDE YOUR FUNCTIONS
   if(ifile)
   { 
        ifile >> age1;
        ifile.ignore();
        getline( ifile, name1);
    
        ifile >> age2;
        ifile.ignore();
        getline( ifile, name2);
    
        ifile >> age3;
        ifile.ignore();
        getline( ifile, name3);
    
        ifile.close();
   }
    while( true )
    {
         // Display menu
         cout  << "1: Modify 1\n"
            << "2: Modify 2\n"
            << "3: Modify 3\n"
            << "4: Display Data\n"
            << "5: Save Data\n" 
            << "6: Quit" << endl;

        cout << "Option: ";
        cin >> option;

        if(option == 1)
        {
            modify1();
        }
        else if(option == 2)
        {
            modify2();
        }
        else if(option == 3)
        {
            modify3();
        }
        else if(option == 4)
        {
            displayData();
        }
        else if(option == 5)
        {
            save();
        }
        else if(option == 6)
        {
            cout << "Ending program" << endl;
            break;
        }
        ifile.close();
    }


}

void modify1()
{
    cout << "Enter a new age: ";
    cin >> age1;
    cin.ignore();
    cout << "Enter a new name: ";
    getline(cin, name1);
}

void modify2()
{
    cout << "Enter a new age: ";
    cin >> age2;
    cin.ignore();
    cout << "Enter a new name: ";
    getline(cin, name2);
}

void modify3()
{
    cout << "Enter a new age: ";
    cin >> age3;
    cin.ignore();
    cout << "Enter a new name: ";
    getline(cin, name3);
}

void displayData()
{
    ifile.open("students.txt");
    if (!ifile)
    {
        cout << "Error opening flle\n\n" << endl;
    }
    else
    {
        cout << age1 << ":" << name1 << endl;
        cout << age2 << ":" << name2 << endl;
        cout << age3 << ":" << name3 << endl;
        ifile.close();
    }
}

void save()
{
    ofile.open("students.txt"); 
    if (!ofile)
    {
        cout << "Error opening file for writing!\n\n" << endl;
    }
    else
    {
        ofile << age1 << endl
        << name1 << endl
        << age2 << endl
        << name2 << endl
        << age3 << endl
        << name3 << endl;
        ofile.close();
        cout << "Data saved successfully!" << endl;
        saved = true;
    }
}