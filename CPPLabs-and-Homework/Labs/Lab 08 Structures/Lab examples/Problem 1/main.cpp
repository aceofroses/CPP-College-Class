#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Player
{
    string name;
    string position;

};

void displayMenu();
void display( const vector<Player> &p);
void searchFor(const vector<Player> &p);
void update( vector<Player> &p, bool &saved );
void savePlayer(const vector<Player> &p, bool &saved );
void addPlayer (vector<Player> &p, bool &saved );
bool saved = true;

int main()
{
    //1. define variables and local variables

    vector<Player> players;
    ifstream ifs;
    ofstream ofs;
    string tName, tPos;
    Player tPlayer;
    int option;
    char saveCase;

    //2. read the file if available
    ifs.open("data.txt");
    if( ifs )
    {
        while( ifs>>tPlayer.name)
        {
            ifs>>tPlayer.position;
            players.push_back( tPlayer );
        }
        ifs.close();

    }else 
    {
        cout << "No file. It will be created when saved" << endl;
    }
    //3. Repeat the menu forever
    while( true )
    {
        //3.1 Display Menu
        displayMenu();
        //3.2 Read Option
        cout << "Enter an option: ";
        cin >> option;
        switch( option )
        {
        //3.3.1 Option: Display
            case 1:
                display( players );
                break;
        //3.3.2 Option: Search the array
            case 2:
                searchFor( players );

        //3.3.3 Option: Update
            case 3:
                update( players, saved );
                break;

        //3.3.4 Option: Save
            case 4:
                savePlayer( players, saved );
                break;

        //3.3.5 Option: Add player
            case 5:
                addPlayer( players, saved );
                break;

        //3.3.6 Option: Quit
            case 6: 
                if ( !saved)
                {
                    cout << "Not saved. (S)ave, (C)ancel, (N)ot Saving\n";
                    cin >> saveCase;

                    if (saveCase == 'c')
                    {
                        break;
                    }else if(saveCase == 's')
                    {
                        savePlayer( players, saved );
                        return 0;
                    }else if(saveCase == 'n')
                    {
                        return 0;
                    }
                    
                }
                return 0; //Terminates the program
            
        }
    }
}

void display( const vector<Player> &p) 
{
    int c = 1;
    cout << setw(20) << "PLAYER" << setw(20) << "POSITION" << endl;
    for( Player play:p) //play is a copy of the structure
    {
        cout << "Player: " << setw(20) << play.name << ", Postion: " << setw(20) << play.position << endl; 
    }
}

void searchFor(const vector<Player> &p)
{
    string n;

    cout << "Which player (name) are you looking for? ";
    cin >> n;

    for( int i = 0; i < p.size(); i++)
    {
        if( n == p[i].name)
        {
            cout << "Located at: " << i + 1 << endl;
            return;
        }
    }
    cout << "Player " << n << " not found" << endl;
}

void update( vector<Player> &p, bool &saved)
{
    int n;
    cout << "Which player number will be updated? ";
    cin >> n;
    cout << "New name: ";
    cin >> p[n - 1].name;
    cout << "New position: ";
    cin >> p[n -1 ].position;

    saved = false;
}

void savePlayer(const vector<Player> &p, bool &saved)
{   
    ofstream ofs;
    ofs.open("data.txt");
    for( auto play:p) // "auto" will automatically match the type
    {
        ofs << play.name << " " << play.position << endl;
    }
    cout << "File Saved" << endl;
    ofs.close();

    saved = true;
}

void addPlayer(vector<Player> &p, bool &saved)
{
    Player tPlayer;
    cout << "Name: ";
    cin >> tPlayer.name;
    cout << "Position: ";
    cin >> tPlayer.position;

    p.push_back(tPlayer);
    saved = false;
}
void displayMenu()
{
    cout << "Options:\n" 
         << "1: Display Players\n"
         << "2: Search for a player\n"
         << "3: Update player\n"
         << "4: Save data\n"
         << "5: Add Player\n"
         << "6: Quit Program\n";
}