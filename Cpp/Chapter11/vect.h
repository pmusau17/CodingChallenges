// vect.h -- Vector class with <<, mode state

#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>

namespace VECTOR
{
    class Vector
    {
        private:
            double x;       // horizontal value
            double y;       // vertical value  
            double mag;     // length of vector
            double ang;     // direction of vector
            char mode;      // 'r' = rectangular, 'p' = polar

        // private methods for setting values
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();


        public:
            Vector();
            Vector(double n1, double n2, char form='r');
            void set(double n1, double n2, char form = 'r');
            ~Vector();

            double xval() const {return this -> x;}
            double yval() const {return this -> y;}

            double magval() const {return this->mag;} 
            double angval() const {return this->ang;}
            void polar_mode(); 
            void rect_mode();

            // operator overloading
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;

            // friends
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };
} // end namepsace VECTOR
#endif