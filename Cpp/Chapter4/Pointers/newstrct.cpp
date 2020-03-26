 // newstrct.cpp -- using new with a structure
 #include <iostream>
 struct inflatable // structure template
 {
     char name[20];
     float volume;
     double price;
 };

 int main()
 {
     using namespace std; 
     inflatable * ps = new inflatable;           // allot memory for structure
     
     cout << "Enter name of inflatable item: ";
     cin.get(ps->name,20);                       // method 1 for member access
     
     cout << "Enter the volume in cubic feet: ";
     cin >> (*ps).volume;

     cout << "Enter the price: $";
     cin >> ps->price;

     cout << "Name: " << (*ps).name << endl;                       // method 2
     cout << "Volume: " << ps -> volume << " cubic feet" << endl;  // method 1
     cout << "Price: $" << ps -> price << endl;                    // method 1

     delete ps; // delete the memory we allocated. This is what we need
     return 0;

 }