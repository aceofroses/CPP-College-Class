class Vector
{
    //Vector components
    private:
        float x;
        float y;
    public:
        // Make a constructor with the initial values
        Vector(float xCoordinate, float yCoordinate)
        {
            x = xCoordinate;
            y = yCoordinate;
        }

        // Make a deep copy of the contrstructor
        Vector(const Vector& copy)
        {
            // Copies the information of x and y into copy objects
            x = copy.x;
            y = copy.y;
        }
        // Overload the "+" operator to add 2 vectors
        Vector operator+(const Vector& overload)
        {
            return Vector( x + overload.x, y + overload.y);
        }

        // Overload the "=" opertator to assign one vector to another.
        Vector& operator=(const Vector& overload)
        {
            //If statement to check if there is a self-assignment of an object
            if(this == &overload) 
            {
                return *this; // Does nothing and returns the object
            }

            // Copy the information from x and y
            this->x = overload.x;
            this->y = overload.y;

            // Returns the copied data
            return *this;
        }
};