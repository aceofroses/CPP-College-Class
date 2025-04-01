#include <iostream>
#include <iomanip>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int releaseYear;
    int runTime;
    int productionCost;
    int revenue;
};

void getInfo(MovieData *movie);

int main()
{
    MovieData movie;

    getInfo(&movie); 

    cout << "\n" << movie.title << "\n"
         << movie.director << "\n"
         << movie.releaseYear << "\n"
         << movie.runTime << "\n"
         << movie.productionCost << "\n"
         << movie.revenue << endl;

    return 0;
}

void getInfo(MovieData *movie)
{
    cout << "Title: ";
    getline(cin, movie->title);

    cout << "Name: ";
    getline(cin, movie->director);

    cout << "Release Year: ";
    cin >> movie->releaseYear;

    cout << "Movie Runtime: ";
    cin  >> movie->runTime;

    cout << "Production Cost: ";
    cin >> movie->productionCost;

    cout << "Revenue: ";
    cin >> movie->revenue;
}