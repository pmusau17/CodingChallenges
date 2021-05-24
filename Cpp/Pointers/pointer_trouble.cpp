#include <iostream>
using namespace std;
  
class Rectangle {
private:
    int length;
    int breadth;



public:
    int getVals()
    {
        std::cout<<this->length<<std::endl;
        std::cout<<this->breadth<<std::endl;
    }
};

void fun()
{
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle* p = new Rectangle();
    p->getVals();
    
}

int main()
{
    // Infinite Loop
    int count = 0;
    while (count<=10) {
        fun();
        count++;
    }
}