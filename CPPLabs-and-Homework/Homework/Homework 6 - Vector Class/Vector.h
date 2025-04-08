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
            x = copy.x;
            y = copy.y;
        }
        // Overload the "+" operator to add 2 vectors
        Vector operator+(const Vector& overload)
        {
            return Vector( x + overload.x, y + overload.y);
        }

        Vector& operator=(const Vector& overload)
        {
            if(this == &overload) 
            {
                return *this;
            }

            this->x = overload.x;
            this->y = overload.y;

            return *this;
        }
};