#include <iostream>
#include <fstream>
using namespace std;

const int MAX_ENTRIES = 50; // Maximum allowed entries

int main()
{
    // 1. Declare variables and arrays
    int ages[MAX_ENTRIES]; 
    string names[MAX_ENTRIES];
    int highestAge, lowestAge, totalAges, index;
    string highestName, lowestName;
    double average;
    char option;
    int numEntries = 0; // Track the number of entries
    fstream ifs;
    ofstream ofs;

    // 2. Open and read the file
    ifs.open("student.txt");

    if (!ifs.is_open())
    {
        cout << "File not found. A new file will be created when saving.\n";
    }
    else
    {
        while (numEntries < MAX_ENTRIES && ifs >> ages[numEntries])
        {
            ifs.ignore();
            getline(ifs, names[numEntries]);
            numEntries++;
        }
        ifs.close();
    }

    // 3. Menu loop
    while (true)
    {
        // Display Menu
        cout << "\nMenu:\n"
             << "1: Modify an Entry\n"
             << "2: Display Data\n"
             << "3: Add New Entry\n"
             << "4: Save Data\n"
             << "5: Show Oldest, Youngest, and Average Age\n"
             << "6: Quit the Program\n"
             << "Option: ";
        cin >> option;
        cin.ignore();

        switch (option)
        {
            case '1': // Modify an Entry
                cout << "Enter entry number (1-" << numEntries << ") to modify: ";
                cin >> index;
                cin.ignore();

                if (index >= 1 && index <= numEntries)
                {   
                    cout << "Enter a new age: ";
                    cin >> ages[index - 1];
                    cin.ignore();
                    cout << "Enter a new name: ";
                    getline(cin, names[index - 1]);
                }
                else
                {
                    cout << "Invalid entry number.\n";
                }
                break;

            case '2': // Display Data
                if (numEntries == 0)
                {
                    cout << "No data available.\n";
                }
                else
                {
                    for (int i = 0; i < numEntries; i++)
                    {
                        cout << i + 1 << ": " << ages[i] << " - " << names[i] << endl;
                    }
                }
                break;

            case '3': // Add New Entry

                cout << "Enter 'Done' in the name field when finished" << endl << endl;
                while(numEntries < MAX_ENTRIES)
                {

                    cout << "Enter age: ";
                    cin >> ages[numEntries];
                    cin.ignore();
                    if(ages[numEntries] )
                    cout << "Enter name: ";
                    getline(cin, names[numEntries]);

                    // Check if user wants to exit
                    if (names[numEntries] == "Done" || names[numEntries] == "done") 
                    {
                        cout << "Exiting entry mode.\n";
                        numEntries--;
                        break;
                    }
                    numEntries++;
                }
                if(numEntries >= MAX_ENTRIES)
                {
                    cout << "Maximum entries reached. Cannot add more.\n";
                    break;
                }
                continue;

            case '4': // Save Data
                ofs.open("student.txt"); // Overwrites the file with updated data
                if (!ofs)
                {
                    cout << "Error opening file for writing!\n";
                }
                else
                {
                    for (int i = 0; i < numEntries; i++)
                    {
                        ofs << ages[i] << endl << names[i] << endl;
                    }
                    ofs.close();
                    cout << "Data saved successfully!\n";
                }
                break;

            case '5': // Oldest, Youngest, and Average
            highestAge = ages[0];
            lowestAge = ages[0];
            highestName = names[0];
            lowestName = names[0];
            totalAges = 0;
        
            for(int i = 1; i < numEntries; i++)
            {
                // Finds the lowest Age of a Student
                if(ages[i] < lowestAge)
                {
                    lowestAge = ages[i];
                    lowestName = names[i];
                }
                // Finds the highest Age of the students
                if(ages[i] > highestAge)
                {
                    highestAge = ages[i];
                    highestName = names[i];
                }

                totalAges += ages[i];
            }
        
            //Averages the ages and returns a double
        
            average = totalAges / numEntries;

            //Display the new data
            cout << "\n" 
                 << "The oldest students age: " << highestAge << "( " << highestName << " )\n"
                 << "The youngest students age: " << lowestAge << "( " << lowestName << " )\n"
                 << "Average age: " << average << endl;

                break;

            case '6': //Quits the Program

                return 0;

            default: //Input Validation
                cout << "Invalid option. Please try again.\n";
        }

    }
    
}