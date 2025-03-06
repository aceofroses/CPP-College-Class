//DO NOT MODIFY THIS SECTION
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream ofile;
    int nStud, age;
    string name;
    cout << "Number of students: ";
    cin >> nStud;
    cin.ignore();
    ofile.open( "students.txt" );
    //ADD YOUR CODE FROM HERE
    int i = 0;
    while( i < nStud )
    {
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();

        ofile << "Age: " << age << " " << "Name: " << name << endl;
        i++;
    } 
    
    ofile.close();
    return 0;

}
