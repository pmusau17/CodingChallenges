
#include <iostream>
using namespace std;
#include <memory>

//  -std=c++11

class Rectangle {
    int length;
    int breadth;
  
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
  
    int area()
    {
        return length * breadth;
    }
};

// Remember we don't have to delete the pointer because this is a smart pointer
int main()
{
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl; // This'll print 50
  
    // unique_ptr<Rectangle> P2(P1);
    
    // std::move is used to indicate that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object. 
    unique_ptr<Rectangle> P2;

    // move the contents of P2 into P1
    P2 = move(P1);
  
    // This'll print 50
    cout << P2->area() << endl;
  
    // cout<<P1->area()<<endl;
    return 0;
}