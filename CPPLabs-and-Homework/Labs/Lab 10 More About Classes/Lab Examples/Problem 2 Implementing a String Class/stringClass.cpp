#include <iostream>
#include <cstring>
using namespace std;

class String1
{
    private:
        char * cStringP;
    public:
        String1( const char *p)
        {
            //Allocate space for copy and get the length of the string array
             cStringP = new char[ strlen( p ) + 1];

             //Allocating the copy
             strcpy( cStringP, p);
        }

        String1( const String1 &obj )
        {
            cStringP = new char[ strlen( obj.cStringP) + 1];
            strcpy(cStringP, obj.cStringP);
        }

        //Destructor
        ~String1()
        {
            //Deletes the address attribute of the variable cStringP
            delete[] cStringP;
        }

        void print() const
        {
            cout << cStringP << endl;
        }

        //Operator Overloading
        void operator=( const String1 &right)
        {
            strcpy( cStringP, right.cStringP);
        }

        String1 operator+( String1 &right )
        {
            int s=strlen( cStringP ) + strlen(right.cStringP);
            char tempCString[ s + 1];
            strcpy(tempCString, cStringP);
            strcat(tempCString, right.cStringP );

            String1 temp( tempCString );
            
            return temp;
        }

};

int main()
{
    String1 s("Spider-man");
    String1 s2("Superman");
    String1 s3("                                 ");
    s3 = s+s2;
    s3.print();

    return 0;
}
