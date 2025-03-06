#include <iostream>
#include <fstream>
using namespace std;

const int MAX_ENTRIES = 50; // Maximum allowed entries

int main()
{
    // 1. Declare variables and arrays
    int ages[MAX_ENTRIES]; 
    string names[MAX_ENTRIES];
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
             << "5: Quit\n"
             << "Option: ";
        cin >> option;
        cin.ignore();

        switch (option)
        {
            case '1': // Modify an Entry
                int index;
                cout << "Enter entry number (1-" << numEntries << ") to modify: ";
                cin >> index;
                cin.ignore();

                if (index >= 1 && index <= numEntries)
                {
                    index--; // Convert to 0-based index
                    cout << "Enter a new age: ";
                    cin >> ages[index];
                    cin.ignore();
                    cout << "Enter a new name: ";
                    getline(cin, names[index]);
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
                if (numEntries < MAX_ENTRIES)
                {
                    cout << "Enter age: ";
                    cin >> ages[numEntries];
                    cin.ignore();
                    cout << "Enter name: ";
                    getline(cin, names[numEntries]);
                    numEntries++;
                }
                else
                {
                    cout << "Maximum entries reached. Cannot add more.\n";
                }
                break;

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

            case '5': // Quit
                return 0;

            default:
                cout << "Invalid option. Please try again.\n";
        }
    }
}