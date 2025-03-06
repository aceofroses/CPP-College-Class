#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //1. Define Variables
    int age;
    string name;
    ifstream ifs;
    
    //2. Open file
    ifs.open( "student.txt" );
    //3. For each line in file
        // 3.1 Read Age
    while( ifs >> age)
    {
        // 3.2 Read Name
        getline( ifs, name);
        // 3.3 Display age and name
        cout << "Age: " << age << "\0" << "-" << name << endl;
    }
    //4. Close the file
    ifs.close();
    return 0;
}
