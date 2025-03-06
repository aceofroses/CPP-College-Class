//DO NOT MODIFY THIS SECTION
#include <iostream>
using namespace std;
int main()
{
   int books;
   cout << "How many books the customer purchased this month? ";
   cin >> books;
//ADD YOUR CODE FROM HERE
   switch(books)
   {
           
       case 0:
           cout << "No points awarded" << endl;
           break;
       case 1:
           cout << "5 points awarded" << endl;
           break;
       case 2:
           cout << "12 points awarded" << endl;
           break;
       case 3:
           cout << "18 points awarded" << endl;
           break;
       default:
           if(books >= 4)
           {
               cout << "25 points awarded" << endl;
           }
           else
           {
               cout << "Invalid book number." << endl;
           }
   }
    return 0;

}

