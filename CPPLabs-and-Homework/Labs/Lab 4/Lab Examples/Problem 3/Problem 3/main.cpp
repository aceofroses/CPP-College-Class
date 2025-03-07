#include <iostream>
using namespace std;

int main()
{
    
    int n;
    // Asks for the number of rows
    cout << "How many rows? ";
    cin >> n;
    
    
    
    // For each row
    for(int row = 0; row < n;row++)
    {
        cout << n << ": ";
        for(int col = 0; col < n; col++)
            cout << "o";
        
        
        cout << endl;
    }
    
    cout << endl;
    
    // For each row
    for(int row=0; row<n;row++)
    {
        cout << row + 1 << ": ";
        for(int col = 0; col < row + 1; col++)
            cout << "o";
        
        
        cout << endl;
    }
    
    cout << endl;
    
    for(int row=0; row<n;row++)
    {
        cout << n - row << ": ";
        for(int col = 0; col < n - row; col++)
            cout << "o";
        
        
        cout << endl;
    }
    
    cout << endl;
    
    for(int row=0; row < n;row++)
    {
        cout << n - row + 1 << ": ";
        cout << row+1 << ": ";
        for(int col = 0; col < n - row + 1; col++)
            cout << ".";
        for(int col = 0; col < row + 1; col++)
            cout << "o";
        
        
        cout << endl;
    }

}
