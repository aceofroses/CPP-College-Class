#include "LibraryItem.h"
#include <iostream>
using namespace std;

int main()
{
    LibraryItem book1( "Author", "Book Name", "E-Book", 1234, "Checked Out" );
    book1.display();

    return 0;
}