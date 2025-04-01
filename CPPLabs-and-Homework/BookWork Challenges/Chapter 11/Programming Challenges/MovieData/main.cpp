#include <iostream>
#include <iomanip>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int year;
    int runTime;
};

void getInfo(MovieData *movie);

int main()
{
    MovieData movie;

    getInfo(&movie); 

    cout << "\n" << movie.title << "\n"
         << movie.director << "\n"
         << movie.year << "\n"
         << movie.runTime << endl;

    return 0;
}

void getInfo(MovieData *movie)
{
    cout << "Movie Title: ";
    getline(cin, movie->title);

    cout << "Director Name: ";
    getline(cin, movie->director);

    cout << "Release Year: ";
    cin >> movie->year;

    cout << "Movie Runtime: ";
    cin  >> movie->runTime;
}